/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class NSString, UIWindowScene;

@protocol MPVolumeDisplaying <Swift>

@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;
@property (nonatomic, readonly, getter=isOnScreenForVolumeDisplay) _Bool onScreenForVolumeDisplay;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly, getter=isOnScreen) _Bool onScreen;

@end
