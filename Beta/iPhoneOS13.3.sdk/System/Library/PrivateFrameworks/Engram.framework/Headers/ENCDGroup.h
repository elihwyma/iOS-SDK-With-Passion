/*
 Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

#import <NSManagedObject.h>

@class ENGroupID, ENStableGroupID, NSData;

@protocol ENCypher;

@interface ENCDGroup : NSManagedObject

@property (retain, nonatomic) id <ENCypher> cypher;
@property (retain, nonatomic) ENGroupID *groupID;
@property (retain, nonatomic) ENStableGroupID *stableGroupID;
@property (nonatomic) long long groupIDGeneration;
@property (retain, nonatomic) NSData *sharedApplicationData;

+ (id)fetchRequest;
+ (id)groupFromGroup:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
+ (id)predicateForGroupID:(id)arg1;
+ (id)predicateForStableGroupID:(id)arg1;
+ (id)insertIntoManagedObjectContext:(id)arg1;
+ (id)predicateForGroupIDs:(id)arg1;

@end
