/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class NSData;

@interface CLSContactCacheInfo : NSManagedObject

@property (nonatomic) NSData *lastHistoryToken;

+ (id)entityName;

@end
