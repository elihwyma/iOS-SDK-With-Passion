/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@interface EFSQLQueryGenerator : NSObject

+ (id)traverseKeypath:(id)arg1 keyPropertyMapper:(id)arg2 previousExpressionGenerator:(id)arg3;
+ (id)selectExpressionGeneratorForReturnObjectKeypath:(id)arg1 propertyMapper:(id)arg2;
+ (id)expressionGeneratorsForSortDescriptors:(id)arg1 propertyMapper:(id)arg2;
+ (id)compiledSQLQueryWithPredicateNodes:(id)arg1 selectGenerators:(id)arg2 orderByGenerators:(id)arg3 selectAll:(_Bool)arg4;
+ (id)getChildrenFromPropertyMapper:(id)arg1 previousTable:(id)arg2 previousExpressionGenerator:(id)arg3;
+ (id)sqlQueryForReturnObjectKeypaths:(id)arg1 query:(id)arg2 propertyMapper:(id)arg3;

@end
