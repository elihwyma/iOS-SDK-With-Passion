/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SFDeviceAssetQuery : NSObject

{
    _Bool _legacyAsset;
    _Bool _h264;
    struct LogCategory *_ucat;
    NSString *_assetType;
    unsigned long long _version;
    NSString *_productType;
    NSString *_mappedProductType;
    NSString *_color;
    NSDictionary *_additionalQueryParameters;
}

@property (nonatomic, readonly) struct LogCategory *ucat;
@property (nonatomic, readonly) NSString *stringIdentifier;
@property (nonatomic, readonly) NSString *variantIdentifier;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic) _Bool h264;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly) NSString *productType;
@property (retain, nonatomic) NSString *mappedProductType;
@property (nonatomic, readonly) NSString *effectiveProductType;
@property (nonatomic, readonly) NSString *color;
@property (nonatomic, readonly) NSDictionary *additionalQueryParameters;
@property (nonatomic) _Bool legacyAsset;

+ (_Bool)deviceWantsH264;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAssetType:(id)arg1 productType:(id)arg2;
- (id)loggingProductType;
- (id)initWithHomePodColor:(unsigned long long)arg1;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2;
- (id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2;

@end
