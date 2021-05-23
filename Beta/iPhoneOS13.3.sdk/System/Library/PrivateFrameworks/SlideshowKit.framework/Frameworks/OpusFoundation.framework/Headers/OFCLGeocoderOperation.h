/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <OpusFoundation/OFNSOperation.h>

@class CLGeocoder, CLLocation, NSArray;

@interface OFCLGeocoderOperation : OFNSOperation

{
    CLGeocoder *_geocoder;
    CLLocation *_location;
    double _accuracy;
    NSArray *_placemarks;
}

@property (retain) NSArray *placemarks;

+ (id)operationWithLocation:(id)arg1;
+ (double)recommendedAccuracy;
+ (id)operationWithLocation:(id)arg1 accuracy:(double)arg2;

- (void)dealloc;
- (void)cancelOperation;
- (unsigned long long)launchOperation;
- (void)finishOperation;
- (void)cleanupOperation;
- (id)initWithLocation:(id)arg1 accuracy:(double)arg2;

@end
