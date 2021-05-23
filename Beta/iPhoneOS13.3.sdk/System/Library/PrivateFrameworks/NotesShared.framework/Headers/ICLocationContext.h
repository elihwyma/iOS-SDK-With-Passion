/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class CLGeocoder, CLLocationManager, NSString;

@interface ICLocationContext : NSObject

{
    CLLocationManager *_locationManager;
    _Bool _requestedAuthorization;
    CLGeocoder *_geocoder;
}

@property (retain, nonatomic) CLGeocoder *geocoder;
@property (nonatomic, readonly) CLLocationManager *locationManager;
@property (nonatomic) _Bool requestedAuthorization;
@property (nonatomic, readonly) _Bool canGetLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedContext;

- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)lookupPlaceAtLatitude:(double)arg1 longitude:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (void)requestAuthorizationIfNeeded;

@end
