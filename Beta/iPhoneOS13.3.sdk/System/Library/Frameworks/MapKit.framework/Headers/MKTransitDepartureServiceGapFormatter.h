/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSTimeZone;

__attribute__((visibility("hidden")))
@interface MKTransitDepartureServiceGapFormatter : NSObject

{
    NSDate *_departureCutoffDate;
    NSTimeZone *_timeZone;
}

@property (nonatomic, readonly) NSDate *departureCutoffDate;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (id)initWithTimeZone:(id)arg1 departureCutoffDate:(id)arg2;
- (id)lastDepartureUntilStringFromDate:(id)arg1;
- (id)lastDepartureString;
- (id)lastDepartureAtStringFromDate:(id)arg1;
- (id)_descriptionForDepartureDate:(id)arg1 canIncludeDate:(_Bool)arg2 outDateFormat:(out unsigned long long *)arg3;

@end
