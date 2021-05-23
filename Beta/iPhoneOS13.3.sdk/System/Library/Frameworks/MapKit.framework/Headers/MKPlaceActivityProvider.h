/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapItem;

@protocol MKPlaceActivityProviderDelegate;

@interface MKPlaceActivityProvider : NSObject

{
    id <MKPlaceActivityProviderDelegate> _delegate;
    MKMapItem *_mapItem;
}

@property (weak, nonatomic) id <MKPlaceActivityProviderDelegate> delegate;
@property (retain, nonatomic) MKMapItem *mapItem;

- (id)initWithMapItem:(id)arg1;
- (id)activityTitle;
- (id)activityURL;
- (_Bool)shouldUseWebPlaceCardForActivityType:(id)arg1;
- (id)webPlaceCardURL;
- (id)activityAnnotationView;
- (id)mapMetadataSpecialization;

@end
