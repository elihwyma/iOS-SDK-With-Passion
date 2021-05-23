/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class CLSEIVenue, NSDate, NSSet, NSString, NSTimeZone;

@interface CLSEIEvent : NSManagedObject

@property (nonatomic) long long uuid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic) long long timeZoneOffset;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) CLSEIVenue *venue;
@property (copy, nonatomic) NSSet *artists;
@property (copy, nonatomic) NSSet *categories;

@end
