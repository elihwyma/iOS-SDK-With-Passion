/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXDataPromiseSeed.h>

#import <InstallCoordination/Swift-Protocol.h>

@interface IXOpaqueDataPromiseSeed : IXDataPromiseSeed <Swift>

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)clientPromiseClass;

@end
