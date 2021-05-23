/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet;

@interface CLSManagedQueryLocation : NSManagedObject

@property (nonatomic) double updateTimestamp;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSSet *publicEvents;

+ (id)entityName;

@end
