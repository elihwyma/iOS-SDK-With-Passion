/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface CLSLocationCacheEntry : NSManagedObject

@property (nonatomic) unsigned long long muid;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double updateTimestamp;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *addressDictionaryString;
@property (copy, nonatomic) NSString *postalAddress;
@property (retain, nonatomic) NSSet *placemarks;

+ (id)entityName;

@end
