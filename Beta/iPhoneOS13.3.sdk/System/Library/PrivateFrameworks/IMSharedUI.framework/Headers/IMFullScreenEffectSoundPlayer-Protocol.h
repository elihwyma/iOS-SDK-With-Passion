/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <IMSharedUI/Swift-Protocol.h>

@protocol IMFullScreenEffectSoundPlayerDelegate;

@protocol IMFullScreenEffectSoundPlayer <Swift>

@property (weak, nonatomic) id <IMFullScreenEffectSoundPlayerDelegate> delegate;

- (unsigned short)stopPlayingSound;
- (unsigned short)initWithSoundURL:hasHapticTrack: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareToPlaySound;
- (unsigned short)startPlayingSound;

@end
