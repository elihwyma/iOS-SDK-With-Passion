/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, NSString, SBUIBannerContext, SBUISound;

@protocol SBStarkBannerTargetObserver;

@interface SBStarkBannerTarget : NSObject

{
    id <SBStarkBannerTargetObserver> _observer;
    NSHashTable *_sources;
    _Bool _invalidated;
    unsigned long long _suspensionReasons;
    NSMutableArray *_pendedContexts;
    SBUIBannerContext *_currentContext;
    SBUISound *_currentSound;
    long long _displayAssertions;
}

@property (weak, nonatomic) id <SBStarkBannerTargetObserver> observer;
@property (nonatomic, getter=isPausedForUserInteraction) _Bool pausedForUserInteraction;
@property (nonatomic, readonly) SBUIBannerContext *currentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) void *bannerTargetIdentifier;
@property (nonatomic, readonly) long long bannerTargetIdiom;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (_Bool)isSuspended;
- (void)registerSource:(id)arg1;
- (void)unregisterSource:(id)arg1;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (_Bool)isShowingModalBanner;
- (void)signalSource:(id)arg1;
- (id)currentBannerContextForSource:(id)arg1;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeCachedBannerForContext:(id)arg1;
- (void)noteContextCanceled:(id)arg1;
- (void)setSuspensionReasons:(unsigned long long)arg1 cancellingCurrent:(_Bool)arg2;
- (void)noteContext:(id)arg1 subActionSelected:(unsigned long long)arg2;
- (void)noteContextSelected:(id)arg1;
- (void)_dequeueWithOptions:(long long)arg1 dismissReason:(int)arg2;
- (_Bool)_isSuspendedOnlyForAssistant;
- (void)_dismissContext:(id)arg1 withOptions:(long long)arg2 dismissReason:(int)arg3;
- (void)_replaceIntervalElapsed:(id)arg1;
- (void)_dismissIntervalElapsed:(id)arg1;
- (void)_killIntervalElapsed:(id)arg1;
- (_Bool)_canDismissWithOptions:(long long)arg1;

@end
