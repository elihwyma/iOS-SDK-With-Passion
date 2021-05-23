/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSDate;

@protocol GEOTransitDepartureFrequency <Swift>

@property (nonatomic, readonly) NSDate *firstTimeInFrequency;
@property (nonatomic, readonly) NSDate *lastTimeInFrequency;
@property (nonatomic, readonly) double frequencyForSorting;
@property (nonatomic, readonly) long long frequencyType;
@property (nonatomic, readonly) _Bool isEstimate;
@property (nonatomic, readonly) long long displayFrequency;
@property (nonatomic, readonly) long long minFrequency;
@property (nonatomic, readonly) long long maxFrequency;

- (unsigned short)isValidAtDate: /* Error: Ran out of types for this method. */;

@end
