/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXOwnedDataPromiseSeed.h>

#import <InstallCoordination/Swift-Protocol.h>

@class NSString;

@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed <Swift>

{
    _Bool _isPlugin;
    NSString *_bundleName;
    NSString *_bundleID;
    unsigned long long _installType;
}

@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) unsigned long long installType;
@property (nonatomic) _Bool isPlugin;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)clientPromiseClass;

@end
