/*
 Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MAAbsoluteAssetId : NSObject

{
    NSString *_assetId;
    NSString *_assetType;
}

@property (retain, nonatomic) NSString *assetId;
@property (retain, nonatomic) NSString *assetType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAssetId:(id)arg1 forAssetType:(id)arg2;

@end
