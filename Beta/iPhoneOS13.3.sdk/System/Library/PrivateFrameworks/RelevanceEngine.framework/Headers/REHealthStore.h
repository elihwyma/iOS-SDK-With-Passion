/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class HKHealthStore, NSObject;

@protocol OS_dispatch_queue;

@interface REHealthStore : RESingleton

{
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)_init;
- (void)accessHealthStore:(CDUnknownBlockType)arg1;
- (id)_createStore;
- (_Bool)_isClockHostApp;

@end
