/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKOverlayPathView.h>

@class MKPolygon;

@interface MKPolygonView : MKOverlayPathView

@property (nonatomic, readonly) MKPolygon *polygon;

- (void)createPath;
- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithPolygon:(id)arg1;

@end
