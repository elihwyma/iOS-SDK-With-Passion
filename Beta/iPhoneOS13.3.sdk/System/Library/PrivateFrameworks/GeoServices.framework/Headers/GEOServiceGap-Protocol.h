/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSDate;

@protocol GEOServerFormattedString;

@protocol GEOServiceGap <Swift>

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long routeListInsertBeforeIndex;
@property (nonatomic, readonly) id <GEOServerFormattedString> displayMessagFormatString;

@end
