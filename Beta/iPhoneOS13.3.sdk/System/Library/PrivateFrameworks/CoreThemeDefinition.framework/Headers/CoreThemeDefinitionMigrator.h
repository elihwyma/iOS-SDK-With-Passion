/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class NSMigrationManager, NSString, NSURL;

@interface CoreThemeDefinitionMigrator : NSObject

{
    NSMigrationManager *_migrationManager;
    NSURL *_documentURL;
    long long _oldVersion;
    long long _newVersion;
    NSString *temporaryMigrationPath;
}

@property (copy) NSString *temporaryMigrationPath;

- (void)dealloc;
- (_Bool)migrateWithError:(id *)arg1;
- (_Bool)_checkDiskSpace:(id *)arg1;
- (id)mappingModelForMigrationWithError:(id *)arg1;
- (_Bool)_updateMetadata:(id *)arg1;
- (id)initWithURL:(id)arg1 oldVersion:(long long)arg2 newVersion:(long long)arg3;

@end
