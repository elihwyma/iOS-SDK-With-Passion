/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, NSURL;

@interface UIDocumentPickerExtensionViewController : UIViewController

{
    unsigned long long _documentPickerMode;
    NSURL *_originalURL;
    NSArray *_validTypes;
    NSString *_providerIdentifier;
    NSURL *_documentStorageURL;
}

@property (copy, nonatomic, setter=_setUploadURL:) NSURL *originalURL;
@property (copy, nonatomic, setter=_setPickableTypes:) NSArray *validTypes;
@property (copy, nonatomic, setter=_setProviderIdentifier:) NSString *providerIdentifier;
@property (copy, nonatomic, setter=_setDocumentStorageURL:) NSURL *documentStorageURL;
@property (nonatomic, setter=_setPickerMode:) unsigned long long documentPickerMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_setTintColor:(id)arg1;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_documentPickerDidDismiss;
- (void)prepareForPresentationInMode:(unsigned long long)arg1;
- (void)dismissGrantingAccessToURL:(id)arg1;
- (void)prepareForDocumentSelectionInMode:(unsigned long long)arg1;

@end
