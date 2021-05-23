/*
 Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

#import <Foundation/NSObject.h>

@interface DMEnvironment : NSObject

{
    _Bool _testMigrationInfrastructureOnly;
}

@property (nonatomic) _Bool testMigrationInfrastructureOnly;

+ (id)sharedInstance;
+ (_Bool)isBuildVersion:(id)arg1 equalToBuildVersion:(id)arg2;

- (id)context;
- (void)setContext:(id)arg1;
- (id)buildVersion;
- (void)clearContext;
- (_Bool)suppressMigrationPluginWrapperExitMarkerPref;
- (id)lastBuildVersionPref;
- (void)setLastBuildVersionPref:(id)arg1;
- (id)lastMigrationResultsPref;
- (void)setLastMigrationResultsPref:(id)arg1;
- (id)userDataDispositionPref;
- (void)setUserDataDispositionPref:(id)arg1;
- (id)continuousIntegrationMarkerPref;
- (_Bool)waitForExecutePluginsSignalMarkerPref;
- (_Bool)implementMigrationPluginResults;
- (id)migrationPluginResultsPref;
- (void)setMigrationPluginResultsPref:(id)arg1;
- (_Bool)isDeviceUsingEphemeralStorage;
- (void)blockUntilPreferencesFlush;
- (id)contextPath;

@end
