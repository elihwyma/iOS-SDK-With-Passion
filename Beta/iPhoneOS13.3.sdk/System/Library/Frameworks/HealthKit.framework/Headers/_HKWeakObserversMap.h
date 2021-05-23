/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _HKWeakObserversMap : NSObject

{
    NSMutableDictionary *_observers;
}

- (void)addObserver:(id)arg1 forKey:(id)arg2;
- (void)removeObserver:(id)arg1 forKey:(id)arg2;
- (unsigned long long)observerCountForKey:(id)arg1;
- (id)observersForKey:(id)arg1;

@end
