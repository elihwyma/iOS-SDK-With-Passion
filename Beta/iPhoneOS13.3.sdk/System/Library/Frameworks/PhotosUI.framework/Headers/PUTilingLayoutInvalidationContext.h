/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface PUTilingLayoutInvalidationContext : NSObject

{
    NSMutableSet *_invalidatedTileKinds;
    _Bool _invalidatedAllTiles;
    _Bool _invalidatedContentBounds;
    _Bool _invalidatedAnyTile;
    NSMutableDictionary *__invalidatedIndexPathsByTileKind;
}

@property (nonatomic, readonly) NSMutableDictionary *_invalidatedIndexPathsByTileKind;
@property (nonatomic) _Bool invalidatedAllTiles;
@property (nonatomic) _Bool invalidatedAnyTile;
@property (nonatomic, readonly) NSSet *invalidatedTileKinds;
@property (nonatomic, readonly) _Bool invalidatedContentBounds;

- (id)init;
- (void)invalidateAllTiles;
- (void)invalidateContentBounds;
- (void)invalidateTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (void)invalidateAllTilesWithKind:(id)arg1;
- (void)enumerateInvalidatedTilesUsingBlock:(CDUnknownBlockType)arg1;

@end
