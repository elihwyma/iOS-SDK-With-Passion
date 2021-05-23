/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSSet;

@interface PGSceneprintsBehavioralProcessor : NSObject

{
    NSSet *_goldAssets;
    NSSet *_goldAssetUUIDs;
    NSMapTable *_goldAssetSceneprintsAndDates;
    double _similarityThreshold;
}

@property (nonatomic, readonly) NSSet *goldAssets;
@property (nonatomic, readonly) NSSet *goldAssetUUIDs;
@property (nonatomic, readonly) NSMapTable *goldAssetSceneprintsAndDates;
@property (nonatomic) double similarityThreshold;

- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2;
- (id)initWithGoldAssets:(id)arg1 graph:(id)arg2 persistedData:(id)arg3;
- (void)preprocessWithProgressBlock:(CDUnknownBlockType)arg1;
- (float)semanticScoreForAsset:(id)arg1;
- (id)semanticScoreByAssetUUIDForAssets:(id)arg1;
- (id)dataToPersist;

@end
