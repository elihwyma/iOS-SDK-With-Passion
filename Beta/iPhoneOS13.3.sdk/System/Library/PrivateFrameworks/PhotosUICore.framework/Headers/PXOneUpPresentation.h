/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXAssetActionManager, PXAssetReference, PXAssetsDataSourceManager, PXGestureProvider, PXPhotosDetailsContext, PXUIMediaProvider, UIScrollView, UIViewController;

@protocol PXAssetImportStatusManager, PXOneUpPresentationDelegate, PXOneUpPresentationImplementationDelegate;

@interface PXOneUpPresentation : NSObject

{
    struct {
        _Bool respondsToPhotosDetailsContext;
        _Bool respondsToInitialAssetReference;
        _Bool respondsToCurrentImageForAssetReference;
        _Bool respondsToRegionOfInterestForAssetReference;
        _Bool respondsToScrollAssetReferenceToVisible;
        _Bool respondsToSetHiddenAssetReferences;
        _Bool respondsToShouldAutoPlay;
        _Bool respondsToPreventShowInAllPhotos;
        _Bool respondsToActionManager;
        _Bool respondsToActionManagerForPreviewing;
        _Bool respondsToActionContext;
        _Bool respondsToGestureProvider;
        _Bool respondsToImportStatusManager;
        _Bool respondsToOrigin;
        _Bool respondsToScrollView;
    } _delegateFlags;
    struct {
        _Bool respondsToPresentingViewControllerViewWillAppear;
        _Bool respondsToPresentingViewControllerViewDidAppear;
        _Bool respondsToPresentingViewControllerViewWillDisappear;
        _Bool respondsToPresentingViewControllerViewDidDisappear;
        _Bool respondsToCanStart;
        _Bool respondsToCanStop;
        _Bool respondsToInvalidatePresentingGeometry;
        _Bool respondsToHandlePresentingPinchGestureRecognizer;
    } _implementationDelegateFlags;
    _Bool _enabled;
    id <PXOneUpPresentationImplementationDelegate> __implementationDelegate;
    id <PXOneUpPresentationDelegate> _delegate;
    UIViewController *_presentingViewController;
    UIViewController *_originalPresentingViewController;
    id <PXOneUpPresentationImplementationDelegate> _implementationDelegate;
}

@property (weak, nonatomic, setter=_setImplementationDelegate:) id <PXOneUpPresentationImplementationDelegate> _implementationDelegate;
@property (weak, nonatomic, readonly) UIViewController *presentingViewController;
@property (nonatomic, readonly) long long origin;
@property (weak, nonatomic) UIViewController *originalPresentingViewController;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (weak, nonatomic) id <PXOneUpPresentationImplementationDelegate> implementationDelegate;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) PXGestureProvider *gestureProvider;
@property (nonatomic, readonly) PXPhotosDetailsContext *photosDetailsContext;
@property (nonatomic, readonly) PXAssetReference *initialAssetReference;
@property (nonatomic, readonly) PXAssetActionManager *actionManager;
@property (nonatomic, readonly) PXAssetActionManager *actionManagerForPreviewing;
@property (nonatomic, readonly) long long actionContext;
@property (nonatomic, readonly) id <PXAssetImportStatusManager> importStatusManager;
@property (nonatomic, readonly) _Bool shouldAutoPlay;
@property (nonatomic, readonly) _Bool preventShowInAllPhotosAction;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (weak, nonatomic) id <PXOneUpPresentationDelegate> delegate;
@property (nonatomic, readonly) _Bool canStart;
@property (nonatomic, readonly) _Bool canStop;

- (id)init;
- (void)commitPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (id)initWithPresentingViewController:(id)arg1;
- (void)_updateImplementationDelegate;
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;
- (_Bool)startAnimated:(_Bool)arg1 interactiveMode:(long long)arg2;
- (id)previewViewControllerAllowingActions:(_Bool)arg1;
- (void)stopAnimated:(_Bool)arg1;
- (void)invalidatePresentingGeometry;
- (_Bool)handlePresentingPinchGestureRecognizer:(id)arg1;
- (id)currentImageForAssetReference:(id)arg1;
- (id)regionOfInterestForAssetReference:(id)arg1;
- (void)scrollAssetReferenceToVisible:(id)arg1;
- (void)setHiddenAssetReferences:(id)arg1;

@end
