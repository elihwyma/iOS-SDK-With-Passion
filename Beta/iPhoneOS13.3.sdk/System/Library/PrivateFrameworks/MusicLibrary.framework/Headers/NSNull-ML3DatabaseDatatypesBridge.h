/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSNull.h>

@interface NSNull (ML3DatabaseDatatypesBridge)

- (id)ml_stringValueForSQL;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt *)arg1 atPosition:(int)arg2;

@end
