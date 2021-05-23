/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/_MKResizingLayer.h>

@class CALayer, UIColor;

__attribute__((visibility("hidden")))
@interface _MKCalloutLayer : _MKResizingLayer

{
    struct CGImage *_contentImage;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
    long long _arrowPosition;
    double _arrowOffset;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

@property (nonatomic) long long arrowPosition;
@property (nonatomic) double arrowOffset;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;

- (id)init;
- (void)dealloc;
- (struct CGSize)_contentSize;
- (void)setContentsScale:(double)arg1;
- (void)layoutSublayers;
- (struct CGImage *)_newContentImage;

@end
