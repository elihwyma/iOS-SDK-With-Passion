/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenControlBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenControlBarTileViewController : PUTileViewController <Swift>

{
    PUBrowsingViewModel *_browsingViewModel;
    PUReviewScreenBarsModel *_barsModel;
    PUReviewScreenControlBar *__controlBar;
}

@property (retain, nonatomic, setter=_setControlBar:) PUReviewScreenControlBar *_controlBar;
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
- (id)_barControlsForModelControls:(id)arg1 transitioning:(_Bool)arg2;
- (void)_handleEditButtonTapped:(id)arg1;
- (void)_handleMarkupButtonTapped:(id)arg1;
- (void)_handleFunEffectsButtonTapped:(id)arg1;
- (void)_handleSendButtonTapped:(id)arg1;
- (void)_updateControls;
- (void)_updateBarLayout;
- (void)_updateVisibilityAnimated:(_Bool)arg1;

@end
