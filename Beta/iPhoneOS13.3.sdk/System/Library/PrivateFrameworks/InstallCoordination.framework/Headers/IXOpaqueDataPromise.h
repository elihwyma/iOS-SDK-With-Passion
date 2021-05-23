/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXDataPromise.h>

#import <InstallCoordination/Swift-Protocol.h>

@interface IXOpaqueDataPromise : IXDataPromise <Swift>

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)seedClass;

@end
