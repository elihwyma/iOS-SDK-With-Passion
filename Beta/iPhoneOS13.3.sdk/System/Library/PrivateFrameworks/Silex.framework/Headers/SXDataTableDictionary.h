/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableIndexSet;

@interface SXDataTableDictionary : NSObject

{
    unsigned long long _numberOfRows;
    unsigned long long _numberOfColumns;
    NSMutableIndexSet *_indexes;
    NSMutableArray *_storage;
}

@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (retain, nonatomic) NSMutableIndexSet *indexes;
@property (retain, nonatomic) NSMutableArray *storage;

+ (id)dataTableDictionaryWithRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2;

- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (unsigned long long)indexForIndexPath:(CDStruct_2fea82da)arg1;
- (CDStruct_2fea82da)indexPathForIndex:(unsigned long long)arg1;
- (id)objectForIndexPath:(CDStruct_2fea82da)arg1;
- (void)setObject:(id)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (id)initWithRows:(unsigned long long)arg1 andColumns:(unsigned long long)arg2;
- (id)arrayWithObject:(id)arg1 forCount:(unsigned long long)arg2;
- (void)removeObjectForIndexPath:(CDStruct_2fea82da)arg1;
- (CDStruct_2fea82da)indexPathOfObject:(id)arg1;

@end
