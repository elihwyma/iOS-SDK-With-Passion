/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class ML3DatabaseTable, NSArray;

@interface ML3DatabaseForeignKeyConstraint : NSObject

{
    ML3DatabaseTable *_foreignTable;
    NSArray *_localColumns;
    NSArray *_foreignColumns;
}

@property (nonatomic, readonly) ML3DatabaseTable *foreignTable;
@property (nonatomic, readonly) NSArray *localColumns;
@property (nonatomic, readonly) NSArray *foreignColumns;

- (id)initWithForeignTable:(id)arg1 localColumns:(id)arg2 foreignColumns:(id)arg3;
- (id)_foreignKeyClauseSQL;

@end
