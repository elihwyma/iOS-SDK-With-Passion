/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKColoredBalloonView.h>

@class CKAudioProgressView, CKWaveformProgressView, NSString, UILabel;

@interface CKAudioBalloonView : CKColoredBalloonView

{
    _Bool _playing;
    _Bool _played;
    double _time;
    double _duration;
    UILabel *_timeLabel;
    CKAudioProgressView *_progressView;
    CKWaveformProgressView *_waveformProgressView;
}

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) CKAudioProgressView *progressView;
@property (retain, nonatomic) CKWaveformProgressView *waveformProgressView;
@property (nonatomic) double time;
@property (nonatomic) double duration;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic, getter=isPlayed) _Bool played;
@property (nonatomic) long long waveformContentMode;
@property (nonatomic, getter=isControlHidden) _Bool controlHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)prepareForDisplay;
- (void)updateProgress;
- (void)setWaveform:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;
- (void)updateTimeString;

@end
