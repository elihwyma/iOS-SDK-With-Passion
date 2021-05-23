/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class NSSet;

@interface CLSBusinessCacheEntry : NSManagedObject

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (nonatomic) double updateTimestamp;
@property (retain, nonatomic) NSSet *businessItems;

+ (id)entityName;

@end
