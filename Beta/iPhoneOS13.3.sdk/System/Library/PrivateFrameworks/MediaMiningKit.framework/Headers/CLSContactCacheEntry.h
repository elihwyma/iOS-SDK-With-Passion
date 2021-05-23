/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface CLSContactCacheEntry : NSManagedObject

@property (nonatomic) NSString *contactIdentifier;
@property (nonatomic) _Bool hasPicture;
@property (nonatomic) NSString *classifiedPersonLocalIdentifierWithFaceModelID;
@property (nonatomic) double updateTimestamp;

+ (id)entityName;

- (id)cachedContact;

@end
