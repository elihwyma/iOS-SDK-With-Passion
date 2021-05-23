/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLWhereIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLHavingIntermediate : NSSQLIntermediate

{
    NSSQLWhereIntermediate *_whereClause;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (_Bool)isHavingScoped;

@end
