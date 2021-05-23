/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

#import <MapKit/Swift-Protocol.h>

@class GEORouteMatch, MKAnnotationView, NSHashTable, NSString;

__attribute__((visibility("hidden")))
@interface MKUserLocationAnnotationViewProxy : NSObject <Swift>

{
    MKAnnotationView *_annotationView;
    NSHashTable *_presentationCoordinateObservers;
}

@property (weak, nonatomic) MKAnnotationView *annotationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double presentationCourse;
@property (nonatomic) CDStruct_c3b9c2ee presentationCoordinate;
@property (nonatomic) _Bool tracking;
@property (retain, nonatomic) GEORouteMatch *routeMatch;

- (void)setAnimatingToCoordinate:(_Bool)arg1;
- (void)addPresentationCoordinateChangedObserver:(id)arg1;
- (void)removePresentationCoordinateChangedObserver:(id)arg1;

@end
