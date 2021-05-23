/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString, NSTimeZone;

@interface CLSManagedPublicEvent : NSManagedObject

@property (retain, nonatomic) NSNumber *expectedAttendanceAsNumber;
@property (nonatomic) unsigned long long muid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *localStartDate;
@property (retain, nonatomic) NSDate *localEndDate;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic) long long timeZoneOffset;
@property (nonatomic) double localStartTime;
@property (nonatomic) double localEndTime;
@property (nonatomic) long long expectedAttendance;
@property (nonatomic) unsigned long long businessItemMuid;
@property (nonatomic) double businessItemLatitude;
@property (nonatomic) double businessItemLongitude;
@property (retain, nonatomic) NSSet *categories;
@property (retain, nonatomic) NSSet *queryLocations;
@property (retain, nonatomic) NSSet *performers;

+ (id)entityName;

@end
