/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, PHChangeRequestHelper;

@interface PHRelationshipChangeRequestHelper : NSObject

{
    _Bool _allowsInsert;
    _Bool _allowsMove;
    _Bool _allowsRemove;
    NSString *_relationshipName;
    NSString *_destinationEntityName;
    NSString *_destinationUUIDKeyPath;
    NSArray *_originalObjectIDs;
    NSMutableArray *_mutableObjectIDsAndUUIDs;
    CDUnknownBlockType _isDestinationObjectValid;
    PHChangeRequestHelper *_changeRequestHelper;
}

@property (nonatomic, readonly) NSString *relationshipName;
@property (retain, nonatomic) NSString *destinationEntityName;
@property (retain, nonatomic) NSString *destinationUUIDKeyPath;
@property (nonatomic) _Bool allowsInsert;
@property (nonatomic) _Bool allowsMove;
@property (nonatomic) _Bool allowsRemove;
@property (retain, nonatomic) NSArray *originalObjectIDs;
@property (retain, nonatomic) NSMutableArray *mutableObjectIDsAndUUIDs;
@property (copy, nonatomic) CDUnknownBlockType isDestinationObjectValid;
@property (retain, nonatomic) PHChangeRequestHelper *changeRequestHelper;

+ (id)_offsetsFromSourceOIDs:(id)arg1 toManagedObjects:(id)arg2;
+ (id)objectIDsOrUUIDsFromPHObjects:(id)arg1;
+ (id)existentObjectIDsUsingQuery:(id)arg1;

- (void)encodeToXPCDict:(id)arg1;
- (id)initWithRelationshipName:(id)arg1 changeRequestHelper:(id)arg2;
- (id)initWithRelationshipName:(id)arg1 xpcDict:(id)arg2 changeRequestHelper:(id)arg3;
- (void)prepareIfNeededWithExistentObjectIDs:(id)arg1;
- (_Bool)applyMutationsToManagedObject:(id)arg1 orderedMutableChildren:(id)arg2 error:(id *)arg3;
- (_Bool)applyMutationsToManagedObject:(id)arg1 unorderedMutableChildren:(id)arg2 error:(id *)arg3;
- (_Bool)applyMutationsToManagedObject:(id)arg1 unorderedMutableChildren:(id)arg2 inserts:(id *)arg3 deletes:(id *)arg4 error:(id *)arg5;
- (_Bool)applyMutationsToManagedObjectToOneRelationship:(id)arg1 error:(id *)arg2;

@end
