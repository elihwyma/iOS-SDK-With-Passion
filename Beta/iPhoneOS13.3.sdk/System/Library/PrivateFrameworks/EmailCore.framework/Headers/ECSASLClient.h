/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSString;

@protocol ECAuthenticationCredentials;

@interface ECSASLClient : NSObject

{
    char *_userLanguageCode;
    char *_authenticationName;
    char *_authorizationName;
    struct sasl_secret *_password;
    char *_authenticationPersonID;
    char *_authorizationPersonID;
    char *_appleToken;
    char *_machineID;
    char *_oneTimePassword;
    char *_clientInfo;
    char *_oauthToken;
    _Bool _excludeAuthorizationName;
    _Bool _excludeInitialResponse;
    _Bool _mechanismUsesPlainText;
    _Bool _lastResponseIncludesCredential;
    unsigned int _encryptionBufferSize;
    id <ECAuthenticationCredentials> _credentials;
    long long _saslStatus;
    NSError *_saslError;
    NSString *_selectedMechanismName;
    NSArray *_mechanismNames;
    struct sasl_callback *_callbacks;
    struct sasl_conn *_saslConnection;
}

@property (copy, nonatomic) NSString *selectedMechanismName;
@property (nonatomic) long long saslStatus;
@property (retain, nonatomic) NSError *saslError;
@property (nonatomic) unsigned int encryptionBufferSize;
@property (copy, nonatomic) NSArray *mechanismNames;
@property (nonatomic, readonly) struct sasl_callback *callbacks;
@property (nonatomic, readonly) struct sasl_conn *saslConnection;
@property (nonatomic) _Bool mechanismUsesPlainText;
@property (nonatomic) _Bool lastResponseIncludesCredential;
@property (weak, nonatomic) id <ECAuthenticationCredentials> credentials;
@property (nonatomic) _Bool excludeAuthorizationName;
@property (nonatomic) _Bool excludeInitialResponse;
@property (nonatomic, readonly) _Bool lastResponseIncludesPlainTextCredential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)installedMechanisms;

- (id)init;
- (void)dealloc;
- (id)start;
- (id)responseForServerData:(id)arg1;
- (_Bool)_logGenericError:(int)arg1 saslConnection:(struct sasl_conn *)arg2 description:(id)arg3 error:(id *)arg4;
- (void)_clearAuthenticationCallbackBuffers;
- (void)_retrieveEncryptionBufferSize;
- (void)_handleGenericError:(int)arg1 description:(id)arg2;
- (void)_handleNeedsUserInteraction:(struct sasl_interact *)arg1;
- (void)_handleStartFailure:(int)arg1;
- (id)initWithMechanismNames:(id)arg1 credentials:(id)arg2 externalSecurityLayer:(unsigned int)arg3 allowPlainText:(_Bool)arg4;
- (id)newEncryptedDataForBytes:(const char *)arg1 length:(unsigned int)arg2;
- (id)newDecryptedDataForBytes:(const char *)arg1 length:(unsigned int)arg2;

@end
