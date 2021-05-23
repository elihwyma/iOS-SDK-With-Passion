/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class FutureValue;

@interface PARFuture : NSObject

{
    FutureValue *_futureValue;
}

- (id)wait:(unsigned long long)arg1;
- (id)initFromPromise:(id)arg1;
- (id)initFulfilled:(id)arg1;
- (id)waitForever;
- (id)then:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end
