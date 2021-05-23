/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@class NSDate, NSExtension, NSExtensionItem, NSString, UISUIActivityExtensionItemDataRequest, UIViewController, _UIActivityBundleHelper;

@interface UIApplicationExtensionActivity : UIActivity

{
    NSExtension *_applicationExtension;
    NSExtensionItem *__injectedExtensionItem;
    UIViewController *_extensionViewController;
    id _extensionContextIdentifier;
    UIViewController *_presenterViewController;
    CDUnknownBlockType _presenterCompletion;
    _UIActivityBundleHelper *_activityBundleHelper;
    CDUnknownBlockType _extensionRequestCleanupCompletion;
    NSDate *_installationDate;
    UISUIActivityExtensionItemDataRequest *_extensionItemDataRequest;
}

@property (retain, nonatomic) UIViewController *extensionViewController;
@property (retain, nonatomic) NSExtension *applicationExtension;
@property (copy, nonatomic) id extensionContextIdentifier;
@property (weak, nonatomic) UIViewController *presenterViewController;
@property (copy, nonatomic) CDUnknownBlockType presenterCompletion;
@property (retain, nonatomic) _UIActivityBundleHelper *activityBundleHelper;
@property (retain, nonatomic) NSExtensionItem *_injectedExtensionItem;
@property (copy, nonatomic) CDUnknownBlockType extensionRequestCleanupCompletion;
@property (nonatomic, readonly) NSDate *installationDate;
@property (nonatomic, readonly) NSString *containingAppBundleIdentifier;
@property (retain, nonatomic) UISUIActivityExtensionItemDataRequest *extensionItemDataRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)activityCategory;
+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (id)_applicationExtensionActivitiesForItems:(id)arg1;

- (void)dealloc;
- (id)activityType;
- (void)_cleanup;
- (id)_activitySettingsImage;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (long long)_defaultSortGroup;
- (id)initWithApplicationExtension:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (_Bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (id)_actionImage;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_managesOwnPresentation;
- (_Bool)_isServiceExtension;
- (void)_instantiateExtensionViewControllerWithInputItems:(id)arg1;
- (void)_presentExtensionViewControllerIfPossible;
- (void)_injectedJavaScriptResult:(id)arg1;

@end
