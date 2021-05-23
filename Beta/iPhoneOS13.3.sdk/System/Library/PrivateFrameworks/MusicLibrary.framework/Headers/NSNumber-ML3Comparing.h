/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSNumber.h>

@interface NSNumber (ML3Comparing)

- (id)ml_stringValueForSQL;
- (_Bool)ml_matchesValue:(id)arg1 usingComparison:(int)arg2;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt *)arg1 atPosition:(int)arg2;

@end
