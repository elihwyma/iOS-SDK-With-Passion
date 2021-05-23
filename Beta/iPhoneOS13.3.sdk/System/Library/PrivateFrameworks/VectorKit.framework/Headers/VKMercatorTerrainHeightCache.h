/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@protocol VKMercatorTerrainHeightProvider;

__attribute__((visibility("hidden")))
@interface VKMercatorTerrainHeightCache : NSObject

{
    id <VKMercatorTerrainHeightProvider> _heightProvider;
    struct map<md::Anchor *, float, std::__1::less<md::Anchor *>, std::__1::allocator<std::__1::pair<md::Anchor *const, float>>> _anchorToHeight;
}

@property (nonatomic) id <VKMercatorTerrainHeightProvider> heightProvider;

- (id).cxx_construct;
- (double)heightForAnchor:(struct Anchor *)arg1;
- (void)removeCachedValueForAnchor:(struct Anchor *)arg1;
- (void)invalidateRect:(const Box_3d7e3c2c *)arg1;

@end
