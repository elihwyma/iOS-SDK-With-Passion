/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface WBSCloudBookmarksRemoteMigrationInfo : NSObject

{
    long long _migrationState;
    NSString *_migratorDeviceIdentifier;
    NSDate *_serverModificationDate;
}

@property (nonatomic, readonly) long long migrationState;
@property (copy, nonatomic, readonly) NSString *migratorDeviceIdentifier;
@property (nonatomic, readonly) NSDate *serverModificationDate;

- (id)init;
- (id)initWithMigrationState:(long long)arg1 migratorDeviceIdentifier:(id)arg2 serverModificationDate:(id)arg3;

@end
