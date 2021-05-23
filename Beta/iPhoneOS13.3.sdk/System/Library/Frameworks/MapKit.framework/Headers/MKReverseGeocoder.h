/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKPlacemark, MKReverseGeocoderInternal;

@protocol MKReverseGeocoderDelegate;

@interface MKReverseGeocoder : NSObject

{
    MKReverseGeocoderInternal *_internal;
}

@property (weak, nonatomic) id <MKReverseGeocoderDelegate> delegate;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) MKPlacemark *placemark;
@property (nonatomic, readonly, getter=isQuerying) _Bool querying;

- (void)cancel;
- (void)start;
- (void)_notifyResult:(id)arg1;
- (void)_notifyError:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_notifyNoResults;

@end
