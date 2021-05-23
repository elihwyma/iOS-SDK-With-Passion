/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@interface MBDeviceTransferConnectionInfo : NSObject

{
    long long _connectionState;
    long long _connectionType;
}

@property (nonatomic) long long connectionState;
@property (nonatomic) long long connectionType;

+ (_Bool)supportsSecureCoding;
+ (long long)connectionTypeFromLinkType:(int)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
