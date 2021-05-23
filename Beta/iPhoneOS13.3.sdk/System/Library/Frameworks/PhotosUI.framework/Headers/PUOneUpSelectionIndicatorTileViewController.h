/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSString, PUAssetActionManager, PUAssetReference, PUAssetViewModel, PUBrowsingViewModel, UIButton;

__attribute__((visibility("hidden")))
@interface PUOneUpSelectionIndicatorTileViewController : PUTileViewController <Swift>

{
    _Bool __performingChanges;
    _Bool __needsUpdateButton;
    _Bool __buttonVisible;
    PUBrowsingViewModel *_browsingViewModel;
    PUAssetReference *_assetReference;
    PUAssetActionManager *_actionManager;
    UIButton *__button;
    PUAssetViewModel *_assetViewModel;
}

@property (nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) _Bool _performingChanges;
@property (nonatomic, setter=_setNeedsUpdateButton:) _Bool _needsUpdateButton;
@property (retain, nonatomic, setter=_setButton:) UIButton *_button;
@property (nonatomic, getter=_isButtonVisible, setter=_setButtonVisible:) _Bool _buttonVisible;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUAssetReference *assetReference;
@property (retain, nonatomic) PUAssetActionManager *actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)_needsUpdate;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (void)_invalidateButton;
- (void)_updateButtonIfNeeded;
- (void)becomeReusable;
- (void)_handleButton:(id)arg1;
- (id)_selectionManager;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (id)_reviewActionManager;
- (void)_setButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;

@end
