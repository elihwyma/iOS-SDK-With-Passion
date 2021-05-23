/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface MBDeviceTransferPreflight : NSObject

{
    unsigned long long _sourceDeviceDataSize;
    unsigned long long _targetDeviceFreeSpaceSize;
    NSString *_activeAppleID;
    NSDictionary *_appleIDs;
    NSString *_uuid;
}

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long sourceDeviceDataSize;
@property (nonatomic) unsigned long long targetDeviceFreeSpaceSize;
@property (retain, nonatomic) NSString *activeAppleID;
@property (retain, nonatomic) NSDictionary *appleIDs;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
