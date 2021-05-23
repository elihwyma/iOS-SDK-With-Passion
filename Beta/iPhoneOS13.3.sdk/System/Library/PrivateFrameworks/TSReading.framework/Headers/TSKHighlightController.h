/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class CALayer, NSString, TSUImage;

@interface TSKHighlightController : NSObject <Swift>

{
    CALayer *_imageLayer;
    TSUImage *_image;
    struct CGRect _overallRect;
    struct CGAffineTransform _canvasTransform;
    struct CGAffineTransform _layerTransform;
    CALayer *_containingLayer;
    double _viewScale;
    struct CGPath *_path;
}

@property (retain, nonatomic) TSUImage *image;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) double viewScale;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) struct CGPath *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (void)disconnect;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)hide;
- (_Bool)drawRoundedRect;
- (void)createLayerWithZOrder:(double)arg1 contentsScaleForLayers:(double)arg2;
- (struct CGRect)buildLayersForPath:(struct CGPath *)arg1 withImage:(id)arg2;
- (void)setCanvasTransform:(struct CGAffineTransform)arg1 layerTransform:(struct CGAffineTransform)arg2;

@end
