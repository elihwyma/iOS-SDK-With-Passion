/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableSet, NSNotificationCenter, NSString;

@interface NUApplicationAppActivityMonitorMacOS : NSObject

{
    _Bool _windowIsForeground;
    _Bool _becomingActive;
    NSNotificationCenter *_notificationCenter;
    NSHashTable *_observers;
    NSString *_windowBecameFrontmostNotificationName;
    NSString *_windowLostFrontmostNotificationName;
    NSMutableSet *_foregroundObserverBlocks;
    NSMutableSet *_backgroundObserverBlocks;
    NSMutableSet *_windowForegroundObserverBlocks;
    NSMutableSet *_windowBackgroundObserverBlocks;
}

@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSHashTable *observers;
@property (copy, nonatomic, readonly) NSString *windowBecameFrontmostNotificationName;
@property (copy, nonatomic, readonly) NSString *windowLostFrontmostNotificationName;
@property (nonatomic, readonly) NSMutableSet *foregroundObserverBlocks;
@property (nonatomic, readonly) NSMutableSet *backgroundObserverBlocks;
@property (nonatomic, readonly) NSMutableSet *windowForegroundObserverBlocks;
@property (nonatomic, readonly) NSMutableSet *windowBackgroundObserverBlocks;
@property (nonatomic, getter=isWindowForeground) _Bool windowIsForeground;
@property (nonatomic, getter=isBecomingActive) _Bool becomingActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)activityObservingApplicationDidFinishLaunchingNotification:(id)arg1;
- (void)activityObservingApplicationWillEnterForegroundNotification:(id)arg1;
- (void)_markWindowAsForeground;
- (void)_markWindowAsBackground;
- (void)performOnApplicationDidEnterBackground:(CDUnknownBlockType)arg1;
- (void)performOnApplicationDidBecomeActive:(CDUnknownBlockType)arg1;
- (void)performOnApplicationWillEnterForeground:(CDUnknownBlockType)arg1;
- (void)performOnApplicationWindowDidBecomeForeground:(CDUnknownBlockType)arg1;
- (void)performOnApplicationWindowDidBecomeBackground:(CDUnknownBlockType)arg1;
- (id)initWithNotificationCenter:(id)arg1 windowBecameFrontmostNotificationName:(id)arg2 windowLostFrontmostNotificationName:(id)arg3;

@end
