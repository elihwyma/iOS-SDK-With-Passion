/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSExtensionContext.h>

__attribute__((visibility("hidden")))
@interface QLPreviewCollectionHostContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)setIsContentManaged:(_Bool)arg1;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)setAllowInteractiveTransitions:(_Bool)arg1;
- (void)saveCurrentPreviewEditsSynchronously:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)hostApplicationDidEnterBackground:(_Bool)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)invalidateService;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)setLoadingString:(id)arg1;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)tearDownTransition:(_Bool)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_protocolService;
- (void)getNetworkObserverWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_synchronousProtocolServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_protocolServiceWithErrorHandler:(CDUnknownBlockType)arg1;

@end
