/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSNumber, NSString;

@interface MCGlobalHTTPProxyPayload : MCPayload

{
    _Bool _proxyPACFallbackAllowed;
    _Bool _proxyCaptiveLoginAllowed;
    int _proxyType;
    NSString *_proxyServer;
    NSNumber *_proxyServerPort;
    NSString *_proxyUsername;
    NSString *_proxyPassword;
    NSString *_proxyPACURLString;
    NSString *_credentialUUID;
    NSNumber *_proxyPACFallbackAllowedNum;
    NSNumber *_proxyCaptiveLoginAllowedNum;
}

@property (retain, nonatomic) NSNumber *proxyPACFallbackAllowedNum;
@property (retain, nonatomic) NSNumber *proxyCaptiveLoginAllowedNum;
@property (nonatomic) int proxyType;
@property (retain, nonatomic) NSString *proxyServer;
@property (retain, nonatomic) NSNumber *proxyServerPort;
@property (retain, nonatomic) NSString *proxyUsername;
@property (retain, nonatomic) NSString *proxyPassword;
@property (retain, nonatomic) NSString *proxyPACURLString;
@property (nonatomic) _Bool proxyPACFallbackAllowed;
@property (nonatomic) _Bool proxyCaptiveLoginAllowed;
@property (retain, nonatomic) NSString *credentialUUID;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)installationWarnings;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
