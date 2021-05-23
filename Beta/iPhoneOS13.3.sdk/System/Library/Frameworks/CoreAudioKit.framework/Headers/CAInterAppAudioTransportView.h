/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <UIKit/UIView.h>

@class CAUITransportButton, NSTimer, UIColor, UIFont, UILabel;

@interface CAInterAppAudioTransportView : UIView

{
    CAUITransportButton *rewindButton;
    CAUITransportButton *playPauseButton;
    CAUITransportButton *recordButton;
    UILabel *currentTimeLabel;
    UIColor *pauseButtonColor;
    UIColor *playButtonColor;
    struct OpaqueAudioComponentInstance *outputUnit;
    struct HostCallbackInfo *callBackInfo;
    NSTimer *pollingPlayerTimer;
    _Bool enabled;
    _Bool inForeground;
    _Bool _playing;
    _Bool _recording;
    _Bool _connected;
    double _playTime;
    UIFont *_currentTimeLabelFont;
}

@property (getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly, getter=isRecording) _Bool recording;
@property (nonatomic, readonly, getter=isConnected) _Bool connected;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIFont *currentTimeLabelFont;
@property (retain, nonatomic) UIColor *rewindButtonColor;
@property (retain, nonatomic) UIColor *playButtonColor;
@property (retain, nonatomic) UIColor *pauseButtonColor;
@property (retain, nonatomic) UIColor *recordButtonColor;

- (void)dealloc;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)togglePlayback:(id)arg1;
- (_Bool)canPlay;
- (void)audioUnitPropertyChangedListener:(void *)arg1 unit:(struct OpaqueAudioComponentInstance *)arg2 propID:(unsigned int)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5;
- (void)rewindAction:(id)arg1;
- (void)toggleRecording:(id)arg1;
- (void)appHasGoneInBackground;
- (void)appHasGoneForeground;
- (void)updateTransportControls;
- (_Bool)isHostConnected;
- (void)pollHost;
- (id)getPlayTimeString;
- (void)updateStatefromTransportCallBack;
- (void)stopPollingPlayer;
- (void)startPollingPlayer;
- (void)getHostCallbackInfo;
- (void)sendStateToRemoteHost:(unsigned int)arg1;
- (_Bool)canRecord;
- (_Bool)canRewind;
- (void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;

@end
