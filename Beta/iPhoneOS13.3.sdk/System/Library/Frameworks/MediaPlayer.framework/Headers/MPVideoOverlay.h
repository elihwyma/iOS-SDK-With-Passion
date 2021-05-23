/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class MPAVController, MPAVItem, MPDetailSlider, NSMutableDictionary, NSString, UINavigationBar;

@protocol MPVideoControllerProtocol, MPVideoOverlayDelegate;

@interface MPVideoOverlay : UIView

{
    id <MPVideoControllerProtocol> _videoViewController;
    id <MPVideoOverlayDelegate> _delegate;
    MPAVItem *_item;
    MPAVController *_player;
    MPDetailSlider *_scrubControl;
    long long _interfaceOrientation;
    _Bool _controlsAutohideDisabled;
    _Bool _wantsTick;
    unsigned long long _desiredParts;
    unsigned long long _visibleParts;
    unsigned long long _disabledParts;
    NSMutableDictionary *_tickTimeEvents;
    double _lastTickTime;
}

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (double)_duration;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(_Bool)arg2;
- (void)registerForPlayerNotifications;
- (void)unregisterForPlayerNotifications;
- (void)startTicking;
- (void)stopTicking;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (_Bool)updateTimeBasedValues;
- (void)showAlternateTracks;
- (void)hideAlternateTracks;
- (void)_endSliderTracking;
- (void)_tickNotification:(id)arg1;
- (void)performSelector:(SEL)arg1 whenTickingPastTime:(double)arg2;
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)arg1;
- (double)_playableDuration;

@end
