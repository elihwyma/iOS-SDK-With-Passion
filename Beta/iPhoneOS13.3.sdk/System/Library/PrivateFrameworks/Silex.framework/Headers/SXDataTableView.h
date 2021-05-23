/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXDataTableDrawView.h>

@class NSMutableDictionary, SXDataTableBlueprint;

@protocol SXDataTableDataSource, SXDataTableViewDataSource;

@interface SXDataTableView : SXDataTableDrawView

{
    id <SXDataTableViewDataSource> _viewDataSource;
    id <SXDataTableDataSource> _dataSource;
    SXDataTableBlueprint *_blueprint;
    NSMutableDictionary *_rowViews;
    NSMutableDictionary *_columnViews;
}

@property (retain, nonatomic) NSMutableDictionary *rowViews;
@property (retain, nonatomic) NSMutableDictionary *columnViews;
@property (weak, nonatomic, readonly) id <SXDataTableViewDataSource> viewDataSource;
@property (weak, nonatomic) id <SXDataTableDataSource> dataSource;
@property (retain, nonatomic) SXDataTableBlueprint *blueprint;

- (void)reset;
- (id)initWithDataSource:(id)arg1;
- (struct CGPoint)originOffset;
- (CDStruct_2fea82da)indexPathForPoint:(struct CGPoint)arg1;
- (void)layoutCellsForBlueprint:(id)arg1;
- (void)prepareDrawingForBlueprint:(id)arg1;
- (id)viewForRowAtIndex:(unsigned long long)arg1;
- (id)viewForColumnAtIndex:(unsigned long long)arg1;
- (void)draw:(CDUnknownBlockType)arg1 forIndexPath:(CDStruct_2fea82da)arg2;

@end
