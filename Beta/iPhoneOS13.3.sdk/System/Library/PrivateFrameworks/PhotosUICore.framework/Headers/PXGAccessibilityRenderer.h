/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableArray, NSMutableDictionary, NSString, PXGAccessibilityContentInfoManager, PXScrollViewController;

@protocol PXGAccessibilityRendererDelegate, PXGRendererDelegate, PXGTextureConverter;

@interface PXGAccessibilityRenderer : NSObject

{
    PXGAccessibilityContentInfoManager *_contentInfoManager;
    NSMutableArray *_reusableContentInfoQueue;
    NSMutableDictionary *_contentInfosBySpriteIndex;
    NSMutableDictionary *_viewContentInfosByParentSpriteIndex;
    NSIndexSet *_previousExtendedIndexes;
    id <PXGRendererDelegate> _delegate;
    id <PXGTextureConverter> _textureConverter;
    PXScrollViewController *_scrollViewController;
    id <PXGAccessibilityRendererDelegate> _accessibilityDelegate;
    struct CGRect _visibleRect;
    CDStruct_93894d6c _interactionState;
}

@property (retain, nonatomic) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id <PXGAccessibilityRendererDelegate> accessibilityDelegate;
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

- (void)setNeedsRender;
- (void)updateWithChangeDetails:(id)arg1;
- (void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;
- (id)accessibilityViewForSpriteIndex:(unsigned int)arg1;
- (id)initWithContentInfoManager:(id)arg1;
- (void)_makeElementReusable:(id)arg1;
- (id)_dequeueElement;
- (void)_selectAsset:(id)arg1;

@end
