/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSSqliteDatabaseConnection;

@interface BSSqlitePreparedStatement : NSObject

{
    BSSqliteDatabaseConnection *_dbConnection;
}

+ (id)_newPreparedStatementForDatabaseConnection:(id)arg1 withSQLQuery:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)_initWithDatabaseConnection:(id)arg1;
- (_Bool)executeWithBindings:(id)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(out id *)arg3;

@end
