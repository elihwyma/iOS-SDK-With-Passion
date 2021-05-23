/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol GEOServerFormatTokenCountdownValue <Swift>

@property (nonatomic, readonly) long long countdownType;
@property (nonatomic, readonly) NSArray *timestamps;
@property (nonatomic, readonly) NSDictionary *alternativeFormatStringsByType;
@property (nonatomic, readonly) NSString *separator;

@end
