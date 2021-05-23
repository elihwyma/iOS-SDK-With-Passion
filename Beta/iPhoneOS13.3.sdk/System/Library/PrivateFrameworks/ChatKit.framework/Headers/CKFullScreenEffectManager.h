/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKFullScreenEffect, CKScheduledUpdater, NSMutableArray, NSString, NSTimer;

@protocol CKFullScreenEffectManagerDelegate;

@interface CKFullScreenEffectManager : NSObject

{
    CKFullScreenEffect *_currentEffect;
    NSObject<CKFullScreenEffectManagerDelegate> *_delegate;
    NSMutableArray *_effectQueue;
    NSTimer *_effectDurationTimer;
    CKScheduledUpdater *_triggerUpdater;
}

@property (retain, nonatomic) CKFullScreenEffect *currentEffect;
@property (retain, nonatomic) NSMutableArray *effectQueue;
@property (retain, nonatomic) NSTimer *effectDurationTimer;
@property (retain, nonatomic) CKScheduledUpdater *triggerUpdater;
@property (weak, nonatomic) NSObject<CKFullScreenEffectManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)idleDurationAfterEffectWithIdentifier:(id)arg1;
+ (id)localizedMaskStringForEffectWithIdentifier:(id)arg1;
+ (double)delayBeforeEffectWithIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)triggerNextEffect;
- (id)fullscreenEffectMap;
- (id)effectForIdentifier:(id)arg1;
- (id)effectIdentifiers;
- (void)stopFullscreenEffect;
- (void)fullScreenEffectDidPrepareSoundEffect:(id)arg1;
- (id)localizedDisplayNameForEffectWithIdentifier:(id)arg1;
- (id)localizedPickerTitleForEffectWithIdentifier:(id)arg1;
- (void)startFullscreenEffectForChatItem:(id)arg1 language:(id)arg2;

@end
