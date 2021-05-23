/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSMutableArray, NSString, NSURL, _UIDocumentPickerRemoteViewController, _UIResilientRemoteViewContainerViewController;

@protocol UIDocumentMenuDelegate;

@interface UIDocumentMenuViewController : UIViewController

{
    id <UIDocumentMenuDelegate> _weak_delegate;
    _Bool _ignoreApplicationEntitlementForImport;
    _Bool _dismissDelegateCalled;
    _Bool _isContentManaged;
    id <UIDocumentMenuDelegate> _delegate;
    NSMutableArray *_auxiliaryOptions;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    unsigned long long _documentPickerMode;
    NSURL *_uploadURL;
    NSArray *_allowedUTIs;
}

@property (retain, nonatomic) NSMutableArray *auxiliaryOptions;
@property (retain, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController;
@property (retain, nonatomic, readonly, getter=_remoteViewController) _UIDocumentPickerRemoteViewController *remoteViewController;
@property (nonatomic) _Bool dismissDelegateCalled;
@property (nonatomic) unsigned long long documentPickerMode;
@property (copy, nonatomic) NSURL *uploadURL;
@property (copy, nonatomic) NSArray *allowedUTIs;
@property (nonatomic, getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:) _Bool _ignoreApplicationEntitlementForImport;
@property (nonatomic, getter=_isContentManaged, setter=_setIsContentManaged:) _Bool isContentManaged;
@property (nonatomic, getter=_sourceIsManaged, setter=_setSourceIsManaged:) _Bool sourceIsManaged;
@property (weak, nonatomic) id <UIDocumentMenuDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1;
- (void)_dismissViewController;
- (void)_didSelectPicker;
- (void)_dismissWithOption:(id)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (void)_commonInitWithCompletion:(CDUnknownBlockType)arg1;
- (void)_didSelectURL:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect)arg1;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1;
- (void)addOptionWithTitle:(id)arg1 image:(id)arg2 order:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;

@end
