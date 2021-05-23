/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSDictionary, NSMutableDictionary, UIMovieScrubberTrackOverlayView;

@protocol UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackView : UIView

{
    NSArray *_summaryThumbnailViews;
    NSArray *_summaryThumbnailTimestamps;
    NSArray *_summaryThumbnailChildTimestamps;
    NSDictionary *_thumbnailStartXValues;
    NSDictionary *_childThumbnailViews;
    NSMutableDictionary *_thumbnailViews;
    NSArray *_timestamps;
    UIMovieScrubberTrackOverlayView *_overlayView;
    UIView *_maskContainerView;
    struct CGSize _thumbnailSize;
    float _zoomOriginXDelta;
    float _zoomWidthDelta;
    float _unclampedZoomWidthDelta;
    float _zoomAnimationDuration;
    double _duration;
    double _value;
    double _startValue;
    double _endValue;
    struct {
        unsigned int delegateSizeOriginDelta:1;
        unsigned int delegateDidExpand:1;
        unsigned int delegateDidCollapse:1;
        unsigned int delegateWillRequestThumbs:1;
        unsigned int delegateDidRequestThumbs:1;
        unsigned int delegateZoomAnimationDuration:1;
        unsigned int delegateZoomAnimationDelay:1;
        unsigned int needsReload:1;
        unsigned int editing:1;
        unsigned int editingHandle;
        unsigned int zoomIsDisabled:1;
    } _trackFlags;
    id <UIMovieScrubberTrackViewDataSource> _dataSource;
    id <UIMovieScrubberTrackViewDelegate> _delegate;
}

@property (weak, nonatomic) id <UIMovieScrubberTrackViewDataSource> dataSource;
@property (weak, nonatomic) id <UIMovieScrubberTrackViewDelegate> delegate;

- (void)clear;
- (void)setValue:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setEditing:(_Bool)arg1;
- (void)animateFillFramesAway;
- (void)setStartValue:(double)arg1;
- (void)setEndValue:(double)arg1;
- (void)setZoomAnimationDuration:(double)arg1;
- (void)unzoom;
- (_Bool)zoomAtPoint:(struct CGPoint)arg1;
- (void)setThumbnailImage:(struct CGImage *)arg1 forTimestamp:(id)arg2;
- (double)zoomAnimationDuration;
- (id)_createImageViewForTimestamp:(id)arg1 isSummaryThumbnail:(_Bool)arg2;
- (void)_reallyReloadData;
- (void)_zoomAnimationDidFinish;
- (void)_setOverlayViewIsZoomed:(_Bool)arg1 minValue:(float)arg2 maxValue:(float)arg3;
- (void)_unzoomAnimationDidFinish;

@end
