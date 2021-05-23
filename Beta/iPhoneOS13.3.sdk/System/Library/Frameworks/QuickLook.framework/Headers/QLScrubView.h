/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIView.h>

@class NSMutableArray, NSMutableDictionary, NSString, QLPageNumberView, QLThumbnailView;

@protocol QLScrubViewDataSource, QLScrubViewDelegate;

__attribute__((visibility("hidden")))
@interface QLScrubView : UIView

{
    _Bool _needsThumbLayout;
    double _thumbOrigin;
    double _thumbEnd;
    double _thumbHeight;
    long long _pageCount;
    long long _selectedPage;
    NSMutableDictionary *_thumbViews;
    NSMutableArray *_visibleThumbIndexes;
    QLThumbnailView *_selectedThumbnailView;
    QLPageNumberView *_pageNumberLabel;
    id <QLScrubViewDataSource> _dataSource;
    id <QLScrubViewDelegate> _delegate;
    double _topOffset;
    double _bottomOffset;
}

@property (weak) id <QLScrubViewDataSource> dataSource;
@property (weak) id <QLScrubViewDelegate> delegate;
@property (nonatomic) double topOffset;
@property (nonatomic) double bottomOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)defaultWidth;

- (id)init;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (void)panReceived:(id)arg1;
- (void)tapReceived:(id)arg1;
- (void)longTapReceived:(id)arg1;
- (void)_removeThumbviews;
- (void)_updateSelectedThumbnailView;
- (void)_notifyPageChanged;
- (void)_updatePageLabelPosition;
- (void)_showPageLabel;
- (void)_handleSwipAtLocation:(struct CGPoint)arg1;
- (void)_hidePageLabel;
- (struct CGRect)_thumbnailFrameForPageAtIndex:(long long)arg1;
- (void)reloadThumbnails;
- (void)selectPageNumber:(long long)arg1;

@end
