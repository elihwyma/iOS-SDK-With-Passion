/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSObject.h>

#import <InstallCoordination/Swift-Protocol.h>

@class NSString, NSUUID;

@interface IXAppInstallCoordinatorSeed : NSObject <Swift>

{
    NSString *_bundleID;
    NSUUID *_uniqueIdentifier;
    unsigned long long _creator;
    unsigned long long _intent;
}

@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSUUID *uniqueIdentifier;
@property (nonatomic) unsigned long long creator;
@property (nonatomic) unsigned long long intent;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
