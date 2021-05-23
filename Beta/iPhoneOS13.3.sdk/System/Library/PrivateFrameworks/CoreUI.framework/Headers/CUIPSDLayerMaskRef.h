/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject

{
    CUIPSDLayerRef *_layerRef;
    _Bool _isVectorMask;
}

- (void)dealloc;
- (_Bool)isEnabled;
- (struct CGRect)bounds;
- (id)initLayerMaskWithLayerRef:(id)arg1;
- (id)initVectorMaskWithLayerRef:(id)arg1;
- (struct CGPath *)newBezierPathAtScale:(double)arg1;
- (id)layerRef;
- (_Bool)isLinked;
- (_Bool)isInvertedWhenBlending;
- (struct CGPath *)newBezierPath;
- (struct CGImage *)createCGImageMask;

@end
