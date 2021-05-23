/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXDataTableDictionary;

@interface SXDataTableBlueprint : NSObject

{
    unsigned long long _numberOfRows;
    unsigned long long _numberOfColumns;
    SXDataTableDictionary *_blueprint;
    SXDataTableDictionary *_contentBlueprint;
    SXDataTableDictionary *_rowDividers;
    SXDataTableDictionary *_columnDividers;
    unsigned long long _dataOrientation;
    struct CGSize _tableSize;
    struct UIEdgeInsets _tableInsets;
}

@property (nonatomic, readonly) SXDataTableDictionary *blueprint;
@property (nonatomic, readonly) SXDataTableDictionary *contentBlueprint;
@property (nonatomic, readonly) SXDataTableDictionary *rowDividers;
@property (nonatomic, readonly) SXDataTableDictionary *columnDividers;
@property (nonatomic) unsigned long long dataOrientation;
@property (nonatomic) struct CGSize tableSize;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) struct UIEdgeInsets tableInsets;

- (id)description;
- (id)initWithNumberOfRows:(unsigned long long)arg1 numberOfColumns:(unsigned long long)arg2 withTableInsets:(struct UIEdgeInsets)arg3;
- (void)addCellRect:(struct CGRect)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (void)addCellContentRect:(struct CGRect)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (void)addColumnDividerRect:(struct CGRect)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (void)addRowDividerRect:(struct CGRect)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (struct CGRect)rectForColumnAtIndex:(unsigned long long)arg1;
- (struct CGRect)cellRectForIndexPath:(CDStruct_2fea82da)arg1;
- (struct CGRect)rectForRowDividerAtIndexPath:(CDStruct_2fea82da)arg1;
- (struct CGRect)rectForColumnDividerAtIndexPath:(CDStruct_2fea82da)arg1;
- (struct CGRect)rectForRowAtIndex:(unsigned long long)arg1;
- (struct CGRect)cellContentRectForIndexPath:(CDStruct_2fea82da)arg1;
- (_Bool)isRectValid:(struct CGRect)arg1;

@end
