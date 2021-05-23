/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSAttributeDescription, NSExpression, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLBoundedByIntermediate : NSSQLIntermediate

{
    NSSQLEntity *_entity;
    NSAttributeDescription *_target;
    NSExpression *_bounds;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithWorkingEntity:(id)arg1 target:(id)arg2 bounds:(id)arg3 scope:(id)arg4;

@end
