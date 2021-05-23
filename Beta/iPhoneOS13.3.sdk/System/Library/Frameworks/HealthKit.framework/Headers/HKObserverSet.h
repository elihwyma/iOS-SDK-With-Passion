/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSString;

@protocol OS_dispatch_queue, OS_os_log;

@interface HKObserverSet : NSObject

{
    NSMapTable *_observerMap;
    NSString *_name;
    NSObject<OS_os_log> *_category;
    NSObject<OS_dispatch_queue> *_defaultObserverQueue;
    struct os_unfair_lock_s _lock;
}

@property (readonly) unsigned long long count;
@property (copy, readonly) NSArray *allObservers;

- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)_registerObserver:(id)arg1 queue:(id)arg2;
- (void)_notifyObserver:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 loggingCategory:(id)arg2;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)notifyObservers:(CDUnknownBlockType)arg1;
- (void)notifyObserver:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
