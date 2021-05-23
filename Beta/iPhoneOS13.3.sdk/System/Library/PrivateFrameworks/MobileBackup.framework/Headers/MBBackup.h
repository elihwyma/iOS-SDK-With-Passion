/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MBBackup : NSObject

{
    NSString *_backupUDID;
    NSString *_deviceClass;
    NSString *_productType;
    NSString *_hardwareModel;
    NSString *_marketingName;
    NSArray *_snapshots;
    _Bool _restoreSystemFiles;
    _Bool _isMBSBackup;
    _Bool _isBackupEnabled;
    _Bool _hasBackupEnabledState;
    NSString *_backupUUID;
}

@property (nonatomic, readonly) NSString *backupUDID;
@property (nonatomic, readonly) NSString *backupUUID;
@property (nonatomic, readonly) NSString *backupUUIDSansPrefix;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *hardwareModel;
@property (nonatomic, readonly) NSString *marketingName;
@property (nonatomic, readonly) NSArray *snapshots;
@property (nonatomic, readonly, getter=canRestoreSystemFiles) _Bool restoreSystemFiles;
@property (nonatomic, readonly) _Bool isMBSBackup;
@property (nonatomic, readonly) _Bool isBackupEnabled;
@property (nonatomic, readonly) _Bool hasBackupEnabledState;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBackupUDID:(id)arg1 backupUUID:(id)arg2 deviceClass:(id)arg3 productType:(id)arg4 hardwareModel:(id)arg5 marketingName:(id)arg6 snapshots:(id)arg7 restoreSystemFiles:(_Bool)arg8 isMBSBackup:(_Bool)arg9 isBackupEnabled:(_Bool)arg10 hasBackupEnabledState:(_Bool)arg11;

@end
