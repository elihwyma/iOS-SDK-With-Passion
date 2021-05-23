/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, NSURL;

@interface EFSQLConnection : NSObject

{
    NSHashTable *_preparedStatements;
    struct sqlite3 *_sqlDB;
    NSURL *_url;
}

@property (nonatomic, readonly) struct sqlite3 *sqlDB;
@property (nonatomic, readonly) _Bool isOpen;
@property (nonatomic, readonly) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (_Bool)setFileProtection:(id)arg1 forDatabaseAtURL:(id)arg2 error:(id *)arg3;
+ (_Bool)isSuccessResultCode:(int)arg1 forStep:(_Bool)arg2 error:(id *)arg3;

- (id)init;
- (id)initWithURL:(id)arg1;
- (void)close;
- (_Bool)openWithError:(id *)arg1;
- (void)flush;
- (id)initWithInMemoryDatabase;
- (_Bool)rollbackTransactionWithError:(id *)arg1;
- (_Bool)commitTransactionWithError:(id *)arg1;
- (id)preparedStatementForQueryString:(id)arg1;
- (_Bool)executeStatementString:(id)arg1 error:(id *)arg2;
- (_Bool)openWithFlags:(int)arg1 error:(id *)arg2;
- (_Bool)_isSuccessResultCode:(int)arg1 sqlDB:(struct sqlite3 *)arg2 error:(id *)arg3;
- (id)initWithSQLDB:(struct sqlite3 *)arg1;
- (_Bool)finalizeStatementsWithError:(id *)arg1;
- (_Bool)beginTransaction:(long long)arg1 error:(id *)arg2;
- (id)resultsForQueryString:(id)arg1;

@end
