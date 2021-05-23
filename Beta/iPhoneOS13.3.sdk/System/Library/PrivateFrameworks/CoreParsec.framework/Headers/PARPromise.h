/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class FutureValue;

@interface PARPromise : NSObject

{
    FutureValue *_futureValue;
    _Atomic _Bool _fulfilled;
}

- (id)init;
- (void)dealloc;
- (id)future;
- (void)fulfill:(id)arg1;
- (id)futureValue;

@end
