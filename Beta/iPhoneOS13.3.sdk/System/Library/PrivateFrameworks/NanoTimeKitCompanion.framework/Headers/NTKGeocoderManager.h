/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLGeocoder, CLInUseAssertion, CLLocation, CLPlacemark, NSMutableArray;

@interface NTKGeocoderManager : NSObject

{
    CLGeocoder *_geocoder;
    CLLocation *_cachedLocation;
    CLPlacemark *_cachedPlacemark;
    CLInUseAssertion *_locationInUseAssertion;
    NSMutableArray *_handlers;
}

+ (id)sharedManager;

- (id)init;
- (id)cachedPlacemarkForLocation:(id)arg1;
- (void)_handlePlacemarks:(id)arg1 fromLocation:(id)arg2 error:(id)arg3;
- (void)placemarkForLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
