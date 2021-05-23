/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _SFDialog : NSObject

{
    _Bool _completed;
    _Bool _shouldIgnoreGlobalModalUIDisplayPolicy;
}

@property (copy, nonatomic, readonly) NSArray *additionalCancellationExemptions;
@property (nonatomic, readonly) _Bool canceledOnApplicationBackground;
@property (nonatomic, readonly) _Bool canceledOnProvisionalNavigation;
@property (nonatomic, readonly) _Bool canceledOnCommittedNavigation;
@property (nonatomic, readonly) _Bool completionHandlerBlocksWebProcess;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) _Bool shouldIgnoreGlobalModalUIDisplayPolicy;

+ (id)telephonyNavigationDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)dialogWithWebUIAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)formSubmissionDialogWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)genericErrorDialogWithTitle:(id)arg1 message:(id)arg2 applicationModal:(_Bool)arg3;
+ (id)pageLoadErrorWithMessage:(id)arg1;
+ (id)permanentlyAcceptCertificateDialogWithAcceptanceHandler:(CDUnknownBlockType)arg1;
+ (id)continuePrintingDialogWithTitle:(id)arg1 message:(id)arg2 applicationModal:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)printBlockedDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)userMediaPermissionDialogWithHost:(id)arg1 devices:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)javaScriptAlertDialogWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)javaScriptConfirmDialogWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)javaScriptPromptDialogWithMessage:(id)arg1 defaultText:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)requestStorageAccessDialogForDomain:(id)arg1 underCurrentDomain:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)authenticatorDialogForRelyingPartyID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)_dialogWithTitle:(id)arg1 message:(id)arg2 acceptAction:(id)arg3 secondaryAction:(id)arg4 cancelAction:(id)arg5 applicationModal:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (id)_dialogWithTitle:(id)arg1 message:(id)arg2 primaryAction:(id)arg3 secondaryAction:(id)arg4 applicationModal:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)authenticationDialogWithAuthenticationChallenge:(id)arg1 committedURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)mailNavigationDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)noFeedAppDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)redirectDialogWithMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)downloadBlockedDialogWithFileType:(long long)arg1 initiatingURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)blockedPopupWindowDialogWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)increaseDatabaseQuotaDialogForOrigin:(id)arg1 newQuota:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)increaseApplicationCacheQuotaDialogForOrigin:(id)arg1 newQuota:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)allowDownloadDialogWithDownload:(id)arg1 initiatingURL:(id)arg2 allowViewAction:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;

- (void)completeWithResponse:(id)arg1;
- (void)didCompleteWithResponse:(id)arg1;
- (id)newDialogViewRepresentation;
- (id)newViewControllerRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
