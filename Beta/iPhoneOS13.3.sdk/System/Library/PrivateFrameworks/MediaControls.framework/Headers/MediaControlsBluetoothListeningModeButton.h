/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <MediaControls/MediaControlsExpandableButton.h>

@class MediaControlsHapticPlayer, NSSet, NSString, UIColor;

@interface MediaControlsBluetoothListeningModeButton : MediaControlsExpandableButton

{
    NSSet *_availableListeningModes;
    MediaControlsHapticPlayer *_hapticPlayer;
    UIColor *_offColor;
}

@property (retain, nonatomic) MediaControlsHapticPlayer *hapticPlayer;
@property (retain, nonatomic) UIColor *offColor;
@property (retain, nonatomic) NSSet *availableListeningModes;
@property (retain, nonatomic) NSString *selectedListeningMode;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initForControlCenter;
- (void)setSelectedListeningMode:(id)arg1 animated:(_Bool)arg2;
- (void)playRequiresBothBudsInEarErrorHaptic;
- (void)playValueChangedEventHaptic;
- (void)_springAnimate:(CDUnknownBlockType)arg1;
- (void)playFailedValueChangedEventHaptic;
- (void)playFailedValueChangedEventHapticWithMessage:(id)arg1;

@end
