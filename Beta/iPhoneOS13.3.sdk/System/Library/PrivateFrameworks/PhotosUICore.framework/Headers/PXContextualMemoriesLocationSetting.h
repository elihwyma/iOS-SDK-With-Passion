/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CLLocation, CLPlacemark, NSString, PXLocationStream, _PXCompletionHandlerManager;

@interface PXContextualMemoriesLocationSetting : NSObject

{
    _Bool _monitorsCurrentLocation;
    CLPlacemark *_placemark;
    unsigned long long _locationState;
    PXLocationStream *_locationStream;
    _PXCompletionHandlerManager *_completionHandlerManager;
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (retain, nonatomic) CLPlacemark *placemark;
@property (nonatomic) unsigned long long locationState;
@property (retain, nonatomic) PXLocationStream *locationStream;
@property (retain, nonatomic) _PXCompletionHandlerManager *completionHandlerManager;
@property (nonatomic) _Bool monitorsCurrentLocation;
@property (nonatomic, readonly) CLLocation *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *headerTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)_setSimulatedLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)_simulatedLocationCoordinate;
+ (_Bool)automaticallyNotifiesObserversOfCoordinate;
+ (id)keyPathsForValuesAffectingPlacemark;
+ (id)keyPathsForValuesAffectingTitle;

- (id)init;
- (void)resetToDefault;
- (void)didCallLastCompletionHandlerForCompletionHandlerManager:(id)arg1;
- (void)_setCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_handleLocationAcquisitionUpdate:(id)arg1;
- (void)_initiateLocationAcquisitionWithAccuracy:(double)arg1;
- (id)_locationForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_updatePlacemarkWithPlacemarks:(id)arg1 error:(id)arg2;
- (void)_updatePlacemarkForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)requestLocationUpdateWithAccuracy:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
