/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSIndexSet;

@protocol PXGSpriteTexture <Swift>

@property (nonatomic, readonly) unsigned int spriteCount;
@property (nonatomic, readonly) NSIndexSet *spriteIndexes;
@property (nonatomic, readonly) long long estimatedByteSize;
@property (nonatomic, readonly) int presentationType;
@property (nonatomic, readonly) struct CGImage *imageRepresentation;
@property (nonatomic, readonly) struct CGSize pixelSize;
@property (nonatomic, readonly) _Bool isOpaque;

- (unsigned short)getSpriteIndexes:maxSpriteCount: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateSpriteIndexes: /* Error: Ran out of types for this method. */;
- (unsigned short)containsSpriteIndex: /* Error: Ran out of types for this method. */;

@end
