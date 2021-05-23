/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Foundation/NSObject.h>

@class CNFRegController, IDSAccountController, NSDictionary, NSString;

@interface FTRegAccountServiceDelegate : NSObject

{
    CNFRegController *_regController;
    NSDictionary *_responseDictionary;
    CDUnknownBlockType _completionHandler;
    IDSAccountController *_accountController;
}

@property (retain, nonatomic) CNFRegController *regController;
@property (retain, nonatomic) IDSAccountController *accountController;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)name;
- (id)displayName;
- (long long)serviceType;
- (void)_cleanup;
- (id)serviceIdentifier;
- (id)parametersForLoginRequest;
- (id)delegateServiceIdentifier;
- (id)accountSetupRequestParameters;
- (id)parametersForIdentityEstablishmentRequest;
- (void)handleLoginResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)completeSetupWithResponseParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (_Bool)_hasAccount;
- (id)_logName;
- (id)initWithRegController:(id)arg1;
- (void)_handleSuccess:(_Bool)arg1 error:(id)arg2;
- (_Bool)_account:(id)arg1 matchesSetupParameters:(id)arg2;
- (id)_existingOperationalAccount;
- (_Bool)serviceIsAvailable;
- (_Bool)_hasOperationalAccount;
- (id)_defaultSetupRequestParameters;
- (void)_handleFailureWithErrorCode:(long long)arg1;
- (_Bool)_shouldSkipAccountSetup:(id)arg1;
- (void)setupOperationFailed;
- (id)_existingAccountForSetupParameters:(id)arg1;

@end
