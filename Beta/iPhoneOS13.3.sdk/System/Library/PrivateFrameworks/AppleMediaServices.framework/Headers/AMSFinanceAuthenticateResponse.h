/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSAuthenticateRequest, AMSFinanceDialogResponse, NSString;

__attribute__((visibility("hidden")))
@interface AMSFinanceAuthenticateResponse : NSObject

{
    AMSAuthenticateRequest *_authenticateRequest;
    AMSFinanceDialogResponse *_dialogResponse;
}

@property (nonatomic, readonly) AMSAuthenticateRequest *authenticateRequest;
@property (nonatomic, readonly) AMSFinanceDialogResponse *dialogResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_createRequestFromDictionary:(id)arg1 dialogRequest:(id)arg2 taskInfo:(id)arg3;

- (id)_handleAuthenticateResult:(id)arg1 error:(id)arg2;
- (id)performWithTaskInfo:(id)arg1;
- (id)_findActionableButton;
- (id)initWithDialogDictionary:(id)arg1 taskInfo:(id)arg2;

@end
