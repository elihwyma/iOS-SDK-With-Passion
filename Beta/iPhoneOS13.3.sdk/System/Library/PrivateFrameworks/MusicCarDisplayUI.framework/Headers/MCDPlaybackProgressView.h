/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIView.h>

@interface MCDPlaybackProgressView : UIView

{
    _Bool _highlighted;
    _Bool _shouldResizeCurrentProgress;
    double _playbackProgress;
    UIView *_overallProgressView;
    UIView *_currentProgressView;
}

@property (retain, nonatomic) UIView *overallProgressView;
@property (retain, nonatomic) UIView *currentProgressView;
@property (nonatomic) _Bool shouldResizeCurrentProgress;
@property (nonatomic) double playbackProgress;
@property (nonatomic) _Bool highlighted;

- (id)init;
- (void)layoutSubviews;
- (void)setProgressViewHighlighted:(_Bool)arg1;

@end
