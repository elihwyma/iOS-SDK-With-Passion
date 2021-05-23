/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@class IMFullScreenEffect, IMMessagePartChatItem, NSString, NSTimer, UIImage;

@protocol IMFullScreenEffectPlayerDelegate, IMFullScreenEffectSoundPlayer;

@interface IMFullScreenEffectPlayer : NSObject

{
    _Bool _wasAborted;
    _Bool _shouldRepeat;
    _Bool _triggeredByResponseKit;
    _Bool _isFromMe;
    IMFullScreenEffect *_fullScreenEffect;
    id <IMFullScreenEffectSoundPlayer> _soundPlayer;
    IMMessagePartChatItem *_messagePartChatItem;
    struct UIImage *_messageImage;
    double _startTime;
    double _endTime;
    NSString *_languageCode;
    NSTimer *_effectTimer;
    NSString *_identifier;
    id <IMFullScreenEffectPlayerDelegate> _delegate;
}

@property (weak, nonatomic) NSTimer *effectTimer;
@property (retain, nonatomic) IMFullScreenEffect *fullScreenEffect;
@property (weak, nonatomic) IMMessagePartChatItem *messagePartChatItem;
@property (nonatomic) _Bool triggeredByResponseKit;
@property (retain, nonatomic) id <IMFullScreenEffectSoundPlayer> soundPlayer;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool isFromMe;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) _Bool wasAborted;
@property (weak, nonatomic) id <IMFullScreenEffectPlayerDelegate> delegate;
@property (nonatomic) _Bool shouldRepeat;
@property (retain, nonatomic) UIImage *messageImage;
@property (nonatomic, readonly) _Bool isPlaying;
@property (nonatomic, readonly) _Bool didPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stopTimer;
- (void)startTimer;
- (void)_didPrepare;
- (void)loadFullScreenEffect:(CDUnknownBlockType)arg1;
- (void)abortPlayingEffect;
- (void)prepareToPlayEffect;
- (void)startPlayingEffect;
- (_Bool)_shouldAddFilter:(id)arg1 toCell:(id)arg2;
- (void)addFullScreenEffectFiltersToCells:(id)arg1;
- (void)removeFullScreenEffectFiltersFromCells:(id)arg1;
- (void)addFullScreenEffectFilterToTriggeringCell:(id)arg1;
- (void)fullScreenEffectSoundPlayerDidStopPlaying:(id)arg1;
- (void)fullScreenEffectSoundPlayerDidStartPlaying:(id)arg1;
- (void)fullScreenEffectSoundPlayerDidPrepare:(id)arg1;
- (id)initWithIdentifier:(id)arg1 isFromMe:(_Bool)arg2;
- (id)createSoundPlayer;
- (void)didSetFullScreenEffect:(id)arg1;
- (void)_setFullScreenEffect:(id)arg1;
- (void)didAbortPlaying;
- (void)didStopPlaying;
- (void)willStartPlaying;
- (id)initWithMessagePartChatItem:(id)arg1 languageCode:(id)arg2;
- (void)stopPlayingEffect;

@end
