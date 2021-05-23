/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSData, NSNumber, NSString;

@interface ASDJobAsset : NSObject <Swift>

{
    _Bool _isExternal;
    _Bool _isLocallyCacheable;
    _Bool _isZipStreamable;
    NSString *_assetType;
    NSString *_assetURL;
    NSNumber *_bytesTotal;
    NSData *_dPInfo;
    NSNumber *_expectedDiskspace;
    NSData *_hashArrayData;
    NSNumber *_hashType;
    NSNumber *_initialODRSize;
    NSNumber *_numberOfBytesToHash;
    NSData *_sinfs;
    NSString *_storeDownloadKey;
    NSString *_variantID;
}

@property (copy, nonatomic) NSString *assetType;
@property (copy, nonatomic) NSString *assetURL;
@property (copy, nonatomic) NSNumber *bytesTotal;
@property (copy, nonatomic) NSData *dPInfo;
@property (copy, nonatomic) NSNumber *expectedDiskspace;
@property (copy, nonatomic) NSData *hashArrayData;
@property (copy, nonatomic) NSNumber *hashType;
@property (copy, nonatomic) NSNumber *initialODRSize;
@property (nonatomic) _Bool isExternal;
@property (nonatomic) _Bool isLocallyCacheable;
@property (nonatomic) _Bool isZipStreamable;
@property (copy, nonatomic) NSNumber *numberOfBytesToHash;
@property (copy, nonatomic) NSData *sinfs;
@property (copy, nonatomic) NSString *storeDownloadKey;
@property (copy, nonatomic) NSString *variantID;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
