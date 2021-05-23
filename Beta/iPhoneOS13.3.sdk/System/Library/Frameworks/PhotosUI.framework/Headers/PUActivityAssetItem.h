/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

#import <PhotosUI/Swift-Protocol.h>

@class PHAsset;

@interface PUActivityAssetItem : NSObject <Swift>

{
    _Bool _excludeLiveness;
    _Bool _excludeLocation;
    PHAsset *_asset;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic) _Bool excludeLiveness;
@property (nonatomic) _Bool excludeLocation;

+ (id)itemsForAssets:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAsset:(id)arg1;
- (id)localIdentifier;
- (_Bool)isEqualToActivityAssetItem:(id)arg1;

@end
