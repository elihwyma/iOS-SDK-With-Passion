/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEConfiguration, NEConfigurationManager, NEDNSProxyProviderProtocol, NEFilterProviderConfiguration, NSArray, NSMutableArray, NSString;

@interface NEUtilConfigurationClient : NSObject

{
    _Bool _isAlwaysOn;
    NSString *_clientName;
    NEConfigurationManager *_manager;
    NSMutableArray *_createdConfigurations;
    NSMutableArray *_currentConfigurations;
    NSMutableArray *_identities;
    NEConfiguration *_currentConfiguration;
}

@property (readonly) NEConfigurationManager *manager;
@property (retain) NSMutableArray *createdConfigurations;
@property (retain) NSMutableArray *currentConfigurations;
@property (retain) NSMutableArray *identities;
@property (retain) NEConfiguration *currentConfiguration;
@property _Bool enabled;
@property _Bool onDemandEnabled;
@property (nonatomic) _Bool disconnectOnDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (readonly) _Bool isAlwaysOn;
@property (readonly) NEFilterProviderConfiguration *filterConfiguration;
@property (readonly) NEDNSProxyProviderProtocol *dnsProxyConfiguration;
@property (readonly) NSString *clientName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allClients;
+ (void)removeClientWithName:(id)arg1;
+ (id)clientWithName:(id)arg1;

- (void)dealloc;
- (id)initInternalWithClientName:(id)arg1;
- (void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)protocolForParameters:(id)arg1;
- (_Bool)createConfigurationWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setProtocolWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setFilterPluginWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetFilterPluginParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setDNSProxyWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetDNSProxyWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setCommonParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetCommonParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setIPSecParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetIPSecParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)addOnDemandRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)removeOnDemandRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setProxyParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetProxyParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setProxyServer:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetProxyServer:(id)arg1 errorStr:(id *)arg2;
- (void)loadConfigurationWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithClientName:(id)arg1;
- (_Bool)setPasswordWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetPasswordWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setSharedSecretWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setProviderTypeWithParameters:(id)arg1 errorStr:(id *)arg2;
- (void)loadConfigurationsForceRefresh:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)readIndexFromDiskForGivenPatahWithError:(id)arg1 returnError:(id *)arg2 fileDecoder:(id *)arg3;
- (id)decodeConfigurationWithIdentifier:(id)arg1 andDecoder:(id)arg2;
- (void)addIdentityProperties:(id)arg1 withDomain:(long long)arg2;
- (void)reloadIdentityListWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFromDiskForGivenPath:(id)arg1 configName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)swapConfigurationTypeWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setPPPParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetPPPParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)addAppRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)removeAppRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setPathControllerWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)addPathRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)removePathRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)addPersonalDNSWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)removePersonalDNSWithParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)setAlwaysOnParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)unsetAlwaysOnParameters:(id)arg1 errorStr:(id *)arg2;
- (_Bool)isIsAlwaysOn;

@end
