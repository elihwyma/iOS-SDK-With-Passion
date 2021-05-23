/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class CLSBusinessCacheEntry, NSNumber, NSString;

@interface CLSManagedBusinessItem : NSManagedObject

@property (retain, nonatomic) NSNumber *venueCapacityAsNumber;
@property (nonatomic) unsigned long long muid;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (nonatomic) unsigned int categories;
@property (nonatomic) long long venueCapacity;
@property (retain, nonatomic) NSString *businessCategories;
@property (retain, nonatomic) CLSBusinessCacheEntry *entry;
@property (retain, nonatomic) NSString *geoServiceProvider;
@property (retain, nonatomic) NSString *isoCountryCode;

+ (id)entityName;

@end
