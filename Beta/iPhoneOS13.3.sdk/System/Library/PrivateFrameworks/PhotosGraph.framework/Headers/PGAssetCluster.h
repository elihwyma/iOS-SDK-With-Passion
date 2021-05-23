/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLCircularRegion, NSArray;

@interface PGAssetCluster : NSObject

{
    NSArray *_assets;
    CLCircularRegion *_region;
}

@property (retain, nonatomic, readonly) NSArray *assets;
@property (retain, nonatomic, readonly) CLCircularRegion *region;

- (id)initWithAssets:(id)arg1 region:(id)arg2;

@end
