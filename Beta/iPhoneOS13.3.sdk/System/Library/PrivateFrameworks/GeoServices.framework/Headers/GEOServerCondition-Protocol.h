/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSDate;

@protocol GEOServerCondition <Swift>

@property (nonatomic, readonly) long long conditionType;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSArray *subconditions;

@end
