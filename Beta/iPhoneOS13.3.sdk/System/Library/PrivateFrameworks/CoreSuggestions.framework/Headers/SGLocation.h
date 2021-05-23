/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGObject.h>

@class NSData, NSString;

@interface SGLocation : SGObject

{
    unsigned long long _locationType;
    NSString *_label;
    NSString *_address;
    double _latitude;
    double _longitude;
    double _accuracy;
    double _quality;
    NSString *_airportCode;
    NSData *_handle;
}

@property (nonatomic, readonly) unsigned long long locationType;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly, getter=isGeocoded) _Bool geocoded;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) double quality;
@property (nonatomic, readonly) NSString *airportCode;
@property (nonatomic, readonly) NSData *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLocation:(id)arg1;
- (id)geocodeLabel;
- (id)geocodeAddress;
- (id)geocodeAirportCode;
- (_Bool)geocodeIsStart;
- (_Bool)geocodeIsEnd;
- (double)geocodeLatitude;
- (double)geocodeLongitude;
- (double)geocodeAccuracy;
- (id)geocodeHandle;
- (id)geocodedLocationWithLabel:(id)arg1 address:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(id)arg6;
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4;
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 airportCode:(id)arg6 accuracy:(double)arg7 quality:(double)arg8;
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 airportCode:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 accuracy:(double)arg8 quality:(double)arg9;
- (id)initWithLocation:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 handle:(id)arg5;
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 airportCode:(id)arg6 latitude:(double)arg7 longitude:(double)arg8 accuracy:(double)arg9 quality:(double)arg10 handle:(id)arg11;

@end
