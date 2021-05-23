/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface MBRestoreInfo : NSObject

{
    NSDate *_date;
    _Bool _wasCloudRestore;
    NSString *_deviceBuildVersion;
    NSString *_backupBuildVersion;
}

@property (readonly) NSDate *date;
@property (readonly) _Bool wasCloudRestore;
@property (readonly) NSString *deviceBuildVersion;
@property (readonly) NSString *backupBuildVersion;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setDate:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)setWasCloudRestore:(_Bool)arg1;
- (void)setDeviceBuildVersion:(id)arg1;
- (void)setBackupBuildVersion:(id)arg1;

@end
