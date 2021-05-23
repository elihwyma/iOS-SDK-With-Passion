/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKAudioController, CKAudioMediaObject, NSString, UIButton, UIImage, UIImageView, UILabel, UIVisualEffectView;

@protocol CKMessageEntryRecordedAudioViewDelegate;

__attribute__((visibility("hidden")))
@interface CKMessageEntryRecordedAudioView : UIView

{
    CKAudioMediaObject *_audioMediaObject;
    UIButton *_deleteButton;
    id <CKMessageEntryRecordedAudioViewDelegate> _delegate;
    UIVisualEffectView *_blurView;
    UIImageView *_balloonImageView;
    CKAudioController *_audioController;
    UILabel *_timeLabel;
    UIImage *_waveformImage;
    UIImageView *_waveformImageView;
    double _time;
    NSString *_timeFormat;
}

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIImageView *balloonImageView;
@property (retain, nonatomic) CKAudioController *audioController;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImage *waveformImage;
@property (retain, nonatomic) UIImageView *waveformImageView;
@property (nonatomic) double time;
@property (copy, nonatomic) NSString *timeFormat;
@property (retain, nonatomic) CKAudioMediaObject *audioMediaObject;
@property (nonatomic, readonly) _Bool isPlaying;
@property (weak, nonatomic) id <CKMessageEntryRecordedAudioViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)play;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateProgress;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (void)updateTimeString;

@end
