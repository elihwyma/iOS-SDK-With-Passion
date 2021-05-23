/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface CLSEIArtist : NSManagedObject

@property (nonatomic) long long uuid;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *events;

@end
