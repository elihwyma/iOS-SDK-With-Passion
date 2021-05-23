/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEIKEv2AuthenticationProtocol, NEIKEv2ConfigurationMessage, NEIKEv2Identifier, NSArray, NSData, NSString;

@interface NEIKEv2SessionConfiguration : NSObject

{
    NEIKEv2ConfigurationMessage *_configurationRequest;
    NEIKEv2ConfigurationMessage *_configurationReply;
    _Bool _initialContactDisabled;
    _Bool _negotiateMOBIKE;
    _Bool _natTraversalKeepaliveDisabled;
    _Bool _natTraversalKeepaliveEnabled;
    _Bool _natTraversalKeepaliveOffloadEnabled;
    _Bool _deadPeerDetectionEnabled;
    _Bool _idleTimeoutEnabled;
    _Bool _blackholeDetectionEnabled;
    _Bool _enableCertificateRevocationCheck;
    _Bool _strictCertificateRevocationCheck;
    _Bool _disableRemoteCertificateValidation;
    unsigned int _deadPeerDetectionMaxRetryCount;
    unsigned int _deadPeerDetectionMaxRetryCountBeforeReporting;
    unsigned int _deadPeerDetectionReceiveMaxShortDPDBeforeReporting;
    NEIKEv2Identifier *_localIdentifier;
    NEIKEv2Identifier *_remoteIdentifier;
    NSArray *_additionalMOBIKEAddresses;
    unsigned long long _natTraversalKeepaliveInterval;
    unsigned long long _natTraversalKeepaliveOffloadInterval;
    unsigned long long _deadPeerDetectionInterval;
    unsigned long long _deadPeerDetectionRetryIntervalMilliseconds;
    unsigned long long _deadPeerDetectionReceiveIntervalTriggerReporting;
    unsigned long long _idleTimeoutSeconds;
    NEIKEv2AuthenticationProtocol *_authenticationProtocol;
    NEIKEv2AuthenticationProtocol *_remoteAuthentication;
    NSString *_localPrivateEAPIdentity;
    NSData *_localEncryptedEAPIdentity;
    NSString *_username;
    NSString *_password;
    NSData *_passwordReference;
    NSData *_sharedSecret;
    NSData *_sharedSecretReference;
    NSString *_localCertificateName;
    NSData *_localCertificateReference;
    NSString *_remoteCertificateHostname;
    NSString *_remoteCertificateAuthorityName;
    NSArray *_remoteCertificateAuthorityReferences;
    NSData *_remoteCertificateAuthorityHash;
    NSData *_localPrivateKey;
    NSData *_localPublicKey;
    NSData *_remotePublicKey;
    NSString *_tlsMinimumVersion;
    NSString *_tlsMaximumVersion;
    NSArray *_customIKEAuthPayloads;
    NSArray *_customIKEAuthVendorPayloads;
    NSArray *_customIKEAuthPrivateNotifies;
}

@property (retain) NEIKEv2Identifier *localIdentifier;
@property (retain) NEIKEv2Identifier *remoteIdentifier;
@property _Bool initialContactDisabled;
@property _Bool negotiateMOBIKE;
@property (retain) NSArray *additionalMOBIKEAddresses;
@property _Bool natTraversalKeepaliveDisabled;
@property _Bool natTraversalKeepaliveEnabled;
@property unsigned long long natTraversalKeepaliveInterval;
@property _Bool natTraversalKeepaliveOffloadEnabled;
@property unsigned long long natTraversalKeepaliveOffloadInterval;
@property _Bool deadPeerDetectionEnabled;
@property unsigned long long deadPeerDetectionInterval;
@property unsigned long long deadPeerDetectionRetryIntervalMilliseconds;
@property unsigned int deadPeerDetectionMaxRetryCount;
@property unsigned int deadPeerDetectionMaxRetryCountBeforeReporting;
@property unsigned long long deadPeerDetectionReceiveIntervalTriggerReporting;
@property unsigned int deadPeerDetectionReceiveMaxShortDPDBeforeReporting;
@property _Bool idleTimeoutEnabled;
@property unsigned long long idleTimeoutSeconds;
@property _Bool blackholeDetectionEnabled;
@property (retain) NEIKEv2AuthenticationProtocol *authenticationProtocol;
@property (retain) NEIKEv2AuthenticationProtocol *remoteAuthentication;
@property (retain) NSString *localPrivateEAPIdentity;
@property (retain) NSData *localEncryptedEAPIdentity;
@property (retain) NSString *username;
@property (retain) NSString *password;
@property (retain) NSData *passwordReference;
@property (retain) NSData *sharedSecret;
@property (retain) NSData *sharedSecretReference;
@property (retain) NSString *localCertificateName;
@property (retain) NSData *localCertificateReference;
@property (retain) NSString *remoteCertificateHostname;
@property (retain) NSString *remoteCertificateAuthorityName;
@property (retain) NSArray *remoteCertificateAuthorityReferences;
@property (retain) NSData *remoteCertificateAuthorityHash;
@property _Bool enableCertificateRevocationCheck;
@property _Bool strictCertificateRevocationCheck;
@property _Bool disableRemoteCertificateValidation;
@property (retain) NSData *localPrivateKey;
@property (retain) NSData *localPublicKey;
@property (retain) NSData *remotePublicKey;
@property (retain) NSString *tlsMinimumVersion;
@property (retain) NSString *tlsMaximumVersion;
@property (retain) NEIKEv2ConfigurationMessage *configurationRequest;
@property (retain) NEIKEv2ConfigurationMessage *configurationReply;
@property (retain) NSArray *customIKEAuthPayloads;
@property (retain) NSArray *customIKEAuthVendorPayloads;
@property (retain, nonatomic) NSArray *customIKEAuthPrivateNotifies;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;

@end
