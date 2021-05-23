/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class EDAMUser, ENAuthCache, ENBusinessNoteStoreClient, ENNoteStoreClient, ENPreferencesStore, ENUserStoreClient, NSArray, NSDate, NSString;

@protocol ENAuthenticator, ENSDKLogging, OS_dispatch_queue;

@interface ENSession : NSObject

{
    _Bool _isAuthenticated;
    _Bool _supportsLinkedAppNotebook;
    id <ENSDKLogging> _logger;
    NSString *_sourceApplication;
    long long _personalUploadUsage;
    long long _personalUploadLimit;
    long long _businessUploadUsage;
    long long _businessUploadLimit;
    id <ENAuthenticator> _authenticator;
    CDUnknownBlockType _authenticationCompletion;
    NSString *_sessionHost;
    EDAMUser *_user;
    NSString *_primaryAuthenticationToken;
    EDAMUser *_businessUser;
    ENPreferencesStore *_preferences;
    ENUserStoreClient *_userStore;
    ENNoteStoreClient *_primaryNoteStore;
    ENBusinessNoteStoreClient *_businessNoteStore;
    ENAuthCache *_authCache;
    NSArray *_notebooksCache;
    NSDate *_notebooksCacheDate;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    ENUserStoreClient *_userStorePendingRevocation;
}

@property (nonatomic) _Bool supportsLinkedAppNotebook;
@property (retain, nonatomic) EDAMUser *businessUser;
@property (retain, nonatomic) ENPreferencesStore *preferences;
@property (retain, nonatomic) ENUserStoreClient *userStore;
@property (retain, nonatomic) ENNoteStoreClient *primaryNoteStore;
@property (retain, nonatomic) ENBusinessNoteStoreClient *businessNoteStore;
@property (retain, nonatomic) ENAuthCache *authCache;
@property (retain, nonatomic) NSArray *notebooksCache;
@property (retain, nonatomic) NSDate *notebooksCacheDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *thumbnailQueue;
@property (retain, nonatomic) ENUserStoreClient *userStorePendingRevocation;
@property (nonatomic) long long personalUploadUsage;
@property (nonatomic) long long personalUploadLimit;
@property (nonatomic) long long businessUploadUsage;
@property (nonatomic) long long businessUploadLimit;
@property (retain, nonatomic) id <ENSDKLogging> logger;
@property (copy, nonatomic) NSString *sourceApplication;
@property (nonatomic) _Bool isAuthenticated;
@property (nonatomic, readonly) _Bool isAuthenticationInProgress;
@property (nonatomic, readonly) _Bool isPremiumUser;
@property (nonatomic, readonly) _Bool isBusinessUser;
@property (nonatomic, readonly) NSString *userDisplayName;
@property (nonatomic, readonly) NSString *businessDisplayName;
@property (retain, nonatomic) id <ENAuthenticator> authenticator;
@property (copy, nonatomic) CDUnknownBlockType authenticationCompletion;
@property (copy, nonatomic) NSString *sessionHost;
@property (retain, nonatomic) EDAMUser *user;
@property (copy, nonatomic) NSString *primaryAuthenticationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedSession;
+ (id)keychainAccessGroup;
+ (id)consumerSecret;
+ (id)consumerKey;
+ (_Bool)checkSharedSessionSettings;
+ (void)setSharedSessionConsumerKey:(id)arg1 consumerSecret:(id)arg2 optionalHost:(id)arg3;
+ (void)setSharedSessionDeveloperToken:(id)arg1 noteStoreUrl:(id)arg2;
+ (void)setDisableRefreshingNotebooksCacheOnLaunch:(_Bool)arg1;
+ (void)setSecurityApplicationGroupIdentifier:(id)arg1;
+ (void)setKeychainGroup:(id)arg1;
+ (id)sessionHostOverride;
+ (id)developerToken;
+ (id)bundleSeedID;

- (id)init;
- (void)dealloc;
- (int)userID;
- (void)startup;
- (id)credentialStore;
- (_Bool)handleOpenURL:(id)arg1;
- (void)addCredentials:(id)arg1;
- (id)credentialsForHost:(id)arg1;
- (id)userStoreUrl;
- (id)userStoreClientForBootstrapping;
- (void)authenticatorDidAuthenticateWithCredentials:(id)arg1 authInfo:(id)arg2;
- (void)authenticatorDidFailWithError:(id)arg1;
- (id)noteStoreUrlForBusinessStoreClient:(id)arg1;
- (id)authenticationTokenForBusinessStoreClient:(id)arg1;
- (id)authenticationTokenForLinkedNotebookRef:(id)arg1;
- (void)selectInitialSessionHost;
- (void)performPostAuthentication;
- (void)refreshUploadUsage;
- (void)completeAuthenticationWithError:(id)arg1;
- (_Bool)appNotebookIsLinked;
- (void)unauthenticate;
- (void)unauthenticateWithoutRevokingAccessToken;
- (void)unauthenticateAndRevokeAccessToken:(_Bool)arg1;
- (void)listNotebooksWithCompletion:(CDUnknownBlockType)arg1;
- (void)listWritableNotebooksWithCompletion:(CDUnknownBlockType)arg1;
- (void)listNotebooks_listNotebooksWithContext:(id)arg1;
- (void)listNotebooks_listSharedNotebooksWithContext:(id)arg1;
- (void)listNotebooks_listLinkedNotebooksWithContext:(id)arg1;
- (void)listNotebooks_fetchSharedBusinessNotebooksWithContext:(id)arg1;
- (void)listNotebooks_fetchBusinessNotebooksWithContext:(id)arg1;
- (void)listNotebooks_processBusinessNotebooksWithContext:(id)arg1;
- (void)listNotebooks_fetchSharedNotebooksWithContext:(id)arg1;
- (void)listNotebooks_completePendingSharedNotebookWithContext:(id)arg1;
- (void)listNotebooks_processSharedNotebooksWithContext:(id)arg1;
- (void)listNotebooks_prepareResultsWithContext:(id)arg1;
- (void)listNotebooks_completeWithContext:(id)arg1 error:(id)arg2;
- (void)listNotebooks_cleanCache;
- (void)uploadNote:(id)arg1 notebook:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadNote:(id)arg1 policy:(long long)arg2 toNotebook:(id)arg3 orReplaceNote:(id)arg4 progress:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)uploadNote_determineDestinationWithContext:(id)arg1;
- (void)uploadNote_updateWithContext:(id)arg1;
- (void)uploadNote_findLinkedAppNotebookWithContext:(id)arg1;
- (void)uploadNote_findSharedAppNotebookWithContext:(id)arg1;
- (void)uploadNote_createWithContext:(id)arg1;
- (void)uploadNote_completeWithContext:(id)arg1 error:(id)arg2;
- (void)shareNote:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteNote:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)findNotesWithSearch:(id)arg1 inNotebook:(id)arg2 orScope:(unsigned long long)arg3 sortOrder:(unsigned long long)arg4 maxResults:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)findNotes_listNotebooksWithContext:(id)arg1;
- (void)findNotes_findInPersonalScopeWithContext:(id)arg1;
- (void)findNotes_findInBusinessScopeWithContext:(id)arg1;
- (void)findNotes_findInLinkedScopeWithContext:(id)arg1;
- (void)findNotes_nextFindInLinkedScopeWithContext:(id)arg1;
- (void)findNotes_processResultsWithContext:(id)arg1;
- (void)findNotes_completeWithContext:(id)arg1 error:(id)arg2;
- (void)downloadNote:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadThumbnailForNote:(id)arg1 maxDimension:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isErrorDueToRestrictedAuth:(id)arg1;
- (void)saveCredentialStore:(id)arg1;
- (id)primaryCredentials;
- (id)validBusinessAuthenticationResult;
- (void)notifyAuthenticationChanged;
- (id)noteStoreForLinkedNotebook:(id)arg1;
- (id)noteStoreForNoteRef:(id)arg1;
- (id)noteStoreForNotebook:(id)arg1;
- (id)shardIdForNoteRef:(id)arg1;
- (id)authenticationTokenForNoteRef:(id)arg1;
- (id)currentProfileName;
- (void)setCurrentProfileNameFromHost:(id)arg1;
- (void)storeClientFailedAuthentication:(id)arg1;

@end
