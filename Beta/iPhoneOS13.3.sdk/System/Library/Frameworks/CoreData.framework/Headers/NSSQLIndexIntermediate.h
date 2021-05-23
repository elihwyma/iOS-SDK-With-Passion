/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLBinaryIndex;

__attribute__((visibility("hidden")))
@interface NSSQLIndexIntermediate : NSSQLIntermediate

{
    NSSQLBinaryIndex *_index;
    _Bool _isHandlingExpressions;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (_Bool)isIndexScoped;
- (id)initForIndex:(id)arg1 withScope:(id)arg2;
- (_Bool)isIndexExpressionScoped;
- (id)governingEntity;
- (id)_generateSQLForExpressionDescription:(id)arg1 inContext:(id)arg2;

@end
