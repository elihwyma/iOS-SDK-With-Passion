/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSDecimalNumber, NSString;

@protocol GEOTransitFare <Swift>

@property (nonatomic, readonly) NSDecimalNumber *value;
@property (copy, nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSArray *supportedICCardProviders;
@property (nonatomic, readonly) _Bool cashOnly;

@end
