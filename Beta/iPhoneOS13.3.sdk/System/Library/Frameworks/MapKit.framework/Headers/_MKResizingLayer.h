/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <QuartzCore/CALayer.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MKResizingLayer : CALayer

{
    NSMutableArray *_sizedLayers;
    _Bool _needsLayoutOnBoundsChange;
}

@property (nonatomic) _Bool needsLayoutOnBoundsChange;
@property (copy, nonatomic, readonly) NSArray *sizeToBoundsLayers;

- (void)setBounds:(struct CGRect)arg1;
- (void)setMask:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)sizeSublayerToBounds:(id)arg1;

@end
