/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <AuthKit/Swift-Protocol.h>

@class NSNumber, NSString;

@interface AKAppleIDAuthenticationCommandLineContext <Swift>

{
    NSNumber *_secondFactorCode;
    long long _verificationType;
}

@property (nonatomic) long long verificationType;
@property (copy, nonatomic) NSNumber *secondFactorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (unsigned long long)_capabilityForUIDisplay;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithVerificationType:(long long)arg1;
- (void)_presentServerUISecondFactorWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_mutableJSONRequestForPath:(id)arg1;
- (void)_beginDataTaskWithRequest:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_parseHeaderTitleForPasscodeView:(id)arg1;
- (id)_promptForVerificationCodeWithSecureEntry:(_Bool)arg1;
- (id)_xmlUIRequestForURL:(id)arg1 withPostbackDictionary:(id)arg2;
- (void)_verifySecondFactorCodeWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_collectAndPostSecondFactorCodeForTrustedNumber:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_promptUserForSelectionWithTrustedNumbers:(id)arg1;
- (id)_jsonPostbackDictionaryForCode:(id)arg1 numberId:(id)arg2;
- (id)_jsonDictionaryForData:(id)arg1 error:(id)arg2;
- (void)_handleServerUISMSSecondFactorWithDictionary:(id)arg1 statusCode:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleServerUISecondFactorWithObjectModel:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_mutableJSONRequestForURL:(id)arg1;
- (id)_xmlUIRequestForURL:(id)arg1 withServerInfo:(id)arg2;

@end
