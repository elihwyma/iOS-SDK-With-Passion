/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface CLSEICategory : NSManagedObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *subCategories;
@property (retain, nonatomic) CLSEICategory *parentCategory;
@property (retain, nonatomic) NSSet *events;

@end
