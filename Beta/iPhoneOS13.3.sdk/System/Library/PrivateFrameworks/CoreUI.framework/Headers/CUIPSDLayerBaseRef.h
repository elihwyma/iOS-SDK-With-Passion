/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject

{
    CUIPSDImageRef *_imageRef;
    unsigned int _layerIndex;
}

@property (retain, nonatomic) CUIPSDImageRef *imageRef;
@property (nonatomic) unsigned int layerIndex;
@property (readonly) struct CGRect bounds;
@property (readonly) _Bool visibility;
@property (readonly) double opacity;
@property (readonly) double fillOpacity;
@property (readonly) int blendMode;
@property (readonly) _Bool hasLayerMask;
@property (readonly) _Bool hasVectorMask;

- (void)dealloc;
- (id)name;
- (struct CPSDLayerRecord *)_psdLayerRecord;
- (id)_psdImageRef;
- (_Bool)isLayerGroup;
- (id)layerMaskRef;
- (id)vectorMaskRef;
- (struct CGImage *)_createMaskFromAlphaChannel:(long long)arg1;

@end
