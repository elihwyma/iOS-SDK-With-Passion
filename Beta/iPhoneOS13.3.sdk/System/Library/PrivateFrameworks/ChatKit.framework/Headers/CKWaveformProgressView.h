/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKBalloonImageView.h>

@class IMManualUpdater, UIImage;

@interface CKWaveformProgressView : CKBalloonImageView

{
    BOOL _color;
    _Bool _playing;
    _Bool _played;
    double _duration;
    double _currentTime;
    UIImage *_waveform;
    IMManualUpdater *_displayUpdater;
}

@property (retain, nonatomic) IMManualUpdater *displayUpdater;
@property (nonatomic) BOOL color;
@property (nonatomic) double duration;
@property (nonatomic) double currentTime;
@property (retain, nonatomic) UIImage *waveform;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic, getter=isPlayed) _Bool played;

- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForDisplay;
- (void)prepareForDisplayIfNeeded;
- (void)setNeedsPrepareForDisplay;

@end
