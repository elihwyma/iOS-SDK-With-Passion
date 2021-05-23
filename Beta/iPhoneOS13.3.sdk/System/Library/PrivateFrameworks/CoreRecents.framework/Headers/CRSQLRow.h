/*
 Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

#import <Foundation/NSObject.h>

@interface CRSQLRow : NSObject

{
    struct sqlite3_stmt *_stmt;
}

+ (int)step:(struct sqlite3_stmt *)arg1;
+ (id)stringAtIndex:(int)arg1 statement:(struct sqlite3_stmt *)arg2;
+ (id)objectAtIndex:(int)arg1 statement:(struct sqlite3_stmt *)arg2;
+ (id)dataAtIndex:(int)arg1 copyBytes:(_Bool)arg2 statement:(struct sqlite3_stmt *)arg3;
+ (id)numberWithIntegerAtIndex:(int)arg1 statement:(struct sqlite3_stmt *)arg2;
+ (id)numberWithDoubleAtIndex:(int)arg1 statement:(struct sqlite3_stmt *)arg2;
+ (int)enumerateRowsInStatement:(struct sqlite3_stmt *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)rowWithStatement:(struct sqlite3_stmt *)arg1;

- (id)objectAtIndex:(int)arg1;
- (id)stringAtIndex:(int)arg1;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1;
- (id)dataAtIndex:(int)arg1 copyBytes:(_Bool)arg2;
- (id)numberWithIntegerAtIndex:(int)arg1;
- (id)numberWithDoubleAtIndex:(int)arg1;

@end
