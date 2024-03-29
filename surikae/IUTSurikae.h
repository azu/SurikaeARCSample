/*

Copyright (c) 2012, ITO SOFT DESIGN Inc.
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER 
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING 
IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY 
OF SUCH DAMAGE.

*/

#import <Foundation/Foundation.h>
#import "surikae.h"


@interface IUTSurikae : NSObject

+ (void)clearAll;

@end

@interface IUTSurikae(deprecated)

+ (void)surikaeWithClassName:(NSString *)className methodName:(NSString *)methodName surikae:(block_t)surikaeBlock context:(void (^)(void))contextBlock __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_5,__MAC_10_5,__IPHONE_5_0,__IPHONE_5_0);
+ (IUTSurikae *)registedSurikaeWithClassName:(NSString *)className methodName:(NSString *)methodName surikae:(block_t)surikaeBlock __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_5,__MAC_10_5,__IPHONE_5_0,__IPHONE_5_0);

- (id)initWithClassName:(NSString *)className methodName:(NSString *)methodName surikae:(block_t)surikaeBlock __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_10_5,__MAC_10_5,__IPHONE_5_0,__IPHONE_5_0);

@end

@interface NSObject(IUTSurikae)

+ (void)surikaeWithSelector:(SEL)selector surikae:(block_t)surikaeBlock context:(void (^)(void))contextBlock;
+ (void)surikaeInstanceMethod:(SEL)selector surikae:(block_t)surikaeBlock context:(void (^)(void))contextBlock;
- (void)surikaeWithSelector:(SEL)selector surikae:(block_t)surikaeBlock context:(void (^)(void))contextBlock;

+ (IUTSurikae *)surikaeWithSelector:(SEL)selector surikae:(block_t)surikaeBlock;
+ (IUTSurikae *)surikaeInstanceMethod:(SEL)selector surikae:(block_t)surikaeBlock;


+ (void)registedSurikaeWithSelector:(SEL)selector surikae:(block_t)surikaeBlock;
+ (void)registedSurikaeInstanceMethod:(SEL)selector surikae:(block_t)surikaeBlock;
- (void)registedSurikaeWithSelector:(SEL)selector surikae:(block_t)surikaeBlock;

+ (void)removeAllSurikaes;

@end
