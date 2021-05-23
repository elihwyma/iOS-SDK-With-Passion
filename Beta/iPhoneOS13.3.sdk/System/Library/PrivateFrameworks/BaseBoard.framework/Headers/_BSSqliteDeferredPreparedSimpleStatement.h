/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <BaseBoard/_BSSqlitePreparedSimpleStatement.h>

@class NSString;

@interface _BSSqliteDeferredPreparedSimpleStatement : _BSSqlitePreparedSimpleStatement

{
    NSString *_deferredSql;
}

- (id)initWithDatabaseConnection:(id)arg1 deferredSql:(id)arg2;
- (_Bool)executeWithBindings:(id)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(out id *)arg3;

@end
