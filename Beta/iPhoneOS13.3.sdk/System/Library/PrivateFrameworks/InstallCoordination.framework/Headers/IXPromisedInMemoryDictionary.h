/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXOwnedDataPromise.h>

#import <InstallCoordination/Swift-Protocol.h>

@class IXPromisedInMemoryDictionarySeed;

@interface IXPromisedInMemoryDictionary : IXOwnedDataPromise <Swift>

@property (retain, nonatomic) IXPromisedInMemoryDictionarySeed *seed;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(id)arg1;
- (Class)seedClass;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 dictionary:(id)arg3;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;

@end
