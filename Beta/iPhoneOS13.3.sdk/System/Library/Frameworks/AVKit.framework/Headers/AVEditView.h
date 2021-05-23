/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class NSString, UIMovieScrubber;

@protocol AVEditViewDataSource, AVEditViewDelegate;

__attribute__((visibility("hidden")))
@interface AVEditView : UIView

{
    _Bool _prefersThumbVisible;
    _Bool _scrubbing;
    _Bool _trimming;
    id <AVEditViewDataSource> _dataSource;
    id <AVEditViewDelegate> _delegate;
    UIMovieScrubber *_movieScrubber;
}

@property (retain) UIMovieScrubber *movieScrubber;
@property (nonatomic, getter=isScrubbing) _Bool scrubbing;
@property (nonatomic, getter=isTrimming) _Bool trimming;
@property (weak, nonatomic) id <AVEditViewDataSource> dataSource;
@property (weak, nonatomic) id <AVEditViewDelegate> delegate;
@property (nonatomic) _Bool prefersThumbVisible;
@property (nonatomic, readonly) double trimStartTime;
@property (nonatomic, readonly) double trimEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)reloadData;
- (void)movieScrubber:(id)arg1 valueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingStartValueDidChange:(double)arg2;
- (void)movieScrubber:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)movieScrubberWillBeginRequestingThumbnails:(id)arg1;
- (void)movieScrubberDidFinishRequestingThumbnails:(id)arg1;
- (double)movieScrubberDuration:(id)arg1;
- (void)movieScrubberDidBeginScrubbing:(id)arg1 withHandle:(int)arg2;
- (void)movieScrubberDidEndScrubbing:(id)arg1 withHandle:(int)arg2;
- (id)movieScrubber:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;
- (void)movieScrubber:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2;
- (void)setThumbnailImage:(struct CGImage *)arg1 forTimestamp:(id)arg2;
- (double)movieScrubberThumbnailAspectRatio:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)userObservationGestureRecognizerFired:(id)arg1;

@end
