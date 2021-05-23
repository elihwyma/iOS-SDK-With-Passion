/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSExtensionContext.h>

@class NSString;

@protocol QLPreviewItemProvider;

__attribute__((visibility("hidden")))
@interface QLPreviewCollectionServiceContext : NSExtensionContext

{
    id <QLPreviewItemProvider> _itemProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

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
- (id)_previewCollection;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getNetworkObserverWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_protocolHost;

@end
