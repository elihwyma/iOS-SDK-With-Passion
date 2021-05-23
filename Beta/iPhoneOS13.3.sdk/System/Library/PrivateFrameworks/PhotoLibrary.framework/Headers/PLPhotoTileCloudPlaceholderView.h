/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@class NSString, PLRoundProgressView, UIButton;

@protocol PLPhotoTileCloudPlaceholderViewDelegate;

@interface PLPhotoTileCloudPlaceholderView : UIView

{
    PLRoundProgressView *_loadingIndicatorView;
    UIView *_loadingContainerView;
    UIButton *_loadingErrorButton;
    _Bool _indicatorIsVisible;
    _Bool _showingError;
    _Bool _showingLoading;
    struct CGRect _imageRect;
    _Bool _toolbarVisible;
    double _lastViewPhaseChangeDate;
    id <PLPhotoTileCloudPlaceholderViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setImageRect:(struct CGRect)arg1;
- (void)showLoadingIndicator;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(_Bool)arg1;
- (void)showLoadingIndicatorWhenReady;
- (void)showErrorIndicator;
- (void)updateCloudDownloadProgress:(double)arg1;
- (void)setToolbarVisible:(_Bool)arg1;
- (void)setRetryDelegate:(id)arg1;
- (void)_retryDownload;

@end
