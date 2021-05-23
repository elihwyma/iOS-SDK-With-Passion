/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceActivityProvider.h>

@class MKMapItem;

@interface MKRouteActivityProvider : MKPlaceActivityProvider

{
    MKMapItem *_sourceMapItem;
    unsigned long long _transportType;
}

@property (retain, nonatomic) MKMapItem *destinationMapItem;
@property (retain, nonatomic) MKMapItem *sourceMapItem;
@property (nonatomic) unsigned long long transportType;

- (id)initWithSource:(id)arg1 destination:(id)arg2;
- (id)activityURL;
- (id)activitySourceTitle;

@end
