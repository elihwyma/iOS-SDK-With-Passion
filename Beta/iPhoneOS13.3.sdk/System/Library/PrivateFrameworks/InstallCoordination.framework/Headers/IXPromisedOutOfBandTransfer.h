/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXOpaqueDataPromise.h>

#import <InstallCoordination/Swift-Protocol.h>

@class IXPromisedOutOfBandTransferSeed;

@interface IXPromisedOutOfBandTransfer : IXOpaqueDataPromise <Swift>

@property (retain, nonatomic) IXPromisedOutOfBandTransferSeed *seed;
@property (nonatomic, getter=isComplete) _Bool complete;
@property (nonatomic) double percentComplete;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;
- (Class)seedClass;

@end
