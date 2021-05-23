/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@class IMFullScreenEffect, IMFullScreenEffectPlayer, IMScheduledUpdater, NSMutableArray, NSString;

@protocol IMFullScreenEffectManagerDelegate;

@interface IMFullScreenEffectManager : NSObject

{
    id <IMFullScreenEffectManagerDelegate> _delegate;
    IMFullScreenEffectPlayer *_currentEffectPlayer;
    NSMutableArray *_effectQueue;
    IMScheduledUpdater *_triggerUpdater;
}

@property (retain, nonatomic) IMFullScreenEffectPlayer *currentEffectPlayer;
@property (retain, nonatomic) NSMutableArray *effectQueue;
@property (retain, nonatomic) IMScheduledUpdater *triggerUpdater;
@property (weak, nonatomic) id <IMFullScreenEffectManagerDelegate> delegate;
@property (nonatomic, readonly) IMFullScreenEffect *currentEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)triggerNextEffect;
- (_Bool)isFullScreenEffectQueued:(id)arg1;
- (void)willStartFullScreenEffect:(id)arg1;
- (void)_stopCurrentFullscreenEffect:(_Bool)arg1;
- (void)stopCurrentFullscreenEffectPlayer;
- (void)queueFullScreenEffectPlayer:(id)arg1 withRepeating:(_Bool)arg2;
- (void)fullScreenEffectPlayerDidPrepare:(id)arg1;
- (void)fullScreenEffectPlayerDidStart:(id)arg1;
- (void)fullScreenEffectPlayerDidFinish:(id)arg1;
- (void)stopAllFullscreenEffectPlayers;
- (double)adjustedEffectDurationForTesting:(id)arg1;

@end
