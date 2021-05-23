/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableSet, NSNotificationCenter, NSString;

@interface NUExtensionAppActivityMonitor : NSObject

{
    NSNotificationCenter *_notificationCenter;
    NSHashTable *_observers;
    NSMutableSet *_foregroundObserverBlocks;
    NSMutableSet *_backgroundObserverBlocks;
    NSMutableSet *_windowForegroundObserverBlocks;
    NSMutableSet *_windowBackgroundObserverBlocks;
}

@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) NSMutableSet *foregroundObserverBlocks;
@property (nonatomic, readonly) NSMutableSet *backgroundObserverBlocks;
@property (nonatomic, readonly) NSMutableSet *windowForegroundObserverBlocks;
@property (nonatomic, readonly) NSMutableSet *windowBackgroundObserverBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithNotificationCenter:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)performOnApplicationDidEnterBackground:(CDUnknownBlockType)arg1;
- (void)performOnApplicationDidBecomeActive:(CDUnknownBlockType)arg1;
- (void)performOnApplicationWillEnterForeground:(CDUnknownBlockType)arg1;
- (void)performOnApplicationWindowDidBecomeForeground:(CDUnknownBlockType)arg1;
- (void)performOnApplicationWindowDidBecomeBackground:(CDUnknownBlockType)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;

@end
