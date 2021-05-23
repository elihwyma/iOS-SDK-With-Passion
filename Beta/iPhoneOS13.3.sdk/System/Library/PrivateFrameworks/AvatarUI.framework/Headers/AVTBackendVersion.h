/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTBackendVersion : NSObject

{
    double _backendVersion;
    double _avatarKitVersion;
}

@property (nonatomic, readonly) double backendVersion;
@property (nonatomic, readonly) double avatarKitVersion;

+ (_Bool)supportsSecureCoding;
+ (id)currentVersion;
+ (id)versionFileLocationForStoreLocation:(id)arg1;
+ (id)versionFromDiskAtLocation:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBackendVersion:(double)arg1 avatarKitVersion:(double)arg2;
- (_Bool)saveToDiskAtLocation:(id)arg1 error:(id *)arg2;

@end
