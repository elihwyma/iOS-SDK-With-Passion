/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLSelectIntermediate.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate

{
    _Bool _onlyFetchesAggregates;
    NSMutableDictionary *_variableToAliasMappings;
    NSMutableDictionary *_propertyToAliasMappings;
}

- (void)dealloc;
- (id)initWithScope:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (_Bool)onlyFetchesAggregates;
- (id)resolveVariableExpression:(id)arg1 inContext:(id)arg2;

@end
