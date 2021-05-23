/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSSQLOrderIntermediate : NSSQLIntermediate

{
    NSArray *_sortDescriptors;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithSortDescriptors:(id)arg1 inScope:(id)arg2;
- (id)_generateSQLForOrderedManyToManyInverse:(id)arg1 inContext:(id)arg2;
- (id)_generateSQLForOrderedToManyInverse:(id)arg1 inContext:(id)arg2;

@end
