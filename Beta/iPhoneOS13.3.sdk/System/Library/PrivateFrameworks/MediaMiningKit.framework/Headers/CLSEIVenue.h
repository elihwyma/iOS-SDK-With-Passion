/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface CLSEIVenue : NSManagedObject

@property (nonatomic) long long uuid;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSSet *events;

@end
