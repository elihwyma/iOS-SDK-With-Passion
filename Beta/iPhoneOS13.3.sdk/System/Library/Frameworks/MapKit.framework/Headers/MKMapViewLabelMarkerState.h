/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MKMapViewLabelMarkerState : NSObject

{
    _Bool _visible;
    unsigned char _balloonBehavior;
}

@property (nonatomic, getter=isVisible) _Bool visible;
@property (nonatomic) unsigned char balloonBehavior;

+ (id)stateForLabelMarker:(id)arg1;

@end
