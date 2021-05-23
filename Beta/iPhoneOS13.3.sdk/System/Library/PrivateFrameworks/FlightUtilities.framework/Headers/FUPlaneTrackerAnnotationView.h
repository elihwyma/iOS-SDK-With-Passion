/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <MKAnnotationView.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FUPlaneTrackerAnnotationView : MKAnnotationView

{
    _Bool _showsPlane;
    NSMutableArray *_viewAddedBlock;
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (retain) NSMutableArray *viewAddedBlock;
@property (nonatomic) double currentProgress;
@property (nonatomic) struct CLLocationCoordinate2D startLocation;
@property (nonatomic) struct CLLocationCoordinate2D endLocation;
@property (readonly) struct CLLocationCoordinate2D currentLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;

+ (Class)layerClass;
+ (id)defaultAnotation;

- (id)init;
- (void)didMoveToSuperview;
- (id)planeLayer;
- (void)setPlaneImage:(id)arg1;
- (void)setStartLatitude:(double)arg1 startLongitude:(double)arg2 endLatitude:(double)arg3 endLongitude:(double)arg4;
- (void)setShowsPlane:(_Bool)arg1;
- (void)notifyWhenIsVisibleWithBlock:(CDUnknownBlockType)arg1;

@end
