/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@class MFMailComposeViewController, NSString;

@protocol UIStateRestoring;

@interface UIMailActivity : UIActivity

{
    struct os_unfair_lock_s _canSendMailLock;
    _Bool _canSendMailChecked;
    CDStruct_9a98c240 _canSendMail;
    _Bool _isContentManaged;
    _Bool _keyboardVisible;
    _Bool _hasAnyAccount;
    _Bool _hasValidAccountForSending;
    NSString *_sourceApplicationBundleID;
    NSString *_subject;
    NSString *_autosaveIdentifier;
    MFMailComposeViewController *_mailComposeViewController;
}

@property (retain, nonatomic) MFMailComposeViewController *mailComposeViewController;
@property (nonatomic) _Bool hasAnyAccount;
@property (nonatomic) _Bool hasValidAccountForSending;
@property (copy, nonatomic) NSString *subject;
@property (nonatomic) _Bool keyboardVisible;
@property (retain, nonatomic) NSString *autosaveIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <UIStateRestoring> restorationParent;
@property (nonatomic, readonly) Class objectRestorationClass;
@property (nonatomic) _Bool isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;

+ (id)applicationBundleID;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;

- (id)init;
- (void)dealloc;
- (id)activityType;
- (void)setRecipients:(id)arg1;
- (void)_cleanup;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)_setMailSubject:(id)arg1;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_mailDraftRestorationURL;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)arg1;
- (id)_stateRestorationDraftIsAvailable;
- (void)autosaveWithHandler:(CDUnknownBlockType)arg1;
- (CDStruct_9a98c240)_checkCanSendMail;
- (_Bool)_restoreDraft;
- (void)prepareWithActivityItems:(id)arg1;
- (void)_saveDraft:(id)arg1;
- (id)_bundleIdentifierForActivityImageCreation;
- (CDUnknownBlockType)_backgroundPreheatBlock;
- (void)_prepareWithActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setSessionID:(id)arg1;
- (id)activityViewController;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;

@end
