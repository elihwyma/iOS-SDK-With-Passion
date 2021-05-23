/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXCMMViewModel, PXMomentShareStatusPresentation, UIButton, UILabel, UIView;

@protocol PXAssetImportStatusManager;

@interface PXCMMSectionHeaderController : NSObject <Swift>

{
    unsigned long long _activityType;
    PXCMMViewModel *_viewModel;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    id <PXAssetImportStatusManager> _importStatusManager;
    _Bool _isViewLoaded;
    UIView *_underlyingView;
    UIButton *_actionButton;
    UIButton *_secondaryButton;
    UILabel *_photosLabel;
    long long _actionButtonType;
    long long _secondaryActionButtonType;
}

@property (nonatomic, setter=_setActionButtonType:) long long actionButtonType;
@property (nonatomic, setter=_setSecondaryActionButtonType:) long long secondaryActionButtonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

+ (id)new;
+ (id)_buttonLabelFont;
+ (id)_photosLabelFont;

- (id)init;
- (void)prepareForReuse;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateActionButtons;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (id)initWithActivityType:(unsigned long long)arg1 viewModel:(id)arg2 momentShareStatusPresentation:(id)arg3 importStatusManager:(id)arg4;
- (void)_loadViewIfNeeded;
- (void)_handleActionButtonTapped:(id)arg1;
- (void)_handleSecondaryButtonTapped:(id)arg1;
- (void)_layoutButtonWithSize:(struct CGSize)arg1;
- (_Bool)_wantsActionButtons;
- (void)_selectAllAssets;
- (void)_deselectAllAssets;

@end
