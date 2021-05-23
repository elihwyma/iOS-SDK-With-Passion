/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface BYSetupStateNotifier : NSObject

{
    _Bool _shouldRelaunchSetup;
    int _stateNotificationToken;
    int _shouldRemainAliveNotificationToken;
    int _exclusiveNotificationToken;
    unsigned long long _state;
    NSMutableArray *_generalStateNotificationBlocks;
    NSMutableDictionary *_specificStateNotificationBlocks;
    NSMutableArray *_exclusiveNotificationBlocks;
    NSMutableArray *_relaunchStateNotificationBlocks;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *generalStateNotificationBlocks;
@property (retain, nonatomic) NSMutableDictionary *specificStateNotificationBlocks;
@property (retain, nonatomic) NSMutableArray *exclusiveNotificationBlocks;
@property (retain, nonatomic) NSMutableArray *relaunchStateNotificationBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) _Bool shouldRelaunchSetup;
@property (nonatomic) int stateNotificationToken;
@property (nonatomic) int shouldRemainAliveNotificationToken;
@property (nonatomic) int exclusiveNotificationToken;

+ (id)sharedNotifier;

- (id)init;
- (void)dealloc;
- (unsigned long long)currentState;
- (void)notifySetupShouldRemainAlive;
- (void)_endObservingState;
- (void)_beginObservingState;
- (void)_stateChangedTo:(unsigned long long)arg1;
- (void)_noLongerExclusiveNotificationFired;
- (void)_shouldRemainAliveNotificationFired;
- (void)addStateChangeObserver:(CDUnknownBlockType)arg1;
- (void)addStateCompletionObserver:(CDUnknownBlockType)arg1 forState:(unsigned long long)arg2;
- (void)addObserverWhenSetupIsNoLongerExclusiveWithNotificationBlock:(CDUnknownBlockType)arg1;
- (void)addRelaunchStateChangeObserver:(CDUnknownBlockType)arg1;
- (void)notifyStateChangedTo:(unsigned long long)arg1;

@end
