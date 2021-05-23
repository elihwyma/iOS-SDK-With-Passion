/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSObject;

@protocol SLPlaceDataSourceDelegate;

@protocol SLPlaceDataSource

@property (weak) NSObject<SLPlaceDataSourceDelegate> *delegate;

- (unsigned short)startUpdatingLocation;
- (unsigned short)stopUpdatingLocation;
- (unsigned short)currentLocation;
- (unsigned short)fetchPlaces;
- (unsigned short)cancelPlaceFetch;
- (unsigned short)fetchPlacesWithSearchString: /* Error: Ran out of types for this method. */;

@end
