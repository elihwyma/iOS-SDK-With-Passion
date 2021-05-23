/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageLayout.h>

@interface _NUFixedTileSizeImageLayout : NUImageLayout

{
    CDStruct_d58201db _tileSize;
    CDStruct_d58201db _borderSize;
    CDStruct_d58201db _tileCounts;
}

- (CDStruct_912cb5d2)tileSize;
- (long long)tileCount;
- (CDStruct_996ac03c)frameRectForTileAtIndex:(long long)arg1;
- (CDStruct_996ac03c)contentRectForTileAtIndex:(long long)arg1;
- (id)tileInfoAtIndex:(long long)arg1;
- (CDStruct_912cb5d2)borderSize;
- (CDStruct_912cb5d2)tileCounts;
- (_Bool)isEqualToLayout:(id)arg1;
- (id)initWithImageSize:(CDStruct_912cb5d2)arg1 tileSize:(CDStruct_912cb5d2)arg2 borderSize:(CDStruct_912cb5d2)arg3;

@end
