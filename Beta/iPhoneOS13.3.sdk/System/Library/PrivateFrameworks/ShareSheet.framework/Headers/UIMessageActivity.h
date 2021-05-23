/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@class LPLinkMetadata, MFMessageComposeViewController, NSString;

@interface UIMessageActivity : UIActivity

{
    _Bool _isContentManaged;
    NSString *_sourceApplicationBundleID;
    MFMessageComposeViewController *_messageComposeViewController;
    LPLinkMetadata *_linkMetadata;
}

@property (retain, nonatomic) MFMessageComposeViewController *messageComposeViewController;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (nonatomic) _Bool isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;

+ (id)applicationBundleID;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
+ (void)_preheatAsyncIfNeeded;

- (void)dealloc;
- (id)activityType;
- (void)_cleanup;
- (void)setSessionID:(id)arg1;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)_bundleIdentifierForActivityImageCreation;
- (CDUnknownBlockType)_backgroundPreheatBlock;
- (void)_prepareWithActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)activityViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;

@end
