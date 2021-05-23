/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEHotspotEAPSettings, NEHotspotHS20Settings, NSNumber, NSString;

@interface NEHotspotConfiguration : NSObject

{
    _Bool _joinOnce;
    _Bool _hidden;
    _Bool _useSSIDPrefix;
    NSString *_SSID;
    NSString *_SSIDPrefix;
    NSNumber *_lifeTimeInDays;
    long long _securityType;
    NSString *_passphrase;
    NEHotspotEAPSettings *_eapSettings;
    NEHotspotHS20Settings *_hs20Settings;
}

@property long long securityType;
@property (copy) NSString *passphrase;
@property (copy) NEHotspotEAPSettings *eapSettings;
@property (copy) NEHotspotHS20Settings *hs20Settings;
@property _Bool useSSIDPrefix;
@property (readonly) NSString *SSID;
@property (readonly) NSString *SSIDPrefix;
@property _Bool joinOnce;
@property (copy) NSNumber *lifeTimeInDays;
@property _Bool hidden;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)validate;
- (id)initWithSSIDPrefix:(id)arg1;
- (id)initWithSSID:(id)arg1;
- (id)initWithSSIDPrefix:(id)arg1 passphrase:(id)arg2 isWEP:(_Bool)arg3;
- (id)initWithSSID:(id)arg1 passphrase:(id)arg2 isWEP:(_Bool)arg3;
- (id)initWithSSID:(id)arg1 eapSettings:(id)arg2;
- (id)initWithHS20Settings:(id)arg1 eapSettings:(id)arg2;
- (void)buildClientTrustChainReference:(struct __SecIdentity *)arg1;
- (_Bool)validateSecIdentityReference:(_Bool)arg1;
- (_Bool)validateClientTrustChainReference;
- (_Bool)validateTrustedServerCertificateReferences;
- (_Bool)isWEPPassphraseValid;
- (_Bool)validateEAPSettings;

@end
