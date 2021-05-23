/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDContainerInfo : NSObject

{
    NSURL *_publicCloudDBURL;
    NSURL *_publicShareServiceURL;
    NSURL *_publicDeviceServiceURL;
    NSURL *_publicCodeServiceURL;
    NSURL *_publicMetricsServiceURL;
    NSURL *_publicDatabaseRPCServiceURL;
    NSString *_containerScopedUserID;
    NSString *_orgAdminUserID;
    long long _environment;
}

@property (copy, nonatomic) NSURL *publicCloudDBURL;
@property (copy, nonatomic) NSURL *publicShareServiceURL;
@property (copy, nonatomic) NSURL *publicDeviceServiceURL;
@property (copy, nonatomic) NSURL *publicCodeServiceURL;
@property (copy, nonatomic) NSURL *publicMetricsServiceURL;
@property (copy, nonatomic) NSURL *publicDatabaseRPCServiceURL;
@property (copy, nonatomic) NSString *containerScopedUserID;
@property (copy, nonatomic) NSString *orgAdminUserID;
@property (nonatomic) long long environment;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;

@end
