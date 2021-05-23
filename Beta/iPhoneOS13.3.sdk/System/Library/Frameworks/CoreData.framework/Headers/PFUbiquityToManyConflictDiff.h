/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityToManyConflictDiff : NSObject

{
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSString *_relationshipKey;
}

@property (nonatomic, readonly) NSMutableSet *insertedObjectIDs;
@property (nonatomic, readonly) NSMutableSet *deletedObjectIDs;
@property (nonatomic, readonly) NSString *relationshipKey;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initForRelationshipAtKey:(id)arg1;
- (void)diffWithLogSnapshot:(id)arg1 andPreviousSnapshot:(id)arg2;

@end
