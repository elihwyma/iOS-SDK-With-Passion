/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3DatabaseConnection, ML3DatabaseStatement, NSDictionary, NSString;

@interface ML3DatabaseResult : NSObject

{
    ML3DatabaseStatement *_statement;
    ML3DatabaseConnection *_connection;
    NSDictionary *_columnNameIndexMap;
    unsigned long long _limitIndex;
    NSString *_limitProperty;
    long long _limitValue;
}

@property (copy, nonatomic) NSString *limitProperty;
@property (nonatomic) long long limitValue;

- (id)init;
- (id)rows;
- (id)_statement;
- (long long)int64ValueForFirstRowAndColumn;
- (id)initWithStatement:(id)arg1 connection:(id)arg2;
- (_Bool)hasAtLeastOneRow;
- (void)enumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (id)objectsInColumn:(unsigned long long)arg1;
- (id)objectForFirstRowAndColumn;
- (id)stringValueForFirstRowAndColumn;
- (unsigned long long)indexForColumnName:(id)arg1;
- (id)columnNameIndexMap;
- (void)setLimitProperty:(id)arg1 limitValue:(long long)arg2;

@end
