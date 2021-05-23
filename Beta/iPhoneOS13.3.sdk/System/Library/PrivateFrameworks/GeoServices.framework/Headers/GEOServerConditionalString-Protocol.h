/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEOServerCondition, GEOServerFormattedString;

@protocol GEOServerConditionalString <Swift>

@property (nonatomic, readonly) id <GEOServerFormattedString> formattedString;
@property (nonatomic, readonly) id <GEOServerCondition> condition;

@end
