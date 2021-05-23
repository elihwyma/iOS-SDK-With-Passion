/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSUWeakReference;

@interface TSKCountedObserver : NSObject

{
    TSUWeakReference *mWeakObserver;
    unsigned long long mCount;
}

- (void)dealloc;
- (id)observer;
- (unsigned long long)incrementCount;
- (id)initWithObserver:(id)arg1;
- (unsigned long long)decrementCount;

@end
