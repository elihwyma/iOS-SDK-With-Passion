/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLExpressionIntermediate.h>

__attribute__((visibility("hidden")))
@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate

{
    _Bool _substitutePK;
}

@property (nonatomic) _Bool substitutePK;

- (id)generateSQLStringInContext:(id)arg1;
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;
- (id)_propertyDescriptionForKeypath:(id)arg1 startingAtEntity:(id)arg2 allowToMany:(_Bool)arg3 lastKeyVisited:(id *)arg4 inContext:(id)arg5;
- (id)_propertyDescriptionsForKeypath:(id)arg1 rootedAtEntity:(id)arg2 allowToMany:(_Bool)arg3 lastKeyVisited:(id *)arg4 inContext:(id)arg5;
- (id)_generateSQLForProperty:(id)arg1 startEntity:(id)arg2 startAlias:(id)arg3 keypath:(id)arg4 inContext:(id)arg5;

@end
