/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEConfiguration, NEConfigurationManager, NSMutableArray, NSString;

@interface NEProfileIngestion : NSObject

{
    NSString *_clientName;
    NSString *_payloadType;
    NEConfigurationManager *_manager;
    NSMutableArray *_currentConfigurations;
    NEConfiguration *_ingestedConfiguration;
}

@property (readonly) NSString *clientName;
@property (readonly) NSString *payloadType;
@property (readonly) NEConfigurationManager *manager;
@property (retain) NSMutableArray *currentConfigurations;
@property (retain) NEConfiguration *ingestedConfiguration;

+ (id)getServiceIDForPayload:(id)arg1;
+ (void)profileMigrationComplete;

- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithNameAndType:(id)arg1 payloadType:(id)arg2;
- (id)findConfigurationByConfigurationID:(id)arg1;
- (_Bool)loadConfigurationsWithRefreshOption:(_Bool)arg1;
- (id)findConfigurationByName:(id)arg1;
- (_Bool)saveConfiguration:(id)arg1;
- (id)findConfigurationByPayloadUUID:(id)arg1;
- (id)resolveConfigurationNameConflict:(id)arg1;
- (_Bool)removeConfiguration:(id)arg1;
- (_Bool)loadConfigurationsForceReloadFromDisk;
- (_Bool)enableAlwaysOnVpnInternal:(_Bool)arg1;
- (_Bool)isAutoCreatedRule:(id)arg1;
- (id)findMostSpecificAppRuleForBundleID:(id)arg1 config:(id)arg2;
- (_Bool)createConfigurationFromPayload:(id)arg1 payloadType:(id)arg2;
- (_Bool)saveIngestedConfiguration;
- (_Bool)removeIngestedConfiguration;
- (_Bool)removeConfigurationWithIdentifier:(id)arg1;
- (id)setAsideConfigurationName:(id)arg1 unsetAside:(_Bool)arg2;
- (_Bool)isInstalled:(id)arg1;
- (_Bool)lockConfigurations;
- (void)unlockConfigurations;
- (void)enableDefaultService;
- (_Bool)enableAlwaysOnVpn;
- (_Bool)updateDefaultAfterAddingConfiguration;
- (_Bool)updateDefaultAfterDeletingConfiguration;
- (id)copyManagedConfigurationIDs;
- (_Bool)updateAppLayerVPNMappingRules:(id)arg1;
- (_Bool)updateManagedAppRules:(id)arg1;
- (id)getCertificatesForConfigurationWithIdentifier:(id)arg1;

@end
