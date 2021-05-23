/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface PLPhotoTilePlaceholderView : UIView

{
    UIActivityIndicatorView *_loadingIndicatorView;
    UILabel *_loadingLabel;
    UIView *_loadingContainerView;
    double _lastViewPhaseChangeDate;
    _Bool _indicatorIsVisible;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageRect:(struct CGRect)arg1;
- (void)showLoadingIndicator;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(_Bool)arg1;
- (void)showLoadingIndicatorWhenReady;
- (void)showErrorIndicator;
- (void)updateCloudDownloadProgress:(double)arg1;
- (void)setToolbarVisible:(_Bool)arg1;

@end
