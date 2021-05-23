/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, PXScrollViewController;

@protocol PXGRendererDelegate, PXGTextureConverter;

@interface PXGViewRenderer : NSObject

{
    NSMutableDictionary *_reusableViewsByClass;
    NSMutableDictionary *_viewBySpriteIndex;
    long long _spriteBufferCapacity;
    unsigned int *_spriteIndexes;
    CDStruct_183601bc *_textureInfos;
    struct CGPoint _renderedVisibleOrigin;
    CDUnknownBlockType _test_renderSnapshotHandler;
    id <PXGRendererDelegate> _delegate;
    id <PXGTextureConverter> _textureConverter;
    PXScrollViewController *_scrollViewController;
    struct CGRect _visibleRect;
    CDStruct_93894d6c _interactionState;
}

@property (retain, nonatomic) PXScrollViewController *scrollViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXGRendererDelegate> delegate;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic) CDStruct_93894d6c interactionState;
@property (nonatomic, readonly) int presentationType;
@property (nonatomic, readonly) id <PXGTextureConverter> textureConverter;
@property (copy, nonatomic) CDUnknownBlockType test_renderSnapshotHandler;

- (id)init;
- (void)dealloc;
- (double)_screenScale;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)setNeedsRender;
- (void)updateWithChangeDetails:(id)arg1;
- (void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;
- (void)_shiftViewsToCompensateForDeferredVisibleOrigin;
- (void)_resizeBuffersForSpriteCount:(long long)arg1;
- (void)_makeViewReusable:(id)arg1;
- (id)_dequeueViewWithClass:(Class)arg1;
- (id)viewForSpriteIndex:(unsigned int)arg1;

@end
