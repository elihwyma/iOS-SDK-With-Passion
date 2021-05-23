/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class ACAccount, CLLocation, CLLocationManager, NSHTTPURLResponse, NSMutableData, NSString, NSURLConnection;

@protocol SLPlaceDataSourceDelegate;

@interface SLFacebookPlaceManager : NSObject

{
    CLLocationManager *_locationManager;
    double _timeout;
    _Bool _isCanceled;
    _Bool _isUpdatingLocation;
    _Bool _disableTimeout;
    NSMutableData *_placeData;
    NSHTTPURLResponse *_urlResponse;
    NSURLConnection *_urlConnection;
    CDUnknownBlockType _queuedSearchRequest;
    CLLocation *_currentLocation;
    NSObject<SLPlaceDataSourceDelegate> *_delegate;
    ACAccount *_account;
}

@property (retain) CLLocation *currentLocation;
@property (readonly) double currentLocationAccuracy;
@property (weak) NSObject<SLPlaceDataSourceDelegate> *delegate;
@property (retain) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationDidTimeout;
- (void)fetchPlaces;
- (void)cancelPlaceFetch;
- (void)fetchPlacesWithSearchString:(id)arg1;
- (void)_handleResponse:(id)arg1 error:(id)arg2;
- (double)distanceFromCurrentLocationToPlace:(id)arg1;
- (id)_placesArrayWithPlacesData:(id)arg1;
- (id)initWithLocationManager:(id)arg1 account:(id)arg2 desiredAccuracy:(double)arg3 timeout:(double)arg4;

@end
