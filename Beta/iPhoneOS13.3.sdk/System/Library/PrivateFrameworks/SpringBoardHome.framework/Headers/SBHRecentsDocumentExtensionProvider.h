/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSExtension, NSString, SBUIPopoverExtensionHostViewController, _SBHRecentsDocumentExtensionWrappingViewController;

@protocol SBHRecentsDocumentExtensionProviderDelegate, _SBUIPopoverExtensionRemoteInterface;

@interface SBHRecentsDocumentExtensionProvider : NSObject

{
    struct CGSize _compactPreferredContentSize;
    id <SBHRecentsDocumentExtensionProviderDelegate> _delegate;
    _SBHRecentsDocumentExtensionWrappingViewController *_wrappingViewController;
    SBUIPopoverExtensionHostViewController *_hostViewController;
    NSExtension *_extension;
    id <_SBUIPopoverExtensionRemoteInterface> _remoteService;
}

@property (retain, nonatomic) _SBHRecentsDocumentExtensionWrappingViewController *wrappingViewController;
@property (nonatomic, readonly) SBUIPopoverExtensionHostViewController *hostViewController;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id <_SBUIPopoverExtensionRemoteInterface> remoteService;
@property (weak, nonatomic) id <SBHRecentsDocumentExtensionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)popoverHostExtensionRequestsDismiss:(id)arg1;
- (void)popoverHostExtensionDidExit:(id)arg1;
- (_Bool)canShowRecentsDocumentExtensionProviderForBundleIdentifier:(id)arg1;
- (id)recentsDocumentViewControllerForBundleIdentifier:(id)arg1;
- (void)_loadExtensionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadRemoteViewControllerWithBundleIdentifer:(id)arg1;
- (void)_extensionWillExit:(id)arg1;
- (void)_teardownHostViewController;
- (void)_setupHostViewController:(id)arg1;

@end
