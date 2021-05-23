/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PSIStatement : NSObject

{
    struct sqlite3_stmt *_stmt;
}

@property (readonly) struct sqlite3_stmt *stmt;

- (void)dealloc;
- (void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2;
- (void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2;
- (void)bindText:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithSQLite3Stmt:(struct sqlite3_stmt *)arg1;
- (void)finalizze;
- (id)textAtColumn:(unsigned long long)arg1;
- (double)doubleAtColumn:(unsigned long long)arg1;
- (long long)int64AtColumn:(unsigned long long)arg1;

@end
