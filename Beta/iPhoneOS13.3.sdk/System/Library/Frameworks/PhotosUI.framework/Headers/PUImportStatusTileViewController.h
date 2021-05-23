/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

@class NSString, PUAssetViewModel, UIActivityIndicatorView, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface PUImportStatusTileViewController : PUTileViewController

{
    struct {
        unsigned long long needsUpdate;
        unsigned long long updated;
        _Bool isPerformingUpdate;
    } _updateFlags;
    UIView *_successView;
    UIActivityIndicatorView *_progressIndicatorView;
    UIImageView *_errorView;
    _Bool __isPerformingChanges;
    PUAssetViewModel *_assetViewModel;
}

@property (nonatomic) _Bool _isPerformingChanges;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateStatusView;

@end
