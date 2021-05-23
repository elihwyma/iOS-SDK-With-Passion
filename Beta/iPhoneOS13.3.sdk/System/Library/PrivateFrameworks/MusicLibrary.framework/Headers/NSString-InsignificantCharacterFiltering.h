/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSString.h>

@interface NSString (InsignificantCharacterFiltering)

- (struct _NSRange)_rangeWithoutInsignificantPrefix:(_Bool)arg1 andCharacters:(_Bool)arg2;
- (id)_copyWithoutInsignificantPrefix:(_Bool)arg1 andCharacters:(_Bool)arg2;
- (id)copyWithoutInsignificantPrefixAndCharacters;
- (id)copyWithoutInsignificantCharacters;
- (id)MLSortString;
- (id)MLSortStringWithPrefix;
- (id)sanitizedString;
- (id)ml_stringValueForSQL;
- (_Bool)ml_matchesValue:(id)arg1 usingComparison:(int)arg2;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt *)arg1 atPosition:(int)arg2;

@end
