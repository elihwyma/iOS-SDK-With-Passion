/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, WBSSQLiteDatabase;

@interface WBSSQLiteStatementCache : NSObject

{
    WBSSQLiteDatabase *_database;
    NSMutableDictionary *_statements;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDatabase:(id)arg1;
- (id)cachedStatementForQuery:(id)arg1;
- (id)_createStatementForQuery:(id)arg1 error:(id *)arg2;
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;
- (id)statementForQuery:(id)arg1 error:(id *)arg2;

@end
