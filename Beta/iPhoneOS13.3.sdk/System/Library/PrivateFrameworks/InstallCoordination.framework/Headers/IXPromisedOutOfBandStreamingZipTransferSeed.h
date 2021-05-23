/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <InstallCoordination/IXOpaqueDataPromiseSeed.h>

#import <InstallCoordination/Swift-Protocol.h>

@class NSDictionary, NSURL;

@interface IXPromisedOutOfBandStreamingZipTransferSeed : IXOpaqueDataPromiseSeed <Swift>

{
    unsigned long long _archiveBytesConsumed;
    unsigned long long _archiveSizeBytes;
    NSURL *_extractionPath;
    NSDictionary *_szOptions;
}

@property (nonatomic) unsigned long long archiveBytesConsumed;
@property (nonatomic) unsigned long long archiveSizeBytes;
@property (retain, nonatomic) NSURL *extractionPath;
@property (copy, nonatomic) NSDictionary *szOptions;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)clientPromiseClass;

@end
