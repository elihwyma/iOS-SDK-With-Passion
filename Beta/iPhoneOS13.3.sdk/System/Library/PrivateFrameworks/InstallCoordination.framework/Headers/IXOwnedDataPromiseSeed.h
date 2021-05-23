/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXDataPromiseSeed.h>

#import <InstallCoordination/Swift-Protocol.h>

@class NSURL;

@interface IXOwnedDataPromiseSeed : IXDataPromiseSeed <Swift>

{
    NSURL *_stagingBaseDir;
}

@property (retain, nonatomic) NSURL *stagingBaseDir;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)clientPromiseClass;

@end
