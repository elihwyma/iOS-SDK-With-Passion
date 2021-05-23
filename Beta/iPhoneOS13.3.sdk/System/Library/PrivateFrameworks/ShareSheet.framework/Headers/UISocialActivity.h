/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIApplicationExtensionActivity.h>

@class NSString, SLComposeViewController;

@interface UISocialActivity : UIApplicationExtensionActivity

{
    _Bool _isContentManaged;
    NSString *_sourceApplicationBundleID;
    NSString *_builtinActivityType;
    SLComposeViewController *_socialComposeViewController;
    NSString *_initialText;
}

@property (copy, nonatomic) NSString *builtinActivityType;
@property (retain, nonatomic) SLComposeViewController *socialComposeViewController;
@property (retain, nonatomic) NSString *initialText;
@property (nonatomic) _Bool isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;

+ (long long)activityCategory;
+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;

- (id)debugDescription;
- (id)initWithActivityType:(id)arg1;
- (id)activityType;
- (void)_cleanup;
- (struct CGSize)_thumbnailSize;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithApplicationExtension:(id)arg1;
- (id)activityViewController;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (void)_willBePerformedOrPresented;
- (_Bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (_Bool)_wantsThumbnailItemData;
- (_Bool)_wantsAttachmentURLItemData;
- (_Bool)_wantsInitialSocialText;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_dismissActivityFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_managesOwnPresentation;
- (void)_prepareComposeViewController:(id)arg1 withInjectedExtensionItems:(id)arg2;
- (void)_prepareComposeViewController:(id)arg1 withActivityExtensionItems:(id)arg2;

@end
