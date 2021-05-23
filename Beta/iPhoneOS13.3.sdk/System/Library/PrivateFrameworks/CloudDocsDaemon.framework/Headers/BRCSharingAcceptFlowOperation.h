/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/_BRCOperation.h>

@class BRCAccountSession, BRCAppLibrary, BRCClientZone, BRCItemID, BRCXPCClient, CKRecordID, CKShare, CKShareMetadata, NSArray, NSObject, NSString, NSURL;

@protocol BRCUserNotifier, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCSharingAcceptFlowOperation : _BRCOperation

{
    id <BRCUserNotifier> _userNotification;
    BRCAccountSession *_session;
    NSArray *_acceptationFlow;
    unsigned long long _stepIndex;
    NSURL *_shareURL;
    CKRecordID *_shareID;
    CKShareMetadata *_shareMetadata;
    CKShare *_share;
    BRCItemID *_sharedItemID;
    NSString *_unsaltedBookmarkData;
    BRCClientZone *_clientZone;
    BRCAppLibrary *_appLibrary;
    _Bool _needsZoneAndAppLibraryActivation;
    NSURL *_shareDocumentURL;
    NSString *_documentName;
    BRCXPCClient *_xpcClient;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;

+ (void)_openiCloudSettings;
+ (void)_openShareURLInWebBrowser:(id)arg1 withReason:(id)arg2;
+ (id)_runningShareIDs;
+ (Class)userNotificationClass;
+ (void)_openAppStoreForShareURL:(id)arg1;

- (void)main;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperationDidComplete:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)_isOwner;
- (void)_isAppInstalled;
- (void)_performNextStep;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)subclassableDescriptionWithContext:(id)arg1;
- (id)_stepNameAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2;
- (_Bool)_isFolderShare;
- (_Bool)_isiWorkShare;
- (void)_activateSharedZoneIfNeeded;
- (void)_isFolderSharingSupported;
- (void)_isUserSignedInToiCloudDrive;
- (void)_showSharingJoinDialog;
- (void)_parseShareMetadata;
- (void)_waitForSharedItemToSyncDownOnOwner;
- (void)_waitForSharedItemToBeOnDiskOnOwner;
- (void)_acceptShareURL;
- (void)_waitForSharedItemToSyncDownOnRecipient;
- (void)_waitForSharedItemToBeOnDiskOnRecipient;
- (void)_locateSharedItemOnDisk;
- (void)_openSharedItemIfStillNeeded;
- (void)_endAcceptationFlow;
- (void)_isAccountRestricted;
- (void)_openiWorkAppPreemptively;
- (void)_createSideFaultOnDisk;
- (void)_checkIfShouldWaitUntilDownloadCompletion;
- (void)_openSharedSideFaultFile;
- (void)_prepareToDownloadSharedDocument;
- (void)_performNextStepInQueue;
- (void)_jumpToSelectorInQueue:(SEL)arg1;
- (void)_showGenericErrorAndFinish:(id)arg1;
- (_Bool)_isOwnerOrShareAlreadyAccepted;
- (void)_captureOpenInfoFromDocument:(id)arg1;
- (void)_jumpToSelector:(SEL)arg1;
- (void)_openDocumentInDocumentsAppIfInstalled:(id)arg1;
- (id)initWithShareMetadata:(id)arg1 client:(id)arg2 session:(id)arg3;
- (void)moveDialogToFront;

@end
