/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSQLiteDatabase, NSString;

@interface HDSQLiteStatement : NSObject

{
    HDSQLiteDatabase *_database;
    NSString *_sql;
}

@property (nonatomic, readonly) HDSQLiteDatabase *database;

- (id)description;
- (void)finish;
- (id)initWithSQL:(id)arg1 database:(id)arg2;
- (_Bool)performStatementWithError:(id *)arg1 bindingHandler:(CDUnknownBlockType)arg2;
- (_Bool)enumerateStatementWithError:(id *)arg1 bindingHandler:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;

@end
