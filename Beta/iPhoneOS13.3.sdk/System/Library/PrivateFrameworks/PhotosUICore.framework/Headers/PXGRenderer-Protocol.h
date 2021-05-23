/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXGRendererDelegate, PXGTextureConverter;

@protocol PXGRenderer <Swift>

@property (weak, nonatomic) id <PXGRendererDelegate> delegate;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic) CDStruct_93894d6c interactionState;
@property (nonatomic, readonly) int presentationType;
@property (nonatomic, readonly) id <PXGTextureConverter> textureConverter;
@property (copy, nonatomic) CDUnknownBlockType test_renderSnapshotHandler;

- (unsigned short)setNeedsRender;
- (unsigned short)updateWithChangeDetails: /* Error: Ran out of types for this method. */;
- (unsigned short)renderSpritesWithTextures:dataStore:presentationDataStore:presentationMetadataStore:layout: /* Error: Ran out of types for this method. */;

@end
