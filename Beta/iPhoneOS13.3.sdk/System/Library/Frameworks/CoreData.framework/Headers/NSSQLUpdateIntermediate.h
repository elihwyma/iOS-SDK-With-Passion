/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLUpdateColumnsIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate

{
    NSSQLUpdateColumnsIntermediate *_updateColumns;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (_Bool)isUpdateScoped;
- (void)setUpdateColumnsIntermediate:(id)arg1;
- (id)initWithEntity:(id)arg1 inScope:(id)arg2;
- (id)updateColumnsIntermediate;

@end
