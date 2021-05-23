/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

#import <ProactiveSupport/Swift-Protocol.h>

@class _PASSQLColumnMapping, _PASSqliteDatabase;

@interface _PASSqliteStatement : NSObject <Swift>

{
    _PASSqliteDatabase *_owner;
    _PASSQLColumnMapping *_columnMapping;
    struct sqlite3_stmt *_stmt;
}

@property (nonatomic, readonly) struct sqlite3_stmt *stmt;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (id)getNSStringForColumn:(int)arg1;
- (int)bindNamedParam:(const char *)arg1 toNSString:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toInteger:(long long)arg2;
- (int)bindNamedParamToNull:(const char *)arg1;
- (id)getNSDataForColumn:(int)arg1;
- (int)bindNamedParam:(const char *)arg1 toNSData:(id)arg2;
- (id)initWithStatementPointer:(struct sqlite3_stmt *)arg1 owner:(id)arg2;
- (void)prepareForRowDeserialization;
- (int)bindNamedParam:(const char *)arg1 toInt64:(long long)arg2;
- (int)bindNamedParam:(const char *)arg1 toInt64AsNSNumber:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toDouble:(double)arg2;
- (int)bindNamedParam:(const char *)arg1 toDoubleAsNSNumber:(id)arg2;
- (int)bindParamToNull:(int)arg1;
- (int)bindParam:(int)arg1 toNSString:(id)arg2;
- (int)bindParam:(int)arg1 toNSData:(id)arg2;
- (int)bindParam:(int)arg1 toInteger:(long long)arg2;
- (int)bindParam:(int)arg1 toInt64:(long long)arg2;
- (int)bindParam:(int)arg1 toInt64AsNSNumber:(id)arg2;
- (int)bindParam:(int)arg1 toDouble:(double)arg2;
- (int)bindParam:(int)arg1 toDoubleAsNSNumber:(id)arg2;
- (long long)getIntegerForColumn:(int)arg1;
- (long long)getInt64ForColumn:(int)arg1;
- (id)getInt64AsNSNumberForColumn:(int)arg1;
- (double)getDoubleForColumn:(int)arg1;
- (id)getDoubleAsNSNumberForColumn:(int)arg1;
- (id)getNSStringForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getNSDataForColumnName:(const char *)arg1 table:(const char *)arg2;
- (long long)getIntegerForColumnName:(const char *)arg1 table:(const char *)arg2;
- (long long)getInt64ForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getInt64AsNSNumberForColumnName:(const char *)arg1 table:(const char *)arg2;
- (double)getDoubleForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getDoubleAsNSNumberForColumnName:(const char *)arg1 table:(const char *)arg2;
- (_Bool)isNullForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getNSStringForColumnAlias:(const char *)arg1;
- (id)getNSDataForColumnAlias:(const char *)arg1;
- (long long)getIntegerForColumnAlias:(const char *)arg1;
- (long long)getInt64ForColumnAlias:(const char *)arg1;
- (id)getInt64AsNSNumberForColumnAlias:(const char *)arg1;
- (double)getDoubleForColumnAlias:(const char *)arg1;
- (id)getDoubleAsNSNumberForColumnAlias:(const char *)arg1;
- (_Bool)isNullForColumnAlias:(const char *)arg1;
- (_Bool)isColumnNull:(int)arg1;

@end
