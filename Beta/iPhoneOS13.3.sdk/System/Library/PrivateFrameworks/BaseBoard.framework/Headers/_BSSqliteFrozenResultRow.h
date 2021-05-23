/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <BaseBoard/BSSqliteResultRow.h>

@class NSArray;

@interface _BSSqliteFrozenResultRow : BSSqliteResultRow

{
    unsigned long long _count;
    NSArray *_frozenColumnNames;
    NSArray *_frozenObjects;
    NSArray *_frozenIntegers;
    NSArray *_frozenDoubles;
    NSArray *_frozenStrings;
    NSArray *_frozenDatas;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (_Bool)isValid;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexForKey:(id)arg1;
- (long long)integerAtIndex:(unsigned long long)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (id)initWithResultRow:(id)arg1;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1;

@end
