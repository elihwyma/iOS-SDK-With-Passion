/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapView;

__attribute__((visibility("hidden")))
@interface MKMapViewInternal : NSObject

{
    MKMapView *view;
}

- (void)startEffects;

@end
