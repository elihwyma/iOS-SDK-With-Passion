/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPXOneUpPresentationImplementationDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)oneUpPresentation:(id)arg1 handlePresentingPinchGestureRecognizer:(id)arg2;
- (void)oneUpPresentationInvalidatePresentingGeometry:(id)arg1;
- (_Bool)oneUpPresentationCanStop:(id)arg1;
- (_Bool)oneUpPresentationCanStart:(id)arg1;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewDidDisappear:(_Bool)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewWillDisappear:(_Bool)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewDidAppear:(_Bool)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewWillAppear:(_Bool)arg2;
- (void)oneUpPresentation:(id)arg1 stopAnimated:(_Bool)arg2;
- (void)oneUpPresentation:(id)arg1 commitPreviewViewController:(id)arg2;
- (void)oneUpPresentation:(id)arg1 didDismissPreviewViewController:(id)arg2 committing:(_Bool)arg3;
- (id)previewViewControllerForOneUpPresentation:(id)arg1 allowingActions:(_Bool)arg2;
- (_Bool)oneUpPresentation:(id)arg1 startAnimated:(_Bool)arg2 interactiveMode:(long long)arg3;

@end
