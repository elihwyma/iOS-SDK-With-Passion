/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLGeocoderInternal, CLSilo;

@interface CLGeocoder : NSObject

{
    CLGeocoderInternal *_internal;
}

@property (setter=_setResponseSilo:) CLSilo *_responseSilo;
@property (nonatomic, readonly, getter=isGeocoding) _Bool geocoding;

+ (id)_timeZoneAtLocation:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)reverseGeocodeLocation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reverseGeocodeLocation:(id)arg1 preferredLocale:(id)arg2 heading:(double)arg3 localResultsOnly:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_notifyNoResult;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3;
- (void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2;
- (void)_ensureMainThreadExecutionContextForBlock:(CDUnknownBlockType)arg1;
- (void)geocodeAddressDictionary:(id)arg1 preferredLocale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_ticket:(id)arg1 didReturnError:(id)arg2;
- (void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 preferredLocale:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_notifyCancel;
- (void)_notifyResult:(id)arg1;
- (void)_notifyError:(id)arg1;
- (void)_notifyResult:(id)arg1 error:(id)arg2;
- (void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reverseGeocodeLocation:(id)arg1 preferredLocale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)geocodeAddressDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)geocodeAddressString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelGeocode;
- (void)_notifyPartialResult:(id)arg1;
- (void)geocodePostalAddress:(id)arg1 preferredLocale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)geocodePostalAddress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
