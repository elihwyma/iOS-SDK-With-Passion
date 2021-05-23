/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@protocol NEProfileIngestionDelegate

+ (unsigned short)getServiceIDForPayload: /* Error: Ran out of types for this method. */;
+ (unsigned short)profileMigrationComplete;

- (unsigned short)initWithNameAndType:payloadType: /* Error: Ran out of types for this method. */;
- (unsigned short)ingestedConfiguration;
- (unsigned short)findConfigurationByConfigurationID: /* Error: Ran out of types for this method. */;
- (unsigned short)findConfigurationByName: /* Error: Ran out of types for this method. */;
- (unsigned short)findConfigurationByPayloadUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)removeConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)loadConfigurationsForceReloadFromDisk;
- (unsigned short)createConfigurationFromPayload:payloadType: /* Error: Ran out of types for this method. */;
- (unsigned short)saveIngestedConfiguration;
- (unsigned short)removeIngestedConfiguration;
- (unsigned short)removeConfigurationWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)setAsideConfigurationName:unsetAside: /* Error: Ran out of types for this method. */;
- (unsigned short)isInstalled: /* Error: Ran out of types for this method. */;
- (unsigned short)lockConfigurations;
- (unsigned short)unlockConfigurations;
- (unsigned short)enableDefaultService;
- (unsigned short)enableAlwaysOnVpn;
- (unsigned short)updateDefaultAfterAddingConfiguration;
- (unsigned short)updateDefaultAfterDeletingConfiguration;
- (unsigned short)copyManagedConfigurationIDs;
- (unsigned short)updateAppLayerVPNMappingRules: /* Error: Ran out of types for this method. */;
- (unsigned short)updateManagedAppRules: /* Error: Ran out of types for this method. */;
- (unsigned short)getCertificatesForConfigurationWithIdentifier: /* Error: Ran out of types for this method. */;

@end
