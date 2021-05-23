/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDPersistenceDatabaseConnection, NSMutableDictionary;

@interface _EDThreadPersistence_StatementCache : NSObject

{
    EDPersistenceDatabaseConnection *_connection;
    NSMutableDictionary *_preparedStatements;
}

@property (nonatomic, readonly) NSMutableDictionary *preparedStatements;
@property (nonatomic, readonly) EDPersistenceDatabaseConnection *connection;

- (id)initWithConnection:(id)arg1;
- (id)preparedStatementForQueryString:(id)arg1;

@end
