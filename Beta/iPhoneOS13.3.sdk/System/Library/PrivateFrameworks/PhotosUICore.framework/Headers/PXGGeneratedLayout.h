/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGItemsLayout.h>

@class NSString, PXGLayoutGuide, PXLayoutGenerator;

@protocol PXGGeneratedLayoutDelegate;

@interface PXGGeneratedLayout : PXGItemsLayout

{
    PXLayoutGenerator *_generator;
    struct _PXLayoutGeometry *_generatorGeometryBuffer;
    long long _generatorGeometryBufferCount;
    _Bool _isUpdatingSprites;
    CDStruct_d97c9657 _updateFlags;
    double _interitemSpacing;
    _Bool _useSaliency;
    int _mediaKind;
    long long _keyItemIndex;
    long long _defaultSpriteTag;
    long long _keyItemSpriteTag;
    PXGLayoutGuide *_headerLayoutGuide;
    CDStruct_2bd92d94 _cornerRadius;
    struct UIEdgeInsets _padding;
}

@property (nonatomic, readonly) PXLayoutGenerator *generator;
@property (nonatomic) long long keyItemIndex;
@property (nonatomic) int mediaKind;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) _Bool useSaliency;
@property (nonatomic) CDStruct_2bd92d94 cornerRadius;
@property (nonatomic) long long defaultSpriteTag;
@property (nonatomic) long long keyItemSpriteTag;
@property (weak, nonatomic) id <PXGGeneratedLayoutDelegate> delegate;
@property (nonatomic, readonly) PXGLayoutGuide *headerLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *diagnosticDescription;

- (id)init;
- (void)dealloc;
- (void)update;
- (void)_updateContentSize;
- (void)_updateSprites;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)didApplySpriteChangeDetails:(id)arg1;
- (id)newGenerator;
- (void)getSpriteZPosition:(out float *)arg1 clippingRect:(out struct CGRect *)arg2 forSpriteKind:(long long)arg3;
- (void)enumerateItemsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)metricsDidChange;
- (void)_updateGenerator;
- (void)_resizeGeometryBufferForSpriteCount:(long long)arg1;
- (void)spritesDidUpdate;

@end
