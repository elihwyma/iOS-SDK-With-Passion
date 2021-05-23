/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFSession.h>

@class NSMutableDictionary, NSString;

@interface NFSecureElementManagerSession : NFSession

{
    _Bool _hasApplets;
    NSMutableDictionary *_appletsById;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)stateInformation;
- (id)appletWithIdentifier:(id)arg1;
- (id)felicaAppletState:(id)arg1 error:(id *)arg2;
- (id)transitAppletState:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAllApplets:(_Bool)arg1 error:(id *)arg2;
- (_Bool)getCryptogram:(id *)arg1 challengeResponse:(id *)arg2 error:(id *)arg3;
- (_Bool)getCryptogram:(id *)arg1 challengeResponse:(id *)arg2;
- (unsigned int)validateSEPairings:(id *)arg1;
- (id)allApplets;
- (_Bool)deleteApplets:(id)arg1 queueServerConnection:(_Bool)arg2 error:(id *)arg3;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 sigInfo:(id *)arg3 error:(id *)arg4;
- (id)signChallenge:(id)arg1 useOSVersion:(_Bool)arg2 signatureInfo:(id *)arg3 error:(id *)arg4;
- (id)signChallenge:(id)arg1 certs:(id *)arg2 error:(id *)arg3;
- (id)getSignedPlatformDataForSeid:(id)arg1 error:(id *)arg2;
- (id)performPeerPaymentEnrollment:(id)arg1 error:(id *)arg2;
- (void)_setApplets:(id)arg1;
- (id)stateInformationWithError:(id *)arg1;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id *)arg3 error:(id *)arg4;
- (id)_appletsById;
- (_Bool)deleteAllApplets:(_Bool)arg1;
- (_Bool)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 expressInfo:(id)arg4 error:(id *)arg5;
- (_Bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(_Bool)arg3 error:(id *)arg4;
- (_Bool)setExpressModesEnabled:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setExpressConfig:(id)arg1 restoreAuthorization:(_Bool)arg2 error:(id *)arg3;
- (_Bool)restoreAuthorizationForAllAppletsExcept:(id)arg1 error:(id *)arg2;
- (_Bool)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2 error:(id *)arg3;
- (_Bool)disableAuthorizationForApplet:(id)arg1 andKeys:(id)arg2 authorization:(id)arg3 error:(id *)arg4;
- (_Bool)expressModesEnabledWithError:(id *)arg1;
- (id)expressAppletIdentifiersWithError:(id *)arg1;
- (_Bool)didExitRestrictedMode:(id)arg1 error:(id *)arg2;
- (id)transceive:(id)arg1 forSEID:(id)arg2 error:(id *)arg3;
- (_Bool)refreshSecureElement:(id)arg1 error:(id *)arg2;
- (id)getAttackCounterLogForSEID:(id)arg1 error:(id *)arg2;
- (id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2 error:(id *)arg3;
- (id)signChallenge:(id)arg1 certs:(id *)arg2;
- (id)signChallenge:(id)arg1 useOSVersion:(_Bool)arg2 signatureInfo:(id *)arg3;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id *)arg3;
- (_Bool)deleteApplets:(id)arg1 queueServerConnection:(_Bool)arg2;
- (_Bool)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3;
- (_Bool)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 error:(id *)arg4;
- (_Bool)addExpressKeyID:(id)arg1 forApplet:(id)arg2 type:(unsigned char)arg3 authorization:(id)arg4 expressInfo:(id)arg5 error:(id *)arg6;
- (_Bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2;
- (_Bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 error:(id *)arg3;
- (_Bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(_Bool)arg3;
- (_Bool)removeExpressKeyID:(id)arg1 forApplet:(id)arg2 restoreAuthorization:(_Bool)arg3 error:(id *)arg4;
- (_Bool)setExpressModesEnabled:(_Bool)arg1;
- (id)checkExpressAppletCompatibility:(id)arg1 error:(id *)arg2;
- (_Bool)setExpressConfig:(id)arg1 error:(id *)arg2;
- (id)getExpressConfigWithError:(id *)arg1;
- (_Bool)restoreAuthorizationForAllAppletsExcept:(id)arg1;
- (_Bool)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2;
- (id)felicaAppletState:(id)arg1;
- (_Bool)expressModesEnabled;
- (id)expressAppletIdentifiers;
- (void)didExitRestrictedMode:(id)arg1;
- (id)transceive:(id)arg1 forSEID:(id)arg2;
- (id)transceiveMultiple:(id)arg1 forSEID:(id)arg2 error:(id *)arg3;
- (unsigned int)runScript:(id)arg1 forSEID:(id)arg2 results:(id *)arg3 lastStatus:(unsigned long long *)arg4;
- (unsigned int)runScript:(id)arg1 parameters:(id)arg2 outputResults:(id *)arg3;
- (_Bool)refreshSecureElement:(id)arg1;
- (id)getAttackCounterLogForSEID:(id)arg1;
- (id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2;
- (_Bool)powerCycleSEID:(id)arg1 error:(id *)arg2;
- (id)getOSUpdateLog;

@end
