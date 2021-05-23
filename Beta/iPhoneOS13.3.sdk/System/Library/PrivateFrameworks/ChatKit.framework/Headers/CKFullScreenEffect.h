/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKAudioController, CKMessagePartChatItem, NSString;

@protocol CKFullScreenEffectDelegate;

@interface CKFullScreenEffect : NSObject

{
    CKAudioController *_audioController;
    float _currentVolume;
    BOOL messageOrientation;
    _Bool _triggeredByResponseKit;
    NSString *_identifier;
    CKMessagePartChatItem *_triggeringChatItem;
    id <CKFullScreenEffectDelegate> _delegate;
}

@property (nonatomic) _Bool triggeredByResponseKit;
@property (nonatomic) BOOL messageOrientation;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CKMessagePartChatItem *triggeringChatItem;
@property (weak, nonatomic) id <CKFullScreenEffectDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_monochromeDimmingFilterWithType:(int)arg1;
+ (id)bigEmojiFilter;
+ (id)tapBackFilter;
+ (id)stickerFilter;

- (void)dealloc;
- (double)duration;
- (unsigned long long)layerCount;
- (id)backgroundColor;
- (_Bool)effectIsDark;
- (void)prepareSoundEffect;
- (void)stopSoundEffect;
- (void)applyMessageFiltersToCells:(id)arg1;
- (void)applyMessageFiltersToTriggeringCell:(id)arg1;
- (Class)effectViewClass;
- (_Bool)isForegroundEffect;
- (_Bool)shouldDrawOverNavigationBar;
- (void)playSoundEffect;
- (void)clearMessageFiltersFromCells:(id)arg1;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioController:(id)arg1 didPrepareMediaObjectToPlay:(id)arg2 successfully:(_Bool)arg3;
- (int)_filterTypeForCell:(id)arg1 caresAboutOrientation:(_Bool *)arg2 orientation:(char *)arg3;
- (id)messageFilters;
- (void)animateFiltersForCell:(id)arg1;
- (_Bool)_supportsSoundEffects;
- (id)soundEffectFileURL;
- (_Bool)soundEffectHasHapticTrack;
- (void)_audioSessionOptionsWillChange:(id)arg1;
- (void)_didPrepareSoundEffect;
- (void)_ensureAudioPlayer;

@end
