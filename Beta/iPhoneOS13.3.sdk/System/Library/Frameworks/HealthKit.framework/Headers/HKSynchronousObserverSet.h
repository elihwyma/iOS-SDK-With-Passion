/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSString;

@protocol OS_os_log;

@interface HKSynchronousObserverSet : NSObject

{
    NSHashTable *_observerTable;
    NSString *_name;
    NSObject<OS_os_log> *_category;
    struct os_unfair_lock_s _lock;
}

@property (readonly) unsigned long long count;
@property (copy, readonly) NSArray *allObservers;

- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (id)initWithName:(id)arg1 loggingCategory:(id)arg2;
- (void)notifyObservers:(CDUnknownBlockType)arg1;

@end
