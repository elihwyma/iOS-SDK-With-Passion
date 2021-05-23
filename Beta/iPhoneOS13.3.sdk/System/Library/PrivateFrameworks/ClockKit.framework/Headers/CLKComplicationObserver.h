/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface CLKComplicationObserver : NSObject

{
    NSHashTable *_wakeSessionObservers;
    NSHashTable *_observers;
}

+ (id)sharedObserver;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)complicationListDidChange;
- (void)addWakeSessionObserver:(id)arg1;
- (void)removeWakeSessionObserver:(id)arg1;
- (void)wakeSessionWillBeginForBundleID:(id)arg1;
- (void)wakeSessionWillEndForBundleID:(id)arg1;
- (void)reloadOrExtendForBundleID:(id)arg1;

@end
