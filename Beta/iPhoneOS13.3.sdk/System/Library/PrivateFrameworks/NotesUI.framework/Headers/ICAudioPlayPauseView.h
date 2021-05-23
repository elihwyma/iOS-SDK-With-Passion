/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class AVAsset, CALayer, ICAttachment, ICNoteEditorIconImageView;

@interface ICAudioPlayPauseView : UIView

{
    ICAttachment *_audioAttachment;
    CALayer *_backgroundLayer;
    ICNoteEditorIconImageView *_playView;
    ICNoteEditorIconImageView *_pauseView;
}

@property (retain, nonatomic) CALayer *backgroundLayer;
@property (retain, nonatomic) ICNoteEditorIconImageView *playView;
@property (retain, nonatomic) ICNoteEditorIconImageView *pauseView;
@property (nonatomic, readonly) AVAsset *audio;
@property (retain, nonatomic) ICAttachment *audioAttachment;
@property (nonatomic, readonly) _Bool isPlaying;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)pause;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)play;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (void)tapGesture:(id)arg1;
- (void)togglePlayPause;
- (void)updateTime:(double)arg1 duration:(double)arg2;
- (void)sharedInit;
- (void)audioWillChange;
- (void)audioDidChange;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)showStopped;
- (void)didPlayToEndNotification:(id)arg1;
- (id)addSubImageViewForImage:(id)arg1;
- (void)showPressed:(_Bool)arg1;
- (void)showPlaying;
- (void)showPaused;
- (void)audioPlaybackPlayNotification:(id)arg1;
- (void)audioPlaybackPauseNotification:(id)arg1;
- (void)audioPlaybackStopNotification:(id)arg1;
- (void)audioPlaybackTimeChangedNotification:(id)arg1;
- (void)setImageNamed:(id)arg1 onLayer:(id)arg2 adjustLayerSize:(_Bool)arg3;
- (struct UIColor *)foregroundStrokeColor;

@end
