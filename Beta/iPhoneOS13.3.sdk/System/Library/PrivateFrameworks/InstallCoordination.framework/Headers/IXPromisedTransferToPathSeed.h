/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXOwnedDataPromiseSeed.h>

#import <InstallCoordination/Swift-Protocol.h>

@class NSURL;

@interface IXPromisedTransferToPathSeed : IXOwnedDataPromiseSeed <Swift>

{
    _Bool _shouldCopy;
    _Bool _tryDeltaCopy;
    NSURL *_transferPath;
}

@property (retain, nonatomic) NSURL *transferPath;
@property (nonatomic) _Bool shouldCopy;
@property (nonatomic) _Bool tryDeltaCopy;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)clientPromiseClass;

@end
