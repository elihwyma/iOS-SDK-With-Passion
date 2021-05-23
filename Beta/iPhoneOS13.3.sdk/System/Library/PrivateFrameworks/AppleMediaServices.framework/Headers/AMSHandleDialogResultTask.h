/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSDialogRequest, AMSDialogResult, AMSProcessInfo, NSError, NSString;

@protocol AMSBagProtocol;

@interface AMSHandleDialogResultTask : AMSTask

{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    NSError *_error;
    AMSProcessInfo *_clientInfo;
    NSString *_proxyBundleId;
    AMSDialogRequest *_request;
    AMSDialogResult *_result;
}

@property (copy, nonatomic) ACAccount *account;
@property (nonatomic, readonly) id <AMSBagProtocol> bag;
@property (copy, nonatomic, readonly) NSError *error;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (copy, nonatomic) NSString *proxyBundleId;
@property (nonatomic, readonly) AMSDialogRequest *request;
@property (nonatomic, readonly) AMSDialogResult *result;

- (id)perform;
- (id)initWithRequest:(id)arg1 result:(id)arg2 error:(id)arg3 bag:(id)arg4;
- (id)_handleAskPermissionRequestWithURL:(id)arg1 account:(id)arg2;

@end
