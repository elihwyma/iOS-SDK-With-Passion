/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SXDataTableBlueprint;

@protocol SXDataTableDataSource;

@interface SXDataTableLayouter : NSObject

{
    id <SXDataTableDataSource> _dataSource;
    double _currentWidth;
    SXDataTableBlueprint *_blueprint;
    NSMutableDictionary *_minimumColumnWidths;
    NSMutableDictionary *_intendedColumnWidths;
}

@property (retain, nonatomic) SXDataTableBlueprint *blueprint;
@property (retain, nonatomic) NSMutableDictionary *minimumColumnWidths;
@property (retain, nonatomic) NSMutableDictionary *intendedColumnWidths;
@property (nonatomic, readonly) id <SXDataTableDataSource> dataSource;
@property (nonatomic, readonly) double currentWidth;

- (void)reset;
- (id)initWithDataSource:(id)arg1;
- (id)blueprintForWidth:(double)arg1;
- (id)layoutDataTableForWidth:(double)arg1;
- (double)totalColumnDividerWidth;
- (double)totalTableBorderWidth;
- (id)columnWidthsForWidth:(double)arg1 resultingTableWidth:(double *)arg2;
- (id)rowHeightsForColumnWidths:(id)arg1;
- (id)blueprintUsingRowHeights:(id)arg1 columnWidths:(id)arg2 andTableWidth:(double)arg3;
- (struct UIEdgeInsets)tableInsets;
- (double)minimumWidthForColumnAtIndex:(unsigned long long)arg1;
- (double)intendedPercentualWidthForColumnAtIndex:(unsigned long long)arg1;
- (double)totalTableBorderHeight;

@end
