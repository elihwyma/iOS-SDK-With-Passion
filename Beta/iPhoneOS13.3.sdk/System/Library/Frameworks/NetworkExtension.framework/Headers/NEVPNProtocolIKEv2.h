/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEVPNProtocolIPSec.h>

@class NEVPNIKEv2SecurityAssociationParameters, NSArray, NSString;

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec

{
    _Bool _useConfigurationAttributeInternalIPSubnet;
    _Bool _disableMOBIKE;
    _Bool _disableRedirect;
    _Bool _enablePFS;
    _Bool _enableRevocationCheck;
    _Bool _strictRevocationCheck;
    _Bool _enableFallback;
    _Bool _wakeForRekey;
    _Bool _opportunisticPFS;
    _Bool _disableInitialContact;
    int _natKeepAliveOffloadEnable;
    int _natKeepAliveOffloadInterval;
    int _disableMOBIKERetryOnWake;
    long long _deadPeerDetectionRate;
    NSString *_serverCertificateIssuerCommonName;
    NSString *_serverCertificateCommonName;
    long long _certificateType;
    NEVPNIKEv2SecurityAssociationParameters *_IKESecurityAssociationParameters;
    NEVPNIKEv2SecurityAssociationParameters *_childSecurityAssociationParameters;
    long long _minimumTLSVersion;
    long long _maximumTLSVersion;
    NSString *_pluginType;
    NSArray *_IKESecurityAssociationParametersArray;
    NSArray *_childSecurityAssociationParametersArray;
    NSString *_providerBundleIdentifier;
    long long _tunnelKind;
}

@property _Bool wakeForRekey;
@property (readonly) NSString *pluginType;
@property (retain) NSArray *IKESecurityAssociationParametersArray;
@property (retain) NSArray *childSecurityAssociationParametersArray;
@property (copy) NSString *providerBundleIdentifier;
@property int natKeepAliveOffloadEnable;
@property int natKeepAliveOffloadInterval;
@property int disableMOBIKERetryOnWake;
@property _Bool opportunisticPFS;
@property long long tunnelKind;
@property _Bool disableInitialContact;
@property long long deadPeerDetectionRate;
@property (copy) NSString *serverCertificateIssuerCommonName;
@property (copy) NSString *serverCertificateCommonName;
@property long long certificateType;
@property _Bool useConfigurationAttributeInternalIPSubnet;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *IKESecurityAssociationParameters;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *childSecurityAssociationParameters;
@property _Bool disableMOBIKE;
@property _Bool disableRedirect;
@property _Bool enablePFS;
@property _Bool enableRevocationCheck;
@property _Bool strictRevocationCheck;
@property long long minimumTLSVersion;
@property long long maximumTLSVersion;
@property _Bool enableFallback;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)setPluginType:(id)arg1;
- (id)copyLegacyDictionary;
- (id)initWithPluginType:(id)arg1;
- (id)clone;

@end
