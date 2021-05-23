/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSString, NSTimeZone;

@protocol GEOServerFormatTokenTimeStampValue <Swift>

@property (nonatomic, readonly) double timeStamp;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSString *formatPattern;

@end
