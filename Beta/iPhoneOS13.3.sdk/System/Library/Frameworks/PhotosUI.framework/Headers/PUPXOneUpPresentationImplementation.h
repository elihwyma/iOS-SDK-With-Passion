/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, PUOneUpPresentationHelper, PXOneUpPresentation;

__attribute__((visibility("hidden")))
@interface PUPXOneUpPresentationImplementation : NSObject

{
    PUOneUpPresentationHelper *__helper;
    PXOneUpPresentation *__oneUpPresentation;
}

@property (nonatomic, readonly) PUOneUpPresentationHelper *_helper;
@property (weak, nonatomic, readonly) PXOneUpPresentation *_oneUpPresentation;
@property (nonatomic, readonly) _Bool canStart;
@property (nonatomic, readonly) _Bool canStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)implementationForOneUpPresentation:(id)arg1;

- (id)init;
- (void)commitPreviewViewController:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (id)oneUpPresentationHelperScrollView:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;
- (_Bool)startAnimated:(_Bool)arg1 interactiveMode:(long long)arg2;
- (id)previewViewControllerAllowingActions:(_Bool)arg1;
- (void)stopAnimated:(_Bool)arg1;
- (void)invalidatePresentingGeometry;
- (_Bool)handlePresentingPinchGestureRecognizer:(id)arg1;
- (id)oneUpPresentationHelperViewHostingTilingView:(id)arg1;
- (_Bool)oneUpPresentationHelperShouldAutoPlay:(id)arg1;
- (_Bool)oneUpPresentationHelperPreventRevealInMomentAction:(id)arg1;
- (unsigned long long)oneUpPresentationHelperAdditionalOptions:(id)arg1;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;
- (void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (struct CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets *)arg3 contentsRect:(struct CGRect *)arg4;
- (id)_initWithOneUpPresentation:(id)arg1;

@end
