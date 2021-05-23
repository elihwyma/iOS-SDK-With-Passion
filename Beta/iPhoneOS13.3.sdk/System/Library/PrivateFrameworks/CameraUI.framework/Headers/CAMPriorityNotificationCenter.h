/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNotificationCenter;

@interface CAMPriorityNotificationCenter : NSObject

{
    NSNotificationCenter *__notificationCenter;
    NSMutableDictionary *__observersByNameHighPriority;
    NSMutableDictionary *__observersByNameNormalPriority;
}

@property (retain, nonatomic, readonly) NSNotificationCenter *_notificationCenter;
@property (retain, nonatomic, readonly) NSMutableDictionary *_observersByNameHighPriority;
@property (retain, nonatomic, readonly) NSMutableDictionary *_observersByNameNormalPriority;

+ (id)defaultCenter;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)removeObserver:(id)arg1;
- (id)_observersForPriority:(unsigned long long)arg1;
- (id)_entriesByName:(id)arg1 forPriority:(unsigned long long)arg2 creatingEmptyIfNeeded:(_Bool)arg3;
- (void)_postNotification:(id)arg1 forEntries:(id)arg2;
- (void)_notificationReceiver:(id)arg1;
- (void)addObserver:(id)arg1 priority:(unsigned long long)arg2 selector:(SEL)arg3 name:(id)arg4 object:(id)arg5;
- (id)_allSubscriptions;
- (void)_removeObserver:(id)arg1 fromObserversByName:(id)arg2;

@end
