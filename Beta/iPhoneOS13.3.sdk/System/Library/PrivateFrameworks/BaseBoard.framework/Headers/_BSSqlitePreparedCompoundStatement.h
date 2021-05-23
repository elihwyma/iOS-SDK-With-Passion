/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <BaseBoard/BSSqlitePreparedStatement.h>

@class NSArray;

@interface _BSSqlitePreparedCompoundStatement : BSSqlitePreparedStatement

{
    NSArray *_statements;
}

- (id)initWithDatabaseConnection:(id)arg1 statements:(id)arg2;
- (_Bool)executeWithBindings:(id)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(out id *)arg3;

@end
