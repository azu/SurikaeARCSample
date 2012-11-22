//
//  SurikaeARCSampleTests.m
//  SurikaeARCSampleTests
//
//  Created by azu on 11/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "SurikaeARCSampleTests.h"
#import "IUTSurikae.h"

@implementation SurikaeARCSampleTests

@synthesize currentDate = _currentDate;


- (void)setUp {
    [super setUp];
}

- (void)tearDown {
    [super tearDown];
    [IUTSurikae clearAll];
}

- (void)testNSDate {
    self.currentDate = [NSDate date];
    [NSDate registedSurikaeWithSelector:@selector(date)
        surikae:^{
            return self.currentDate;
        }
    ];
    STAssertEquals([NSDate date], self.currentDate, @"same date");
}

- (void)testCheckSideAffect {
    BOOL isEqual = ([NSDate date] != self.currentDate);
    STAssertTrue(isEqual, @"異なる");
}

- (void)testInstance {
    NSDate *date = [NSDate date];
    [date surikaeWithSelector:@selector(description)
        surikae:^() {
            return @"NSDate object";
        }
        context:^() {
            STAssertEquals(@"NSDate object", date.description, @"same string");
        }
    ];
}
@end
