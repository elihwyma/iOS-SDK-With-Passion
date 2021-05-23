/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSExtension, NSString, NSUUID, UIImage, UIViewController, _UIActivityResourceLoader;

@interface UIActivity : NSObject

{
    long long _defaultPriority;
    _UIActivityResourceLoader *_activityImageLoader;
    _UIActivityResourceLoader *_activitySettingsImageLoader;
    CDUnknownBlockType _activityCompletionWithItemsHandler;
    CDUnknownBlockType _didFinishPerformingActivityHandler;
    long long _maxPreviews;
    NSString *_contentSizeCategory;
    NSArray *_preferredLocalizations;
    unsigned long long _indexInApplicationDefinedActivities;
    NSUUID *_activityUUID;
}

@property (nonatomic, readonly) NSExtension *applicationExtension;
@property (copy, nonatomic) CDUnknownBlockType activityCompletionWithItemsHandler;
@property (copy, nonatomic) CDUnknownBlockType didFinishPerformingActivityHandler;
@property (nonatomic) long long maxPreviews;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (retain, nonatomic) NSArray *preferredLocalizations;
@property (nonatomic) unsigned long long indexInApplicationDefinedActivities;
@property (nonatomic, readonly) _UIActivityResourceLoader *_activityImageLoader;
@property (nonatomic, readonly) _UIActivityResourceLoader *_activitySettingsImageLoader;
@property (nonatomic, readonly) CDUnknownBlockType _backgroundPreheatBlock;
@property (nonatomic, readonly) NSUUID *activityUUID;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) UIImage *activityImage;
@property (nonatomic, readonly) UIViewController *activityViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
+ (unsigned long long)_xpcAttributes;
+ (void)_loadItemProvidersFromActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_defaultFallbackActivityType;
+ (id)_actionImageForBundleImageConfiguration:(id)arg1;
+ (id)_actionImageForActionRepresentationImage:(id)arg1 contentSizeCategory:(id)arg2;
+ (double)imageWidthForContentSizeCategory:(id)arg1;
+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (_Bool)_isCapabilityBasedActivity;
+ (void)_performAfterActivityImageLoadingCompletes:(CDUnknownBlockType)arg1;
+ (id)_stringFromActivityCategory:(long long)arg1;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (Class)classForPreparingExtensionItemData;
+ (id)_imageByApplyingDefaultEffectsToImage:(id)arg1 activityCategory:(long long)arg2 iconFormat:(int)arg3;
+ (id)_activityImageForActionRepresentationImage:(id)arg1;
+ (id)_activityImageForApplicationBundleIdentifier:(id)arg1;
+ (id)_activitySettingsImageForApplicationBundleIdentifier:(id)arg1;
+ (id)_activityImageForBundleImageConfiguration:(id)arg1;
+ (id)_activitySettingsImageForBundleImageConfiguration:(id)arg1;
+ (long long)_activityStyle;

- (id)init;
- (void)_cleanup;
- (struct CGSize)_thumbnailSize;
- (id)_systemImageName;
- (id)_activitySettingsImage;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (long long)_defaultSortGroup;
- (_Bool)ss_shouldExecuteInShareSheet;
- (_Bool)ss_shouldDismissHostsPresentationBeforePerforming;
- (id)_subjectForActivityItem:(id)arg1;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1;
- (id)_bundleIdentifierForActivityImageCreation;
- (void)_prepareWithActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)_activityBundleImageConfiguration;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (void)_willBePerformedOrPresented;
- (void)performActivity;
- (id)_activityTypeUsingFallbackActivityTypeIfNecessary;
- (_Bool)_appIsDocumentTypeOwner;
- (_Bool)_supportsOpenInPlace;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (void)_setActivityCompletionWithItemsHandler:(CDUnknownBlockType)arg1;
- (_Bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (void)_willPresentAsFormSheet;
- (_Bool)_activitySupportsPromiseURLs;
- (_Bool)_wantsThumbnailItemData;
- (_Bool)_wantsAttachmentURLItemData;
- (_Bool)_wantsInitialSocialText;
- (id)_actionImage;
- (id)_actionBundleImageConfiguration;
- (id)_activitySettingsBundleImageConfiguration;
- (id)_beforeActivity;
- (id)_embeddedActivityViewController;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_managesOwnPresentation;
- (_Bool)_needsResolvedActivityItems;
- (id)ss_activitySpecificExtensionItemDataRequestInfo;
- (id)ss_activityTypeToReportToHost;
- (void)_injectedJavaScriptResult:(id)arg1;
- (_Bool)_isExecutedInProcess;

@end
