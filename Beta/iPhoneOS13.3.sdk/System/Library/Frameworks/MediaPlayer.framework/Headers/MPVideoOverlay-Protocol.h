/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, MPAVItem, UINavigationBar;

@protocol MPVideoControllerProtocol, MPVideoOverlayDelegate;

@protocol MPVideoOverlay

@property (weak, nonatomic) id <MPVideoControllerProtocol> videoViewController;
@property (nonatomic) _Bool allowsWirelessPlayback;
@property (nonatomic) _Bool navigationBarHidden;
@property (retain, nonatomic) MPAVController *player;
@property (retain, nonatomic, readonly) UINavigationBar *navigationBar;
@property (weak, nonatomic) id <MPVideoOverlayDelegate> delegate;
@property (retain, nonatomic) MPAVItem *item;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) unsigned long long visibleParts;
@property (nonatomic) unsigned long long disabledParts;

- (unsigned short)setDesiredParts:animate: /* Error: Ran out of types for this method. */;
- (unsigned short)setVisibleParts:animate: /* Error: Ran out of types for this method. */;
- (unsigned short)startTicking;
- (unsigned short)stopTicking;
- (unsigned short)updateTimeBasedValues;
- (unsigned short)showAlternateTracks;
- (unsigned short)hideAlternateTracks;

@end
