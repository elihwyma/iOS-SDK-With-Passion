/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <UIView.h>

@class NSArray, NSTimer, PGPlaybackProgress, _PGPlaybackProgressIndicatorRangesView;

__attribute__((visibility("hidden")))
@interface PGPlaybackProgressIndicator : UIView

{
    NSTimer *_playbackProgressTimer;
    double _currentProgress;
    UIView *_containerView;
    _PGPlaybackProgressIndicatorRangesView *_loadedTimeRangesView;
    _PGPlaybackProgressIndicatorRangesView *_playbackProgressView;
    PGPlaybackProgress *_playbackProgress;
    NSArray *_loadedTimeRanges;
}

@property (retain, nonatomic) PGPlaybackProgress *playbackProgress;
@property (retain, nonatomic) NSArray *loadedTimeRanges;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updatePlaybackProgressMaskViewMaskRanges;
- (void)_updatePlaybackProgressTimer;
- (void)_updateLoadedTimeRangesMaskViewMaskRanges;

@end
