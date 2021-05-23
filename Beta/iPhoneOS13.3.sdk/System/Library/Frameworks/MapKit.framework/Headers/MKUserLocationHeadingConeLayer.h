/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <QuartzCore/CALayer.h>

@class NSString, _MKPuckAnnotationView;

__attribute__((visibility("hidden")))
@interface MKUserLocationHeadingConeLayer : CALayer

{
    _MKPuckAnnotationView *_userLocationView;
    CALayer *_maskLayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateTintColor:(id)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)updateHeading:(double)arg1;
- (id)initWithUserLocationView:(id)arg1;
- (void)_updateHeadingImage;
- (id)_headingImage:(struct CGPoint *)arg1;

@end
