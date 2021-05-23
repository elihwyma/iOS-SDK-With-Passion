/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSManagedObject;

@interface NSConstraintConflict : NSObject

{
    NSArray *_constraint;
    NSManagedObject *_databaseObject;
    NSDictionary *_databaseSnapshot;
    NSDictionary *_conflictedValues;
    NSArray *_conflictingObjects;
    NSArray *_conflictingSnapshots;
}

@property (copy, readonly) NSArray *constraint;
@property (copy, readonly) NSDictionary *constraintValues;
@property (retain, readonly) NSManagedObject *databaseObject;
@property (retain, readonly) NSDictionary *databaseSnapshot;
@property (copy, readonly) NSArray *conflictingObjects;
@property (copy, readonly) NSArray *conflictingSnapshots;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_doCleanupForXPCStore:(id)arg1 context:(id)arg2;
- (id)initWithConstraint:(id)arg1 databaseObject:(id)arg2 databaseSnapshot:(id)arg3 conflictingObjects:(id)arg4 conflictingSnapshots:(id)arg5;
- (_Bool)_isDBConflict;

@end
