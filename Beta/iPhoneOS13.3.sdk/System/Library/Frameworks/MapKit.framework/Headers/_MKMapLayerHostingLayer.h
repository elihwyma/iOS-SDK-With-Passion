/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <QuartzCore/CALayer.h>

@class _MKMapLayerHostingView;

__attribute__((visibility("hidden")))
@interface _MKMapLayerHostingLayer : CALayer

{
    _MKMapLayerHostingView *_hostView;
}

@property (weak, nonatomic) _MKMapLayerHostingView *hostView;

@end
