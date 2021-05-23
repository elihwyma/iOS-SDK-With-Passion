/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenTopBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenTopBarTileViewController : PUTileViewController <Swift>

{
    PUBrowsingViewModel *_browsingViewModel;
    PUReviewScreenBarsModel *_barsModel;
    PUReviewScreenTopBar *__topBar;
}

@property (retain, nonatomic, setter=_setTopBar:) PUReviewScreenTopBar *_topBar;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUReviewScreenBarsModel *barsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)loadView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)becomeReusable;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateControls;
- (void)_updateBarLayout;
- (void)_updateVisibilityAnimated:(_Bool)arg1;
- (void)_handleDoneButtonTapped:(id)arg1;
- (void)_handleRetakeButtonTapped:(id)arg1;

@end
