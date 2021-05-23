/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, TIAsset, TIAssetAttributes;

@interface TIAssetVersions : NSObject

{
    TIAssetAttributes *_attributes;
    TIAsset *_currentAsset;
    NSMutableSet *_assets;
}

@property (nonatomic, readonly) NSMutableSet *assets;
@property (nonatomic) TIAsset *currentAsset;
@property (nonatomic, readonly) TIAssetAttributes *attributes;
@property (nonatomic, readonly) unsigned long long count;

- (_Bool)isEmpty;
- (id)recursiveDescription;
- (id)initWithAttributes:(id)arg1;
- (void)addAsset:(id)arg1;
- (_Bool)purgeAsset:(id)arg1;
- (id)assetContentItemsMatching:(id)arg1;
- (id)purgeableAssets;

@end
