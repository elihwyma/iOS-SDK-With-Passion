/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface MBSnapshot : NSObject

{
    unsigned long long _snapshotID;
    NSString *_snapshotUUID;
    NSString *_deviceName;
    NSDate *_date;
    NSDate *_created;
    NSDate *_modified;
    int _state;
    _Bool _isCompatible;
    NSString *_systemVersion;
    unsigned long long _quotaReserved;
    long long _backupType;
}

@property (nonatomic) long long backupType;
@property (nonatomic, readonly) unsigned long long snapshotID;
@property (nonatomic, readonly) NSString *snapshotUUID;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSDate *created;
@property (nonatomic, readonly) NSDate *modified;
@property (nonatomic, readonly) int state;
@property (nonatomic, readonly) _Bool isCompatible;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) unsigned long long quotaReserved;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapshotID:(unsigned long long)arg1 snapshotUUID:(id)arg2 deviceName:(id)arg3 date:(id)arg4 created:(id)arg5 modified:(id)arg6 state:(int)arg7 isCompatible:(_Bool)arg8 systemVersion:(id)arg9 quotaReserved:(unsigned long long)arg10 backupType:(long long)arg11;
- (id)initWithSnapshotID:(unsigned long long)arg1 deviceName:(id)arg2 date:(id)arg3 created:(id)arg4 modified:(id)arg5 state:(int)arg6 isCompatible:(_Bool)arg7 systemVersion:(id)arg8 quotaReserved:(unsigned long long)arg9 backupType:(long long)arg10;
- (id)initWithSnapshotUUID:(id)arg1 snapshotID:(unsigned long long)arg2 deviceName:(id)arg3 date:(id)arg4 created:(id)arg5 modified:(id)arg6 state:(int)arg7 isCompatible:(_Bool)arg8 systemVersion:(id)arg9 quotaReserved:(unsigned long long)arg10 backupType:(long long)arg11;

@end
