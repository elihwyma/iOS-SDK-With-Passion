/*
 Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface DataClassMigrator : NSObject

{
    NSDictionary *_context;
    _Bool _didUpgrade;
    unsigned int _userDataDisposition;
    NSString *_restoredBackupBuildVersion;
    NSString *_restoredBackupProductType;
}

@property (nonatomic) unsigned int userDataDisposition;
@property (retain, nonatomic) NSString *restoredBackupBuildVersion;
@property (retain, nonatomic) NSString *restoredBackupProductType;
@property (nonatomic, readonly) _Bool shouldPreserveSettingsAfterRestore;
@property (nonatomic, readonly) _Bool wasPasscodeSetInBackup;
@property (nonatomic) _Bool didUpgrade;
@property (nonatomic, readonly) _Bool didRestoreFromBackup;
@property (nonatomic, readonly) _Bool didMigrateBackupFromDifferentDevice;
@property (nonatomic, readonly) _Bool didRestoreFromCloudBackup;
@property (retain, nonatomic) NSDictionary *context;

+ (id)dataClassMigratorForBundleAtPath:(id)arg1;

- (_Bool)performMigration;

@end
