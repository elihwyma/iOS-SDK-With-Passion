/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenScrubberBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenScrubberBarTileViewController : PUTileViewController <Swift>

{
    PUBrowsingViewModel *_browsingViewModel;
    PUReviewScreenBarsModel *_barsModel;
    PUReviewScreenScrubberBar *__scrubberBar;
}

@property (retain, nonatomic, setter=_setScrubberBar:) PUReviewScreenScrubberBar *_scrubberBar;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUReviewScreenBarsModel *barsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)loadView;
- (void)_updateViews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)becomeReusable;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateVisibilityAnimated:(_Bool)arg1;

@end
