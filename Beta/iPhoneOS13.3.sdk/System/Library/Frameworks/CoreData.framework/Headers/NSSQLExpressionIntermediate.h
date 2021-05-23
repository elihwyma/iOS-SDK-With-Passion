/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSExpression;

__attribute__((visibility("hidden")))
@interface NSSQLExpressionIntermediate : NSSQLIntermediate

{
    NSExpression *_expression;
    _Bool _allowToMany;
}

- (id)initWithExpression:(id)arg1 allowToMany:(_Bool)arg2 inScope:(id)arg3;

@end
