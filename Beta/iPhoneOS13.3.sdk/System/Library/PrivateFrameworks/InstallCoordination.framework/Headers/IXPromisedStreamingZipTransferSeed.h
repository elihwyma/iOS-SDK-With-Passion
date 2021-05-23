/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXOwnedDataPromiseSeed.h>

#import <InstallCoordination/Swift-Protocol.h>

@class NSDictionary;

@interface IXPromisedStreamingZipTransferSeed : IXOwnedDataPromiseSeed <Swift>

{
    unsigned long long _archiveBytesConsumed;
    unsigned long long _archiveSizeBytes;
    NSDictionary *_szOptions;
}

@property (nonatomic) unsigned long long archiveBytesConsumed;
@property (nonatomic) unsigned long long archiveSizeBytes;
@property (copy, nonatomic) NSDictionary *szOptions;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)clientPromiseClass;

@end
