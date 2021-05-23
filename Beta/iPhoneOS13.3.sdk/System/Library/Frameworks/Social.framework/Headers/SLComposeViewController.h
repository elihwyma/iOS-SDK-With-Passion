/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSExtension, NSLayoutConstraint, NSString, UIView, _UIRemoteViewController;

@interface SLComposeViewController : UIViewController

{
    NSExtension *_extension;
    NSString *_initialText;
    NSArray *_itemProviders;
    NSArray *_extensionItems;
    NSLayoutConstraint *_keyboardTopConstraint;
    UIView *_keyboardTrackingView;
    long long _savedStatusBarStyle;
    _Bool _wasPresented;
    _Bool _hasInstantiatedExtensionUI;
    CDUnknownBlockType _completionHandler;
    _Bool _didFailLoadingRemoteViewController;
    _Bool _didCompleteSheet;
    long long _maximumImageCount;
    long long _maximumURLCount;
    long long _maximumVideoCount;
    long long _numVideosAdded;
    long long _numImagesAdded;
    long long _numURLsAdded;
    NSString *_serviceType;
    UIViewController *_remoteViewController;
}

@property (retain) UIViewController *remoteViewController;
@property (nonatomic, readonly) NSString *serviceType;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

+ (_Bool)isAvailableForServiceType:(id)arg1;
+ (id)extensionIdentifierForActivityType:(id)arg1;
+ (id)composeViewControllerForExtension:(id)arg1;
+ (_Bool)isAvailableForExtension:(id)arg1 inHostApplicationBundleID:(id)arg2;
+ (id)_serviceTypeToExtensionIdentifierMap;
+ (_Bool)_isMultiUserDevice;
+ (id)_unsupportedServiceTypes;
+ (_Bool)_isAvailableForServiceType:(id)arg1 inHostApplicationBundleID:(id)arg2;
+ (id)_serviceTypeForExtensionIdentifier:(id)arg1;
+ (_Bool)_legacyBuiltInAvailabilityForService:(id)arg1 inHostApplicationBundleID:(id)arg2;
+ (_Bool)_isAvailableForMediaShareExtension:(id)arg1;
+ (_Bool)_isServiceType:(id)arg1;
+ (id)_extensionIdentifierForServiceType:(id)arg1;
+ (id)_shareExtensionWithIdentifier:(id)arg1;
+ (id)composeViewControllerForServiceType:(id)arg1;
+ (_Bool)isAvailableForExtension:(id)arg1;
+ (_Bool)isAvailableForExtensionIdentifier:(id)arg1;
+ (id)composeViewControllerForExtensionIdentifier:(id)arg1;

- (void)dealloc;
- (_Bool)addImage:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (_Bool)_useCustomDimmingView;
- (id)initWithServiceType:(id)arg1;
- (_Bool)addURL:(id)arg1;
- (_Bool)setInitialText:(id)arg1;
- (void)_instantiateAndBeginExtensionIfNeeded;
- (_Bool)addItemProvider:(id)arg1;
- (_Bool)addExtensionItem:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1;
- (void)completeWithResult:(long long)arg1;
- (id)initWithExtension:(id)arg1 requestedServiceType:(id)arg2;
- (_Bool)canAddContent;
- (id)_urlForUntypedAsset:(id)arg1;
- (_Bool)_addImageAsset:(id)arg1 preview:(id)arg2;
- (_Bool)supportsImageAsset:(id)arg1;
- (_Bool)_addImageJPEGData:(id)arg1 preview:(id)arg2;
- (_Bool)supportsVideoAsset:(id)arg1;
- (_Bool)addURL:(id)arg1 withPreviewImage:(id)arg2;
- (_Bool)_addURL:(id)arg1 type:(long long)arg2 preview:(id)arg3;
- (_Bool)_addVideoData:(id)arg1 preview:(id)arg2;
- (_Bool)_addVideoAsset:(id)arg1 preview:(id)arg2;
- (void)_handleRemoteViewFailure;
- (void)didLoadSheetViewController;
- (void)remoteController:(id)arg1 didLoadWithError:(id)arg2;
- (void)_instantiateAndBeginExtensionIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)remoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (_Bool)addImageAsset:(id)arg1;
- (_Bool)removeAllImages;
- (_Bool)removeAllURLs;
- (_Bool)addAttachment:(id)arg1;
- (CDUnknownBlockType)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1;
- (void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3;
- (void)userDidCancel;
- (void)userDidPost;
- (void)remoteViewControllerLoadDidTimeout;

@end
