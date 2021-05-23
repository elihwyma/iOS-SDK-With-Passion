/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <_UIRemoteViewController.h>

#import <QuickLook/Swift-Protocol.h>

@class QLPreviewCollectionHostContext;

@protocol QLPreviewControllerStateProtocolHostOnly;

__attribute__((visibility("hidden")))
@interface QLRemotePreviewCollection : _UIRemoteViewController <Swift>

{
    id <QLPreviewControllerStateProtocolHostOnly> _stateManager;
    _Bool _isAvailable;
    _Bool _allowInteractiveTransitions;
    id _request;
    QLRemotePreviewCollection *_accessoryViewController;
    QLPreviewCollectionHostContext *_hostContext;
}

@property (retain) id request;
@property (retain) QLRemotePreviewCollection *accessoryViewController;
@property (retain) QLPreviewCollectionHostContext *hostContext;
@property _Bool isAvailable;
@property (nonatomic) _Bool allowInteractiveTransitions;

- (id)accessoryView;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)setIsContentManaged:(_Bool)arg1;
- (_Bool)isRemote;
- (void)keyCommandWasPerformed:(id)arg1;
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
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_resetRemoteConfiguration;
- (void)_presentViewControllerForError:(id)arg1;

@end
