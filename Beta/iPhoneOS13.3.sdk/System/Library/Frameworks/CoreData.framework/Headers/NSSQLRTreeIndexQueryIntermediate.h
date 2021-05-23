/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSArray, NSExpression, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLRTreeIndexQueryIntermediate : NSSQLIntermediate

{
    NSSQLEntity *_entity;
    NSExpression *_indexName;
    NSArray *_properties;
    NSArray *_ranges;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (_Bool)_validateCollection:(id)arg1 context:(id)arg2;
- (_Bool)_validateExpression:(id)arg1 context:(id)arg2;
- (id)initForIndexNamed:(id)arg1 onEntity:(id)arg2 properties:(id)arg3 ranges:(id)arg4 inScope:(id)arg5;

@end
