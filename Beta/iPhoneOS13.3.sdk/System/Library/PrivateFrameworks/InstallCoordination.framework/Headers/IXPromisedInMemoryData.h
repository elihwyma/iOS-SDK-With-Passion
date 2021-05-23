/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXOwnedDataPromise.h>

#import <InstallCoordination/Swift-Protocol.h>

@class IXPromisedInMemoryDataSeed;

@interface IXPromisedInMemoryData : IXOwnedDataPromise <Swift>

@property (retain, nonatomic) IXPromisedInMemoryDataSeed *seed;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 data:(id)arg3;
- (Class)seedClass;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;

@end
