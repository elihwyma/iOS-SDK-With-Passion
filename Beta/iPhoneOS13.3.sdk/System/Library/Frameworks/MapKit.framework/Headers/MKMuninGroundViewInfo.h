/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEOLocationInfo;

__attribute__((visibility("hidden")))
@interface MKMuninGroundViewInfo : NSObject

{
    double _startHeading;
    double _endHeading;
    GEOLocationInfo *_locationInfo;
}

@property (nonatomic, readonly) double startHeading;
@property (nonatomic, readonly) double endHeading;
@property (nonatomic, readonly) GEOLocationInfo *locationInfo;

- (_Bool)isHeadingInRange:(double)arg1;
- (id)initWithStartHeading:(double)arg1 endHeading:(double)arg2 localityName:(id)arg3 locationName:(id)arg4 secondaryLocationName:(id)arg5;

@end
