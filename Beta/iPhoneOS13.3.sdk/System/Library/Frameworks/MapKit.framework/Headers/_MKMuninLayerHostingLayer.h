/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <QuartzCore/CALayer.h>

@class _MKMuninLayerHostingView;

__attribute__((visibility("hidden")))
@interface _MKMuninLayerHostingLayer : CALayer

{
    _MKMuninLayerHostingView *_hostView;
}

@property (weak, nonatomic) _MKMuninLayerHostingView *hostView;

@end
