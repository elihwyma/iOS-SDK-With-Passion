/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGAssetLocationResolver : NSObject

+ (id)closestAssetLocationForAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (id)closestAddressNodeFromMomentNodes:(id)arg1 toLocation:(id)arg2 withMaximumDistance:(double)arg3 allowRemoteLocations:(_Bool)arg4;

@end
