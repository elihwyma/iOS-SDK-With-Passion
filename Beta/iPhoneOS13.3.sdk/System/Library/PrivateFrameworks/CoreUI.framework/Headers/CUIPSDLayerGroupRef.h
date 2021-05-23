/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIPSDLayerBaseRef.h>

@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef

{
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (void)dealloc;
- (_Bool)isOpen;
- (struct CGRect)bounds;
- (id)initWithImageRef:(id)arg1 layerIndex:(unsigned int)arg2;
- (id)layerRefAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLayers;
- (id)layerNames;
- (_Bool)isLayerGroup;
- (_Bool)_isGroupType:(unsigned int)arg1;
- (_Bool)isGroupStart;
- (_Bool)isGroupEnd;
- (id)layerEnumerator;
- (void)enumerateLayersUsingBlock:(CDUnknownBlockType)arg1;

@end
