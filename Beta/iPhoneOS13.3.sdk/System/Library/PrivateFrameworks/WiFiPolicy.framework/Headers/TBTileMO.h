/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString;

@interface TBTileMO : NSManagedObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long key;
@property (copy, nonatomic, readonly) NSDate *created;
@property (retain, nonatomic) NSString *etag;
@property (copy, nonatomic) NSDate *created;
@property (copy, nonatomic) NSString *etag;
@property (nonatomic) long long key;
@property (retain, nonatomic) NSSet *networks;

+ (id)fetchRequest;
+ (id)entityName;
+ (id)generateNewTileObjectFromMOC:(id)arg1;
+ (void)removeTilesUsingPredicate:(id)arg1 moc:(id)arg2;
+ (void)removeAllTilesInMOC:(id)arg1;

@end
