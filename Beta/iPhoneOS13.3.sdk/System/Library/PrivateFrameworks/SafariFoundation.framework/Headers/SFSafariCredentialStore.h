/*
 Image: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
 */

#import <Foundation/NSObject.h>

@interface SFSafariCredentialStore : NSObject

+ (id)bestDomainForAutoFillFromDomains:(id)arg1 appID:(id)arg2;
+ (void)bestDomainForAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)titleForPasswordCredentialIdentity:(id)arg1 formURL:(id)arg2;
+ (void)getCredentialsForAppWithAppID:(id)arg1 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg2 websiteURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)getAllApprovedSharedWebCredentialsEntries:(CDUnknownBlockType)arg1;
+ (void)getAllowedActionForAppCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (_Bool)isAppAutoFillAvailable;
+ (id)textSuggestionHeaderForExternalCredential:(id)arg1;
+ (void)getCredentialsForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getCredentialsForAppWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)getCredentialsForAppWithAppID:(id)arg1 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_approvedSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_getCredentialsForAppWithApprovedAndValidSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_approvedAndValidSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_getExternalCredentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_credentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 savedPasswords:(id)arg3;
+ (id)_highLevelDomainsFromDatabaseEntries:(id)arg1;
+ (_Bool)_savedPassword:(id)arg1 isRelatedToEntryHighLevelDomains:(id)arg2 andWebsiteURL:(id)arg3;
+ (void)_sortCredentials:(id)arg1 usingApprovedSharedWebCredentialsDatabaseEntries:(id)arg2;
+ (void)_getAllowedActionForAppCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 shouldAnalyzeExistingCredentials:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)_getBundleIDForPrimaryCredentialProviderWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)_bestDomainFromApprovedDomainsForWebCredentials:(id)arg1 appLinks:(id)arg2 continuity:(id)arg3 appID:(id)arg4 allDomains:(id *)arg5;
+ (void)getApprovedSharedWebCredentialsEntriesForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_credentialProviderExtensionHelperProxy;
+ (_Bool)isRemoteAutoFillAvailable;
+ (void)getAllCredentialsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)getCanSaveCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)getApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
