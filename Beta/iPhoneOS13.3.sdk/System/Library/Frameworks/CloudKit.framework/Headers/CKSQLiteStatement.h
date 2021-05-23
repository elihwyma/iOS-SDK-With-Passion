/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKSQLite, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKSQLiteStatement : NSObject

{
    _Bool _reset;
    CKSQLite *_SQLite;
    NSString *_SQL;
    struct sqlite3_stmt *_handle;
    NSMutableArray *_temporaryBoundObjects;
}

@property (retain, nonatomic) NSMutableArray *temporaryBoundObjects;
@property (weak, nonatomic, readonly) CKSQLite *SQLite;
@property (nonatomic, readonly) NSString *SQL;
@property (nonatomic, readonly) struct sqlite3_stmt *handle;
@property (nonatomic, getter=isReset) _Bool reset;

- (id)objectAtIndex:(unsigned long long)arg1;
- (id)allObjects;
- (void)reset;
- (id)initWithSQLite:(id)arg1 SQL:(id)arg2 handle:(struct sqlite3_stmt *)arg3;
- (void)finalizeStatement;
- (void)resetAfterStepError;
- (_Bool)step;
- (void)bindInt:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2;
- (void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2;
- (void)bindBlob:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)bindText:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)bindNullAtIndex:(unsigned long long)arg1;
- (id)retainedTemporaryBoundObject:(id)arg1;
- (void)bindValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)bindValues:(id)arg1;
- (unsigned long long)columnCount;
- (int)columnTypeAtIndex:(unsigned long long)arg1;
- (id)columnNameAtIndex:(unsigned long long)arg1;
- (int)intAtIndex:(unsigned long long)arg1;
- (long long)int64AtIndex:(unsigned long long)arg1;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (id)blobAtIndex:(unsigned long long)arg1;
- (id)textAtIndex:(unsigned long long)arg1;
- (id)allObjectsByColumnName;

@end
