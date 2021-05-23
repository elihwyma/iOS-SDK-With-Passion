/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSPredicate;

__attribute__((visibility("hidden")))
@interface NSSQLWhereIntermediate : NSSQLIntermediate

{
    NSPredicate *_predicate;
}

- (id)predicate;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;

@end
