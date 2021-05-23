/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUImageLayout.h>

@interface _NUContiguousImageLayout : NUImageLayout

- (CDStruct_912cb5d2)tileSize;
- (long long)tileCount;
- (CDStruct_996ac03c)frameRectForTileAtIndex:(long long)arg1;
- (CDStruct_996ac03c)contentRectForTileAtIndex:(long long)arg1;
- (long long)tileIndexAtPoint:(CDStruct_912cb5d2)arg1;
- (id)tileInfoAtIndex:(long long)arg1;
- (void)enumerateTilesForReadingInRect:(CDStruct_996ac03c)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTilesForWritingInRect:(CDStruct_996ac03c)arg1 withBlock:(CDUnknownBlockType)arg2;
- (CDStruct_912cb5d2)borderSize;
- (CDStruct_912cb5d2)tileCounts;

@end
