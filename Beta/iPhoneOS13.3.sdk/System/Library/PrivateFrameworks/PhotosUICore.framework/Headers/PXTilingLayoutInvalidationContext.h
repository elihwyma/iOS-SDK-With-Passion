/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableArray, NSMutableIndexSet, NSString;

@interface PXTilingLayoutInvalidationContext : NSObject

{
    NSMutableArray *_invalidatedTileIdentifiers;
    NSMutableIndexSet *_invalidatedTileGroups;
    _Bool _invalidatedAllTiles;
    _Bool _invalidatedContentBounds;
    _Bool _invalidatedScrollBounds;
    _Bool _invalidatedVisibleRect;
    _Bool _invalidatedScrollInfo;
    NSString *_tag;
}

@property (nonatomic, readonly) NSIndexSet *invalidatedTileGroups;
@property (nonatomic, readonly) _Bool invalidatedAllTiles;
@property (nonatomic, readonly) _Bool invalidatedContentBounds;
@property (nonatomic, readonly) _Bool invalidatedScrollBounds;
@property (nonatomic, readonly) _Bool invalidatedVisibleRect;
@property (nonatomic, readonly) _Bool invalidatedScrollInfo;
@property (copy, nonatomic) NSString *tag;

- (id)description;
- (void)invalidateEverything;
- (void)invalidateTileWithIdentifier:(struct PXTileIdentifier)arg1;
- (void)invalidateTilesInGroup:(unsigned long long)arg1;
- (void)enumerateInvalidatedTileIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
- (void)invalidateAllTiles;
- (void)invalidateContentBounds;
- (void)invalidateScrollBounds;
- (void)invalidateVisibleRect;
- (void)invalidateScrollInfo;

@end
