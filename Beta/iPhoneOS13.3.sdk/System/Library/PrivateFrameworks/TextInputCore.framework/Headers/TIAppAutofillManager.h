/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class IMOneTimeCodeAccelerator, LAContext, NSDictionary, NSString, NSUUID, TIKeyboardSecureCandidateRenderer;

@protocol OS_dispatch_queue;

@interface TIAppAutofillManager : NSObject

{
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
    NSDictionary *_currentOneTimeCode;
    NSUUID *_documentIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastAutofillGeneration;
    NSString *_clientIdentifierForLastKeyboardSync;
    NSDictionary *_queuedCustomInfo;
    LAContext *_laContext;
    NSObject<OS_dispatch_queue> *_oneTimeCodeAcceleratorQueue;
    IMOneTimeCodeAccelerator *_oneTimeCodeAccelerator;
}

@property (retain, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastKeyboardSync;
@property (retain, nonatomic) NSDictionary *queuedCustomInfo;
@property (retain, nonatomic) LAContext *laContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *oneTimeCodeAcceleratorQueue;
@property (retain, nonatomic) IMOneTimeCodeAccelerator *oneTimeCodeAccelerator;
@property (retain, nonatomic) NSDictionary *currentOneTimeCode;
@property (nonatomic, readonly) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;

+ (id)sharedInstance;

- (id)initPrivate;
- (void)obtainCredential:(id)arg1;
- (void)obtainOneTimeCodeCredential:(id)arg1;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1;
- (_Bool)isValidedString:(id)arg1;
- (id)customInfoFromCredential:(id)arg1;
- (_Bool)_simulatesAutofillCandidates;
- (id)getCredentialsWithApplicationIdentifier:(id)arg1 autofillContext:(id)arg2;
- (id)obtainApplicationIdentifierFromConnection:(id)arg1;
- (id)obtainBundleIdentifierFromConnection:(id)arg1;
- (id)generateAutofillFormCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (id)generateOneTimeCodeCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (id)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2;
- (_Bool)shouldAuthenticateToAcceptAutofill;
- (void)shouldAcceptAutofill:(id)arg1 withPayload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shouldAcceptOneTimeCode:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
