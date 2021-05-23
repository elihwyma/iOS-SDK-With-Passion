/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableDictionary, NSString;

@protocol NEProfilePayloadBaseDelegate;

@interface MCVPNPayloadBase : MCPayload

{
    NSMutableDictionary *_configurationDictionary;
    NSString *_serviceName;
    NSString *_vpnType;
    id <NEProfilePayloadBaseDelegate> _nePayloadBase;
    NSString *_userNameKey;
    NSString *_passwordKey;
    NSString *_proxyUserNameKey;
    NSString *_proxyPasswordKey;
    NSString *_sharedSecretKey;
    NSString *_pinKey;
}

@property (retain, nonatomic) NSString *userNameKey;
@property (retain, nonatomic) NSString *passwordKey;
@property (retain, nonatomic) NSString *proxyUserNameKey;
@property (retain, nonatomic) NSString *proxyPasswordKey;
@property (retain, nonatomic) NSString *sharedSecretKey;
@property (retain, nonatomic) NSString *pinKey;
@property (retain, nonatomic) NSMutableDictionary *configurationDictionary;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *vpnType;
@property (retain, nonatomic) id <NEProfilePayloadBaseDelegate> nePayloadBase;

+ (id)NEAlwaysOnVPNPayloadBaseDelegateWithConfigurationDict:(id)arg1;
+ (id)NEVPNPayloadBaseDelegateWithConfigurationDict:(id)arg1;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)installationWarnings;
- (_Bool)isPayloadAllowed;

@end
