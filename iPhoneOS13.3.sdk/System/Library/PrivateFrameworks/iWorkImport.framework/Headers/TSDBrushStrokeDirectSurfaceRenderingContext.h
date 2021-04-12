//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSurface;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface TSDBrushStrokeDirectSurfaceRenderingContext : NSObject
{
    IOSurface *_surface;
    double _contentsScale;
    CGColorSpace _destinationColorSpaceOverride;
    id <MTLDevice> _metalDeviceOverride;
    CGRect _frame;
    CGAffineTransform _transform;
}

@property(readonly, nonatomic) id <MTLDevice> metalDeviceOverride; // @synthesize metalDeviceOverride=_metalDeviceOverride;
@property(readonly, nonatomic) CGColorSpace destinationColorSpaceOverride; // @synthesize destinationColorSpaceOverride=_destinationColorSpaceOverride;
@property(readonly, nonatomic) double contentsScale; // @synthesize contentsScale=_contentsScale;
@property(readonly, nonatomic) CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) IOSurface *surface; // @synthesize surface=_surface;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSurface:(id)arg1 frame:(CGRect)arg2 transform:(CGAffineTransform)arg3 contentsScale:(double)arg4 destinationColorSpaceOverride:(CGColorSpace )arg5 metalDeviceOverride:(id)arg6;

@end

