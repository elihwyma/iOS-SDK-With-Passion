/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXOwnedDataPromise.h>

#import <InstallCoordination/Swift-Protocol.h>

@class IXPromisedTransferToPathSeed, NSURL;

@interface IXPromisedTransferToPath : IXOwnedDataPromise <Swift>

@property (retain, nonatomic) IXPromisedTransferToPathSeed *seed;
@property (nonatomic, getter=isComplete) _Bool complete;
@property (nonatomic) double percentComplete;
@property (retain, nonatomic) NSURL *transferPath;
@property (nonatomic) _Bool shouldCopy;
@property (nonatomic) _Bool tryDeltaCopy;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(id)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;
- (_Bool)_doInit;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 transferPath:(id)arg3 diskSpaceNeeded:(unsigned long long)arg4;
- (Class)seedClass;

@end
