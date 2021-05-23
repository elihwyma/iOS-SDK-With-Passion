/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUImageLayout : NSObject

{
    CDStruct_d58201db _imageSize;
}

@property (nonatomic, readonly) CDStruct_912cb5d2 imageSize;
@property (nonatomic, readonly) long long tileCount;

+ (id)contiguousLayoutForImageSize:(CDStruct_912cb5d2)arg1;
+ (id)tiledLayoutForImageSize:(CDStruct_912cb5d2)arg1 tileSize:(CDStruct_912cb5d2)arg2;
+ (id)overlappingTiledLayoutForImageSize:(CDStruct_912cb5d2)arg1 tileSize:(CDStruct_912cb5d2)arg2 borderSize:(CDStruct_912cb5d2)arg3;
+ (id)stripLayoutForImageSize:(CDStruct_912cb5d2)arg1 stripHeight:(long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (CDStruct_912cb5d2)tileSize;
- (id)initWithImageSize:(CDStruct_912cb5d2)arg1;
- (CDStruct_996ac03c)frameRectForTileAtIndex:(long long)arg1;
- (CDStruct_996ac03c)contentRectForTileAtIndex:(long long)arg1;
- (long long)tileIndexAtPoint:(CDStruct_912cb5d2)arg1;
- (id)tileInfoAtIndex:(long long)arg1;
- (void)enumerateTilesForReadingInRect:(CDStruct_996ac03c)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTilesForWritingInRect:(CDStruct_996ac03c)arg1 withBlock:(CDUnknownBlockType)arg2;
- (CDStruct_912cb5d2)borderSize;
- (CDStruct_912cb5d2)tileCounts;
- (_Bool)isEqualToLayout:(id)arg1;

@end
