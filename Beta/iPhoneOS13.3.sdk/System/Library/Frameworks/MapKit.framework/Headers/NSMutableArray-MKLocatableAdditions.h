/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (MKLocatableAdditions)

- (void)_mapkit_sortUsingLatitudeAscending:(_Bool)arg1;
- (void)_mapkit_sortUsingLongitudeAscending:(_Bool)arg1;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D)arg1 ascending:(_Bool)arg2;
- (id)_mapkit_popLastObject;
- (void)_mapkit_sortUsingLatitude;
- (void)_mapkit_sortUsingLongitude;
- (void)_mapkit_sortUsingDistanceFromCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_mapkit_insertObject:(id)arg1 sortedUsingSelector:(SEL)arg2;

@end
