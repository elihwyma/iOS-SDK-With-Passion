/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMessagePersistence, _EDThreadPersistence_SQLHelper;

@protocol EFSQLExpressable;

@interface _EDThreadPersistence_ThreadScope : NSObject

{
    _Bool _didCreateTempScopeView;
    EDMessagePersistence *_messagePersistence;
    long long _threadScopeDatabaseID;
    id <EFSQLExpressable> _threadScopeExpression;
    _EDThreadPersistence_SQLHelper *_sqlHelper;
}

@property (nonatomic, readonly) id <EFSQLExpressable> threadScopeExpression;
@property (nonatomic, readonly) _EDThreadPersistence_SQLHelper *sqlHelper;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) long long threadScopeDatabaseID;

- (id)initWithCache:(id)arg1 messagePersistence:(id)arg2 threadScopeDatabaseID:(long long)arg3 threadScopeExpression:(id)arg4;
- (id)createMessagesWithThreadObjectID:(id)arg1 wrappedMessages:(id)arg2;
- (void)dropTemporaryView;
- (void)_ensureTempScopeView;

@end
