/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIShelfLayoutData : NSObject

{
    double _columnSpacing;
    NSMutableArray *_columnWidths;
    struct UIEdgeInsets _contentInset;
    long long _numberOfRows;
    double *_rowHeights;
}

@property (nonatomic, readonly) double columnSpacing;
@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) struct CGSize totalContentSize;
@property (nonatomic, readonly) long long numberOfColumns;

- (void)dealloc;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)enumerateColumnsUsingBlock:(CDUnknownBlockType)arg1;
- (double)columnWidthForIndex:(long long)arg1;
- (double)rowHeightForIndex:(long long)arg1;
- (id)initWithNumberOfRows:(long long)arg1 columnSpacing:(double)arg2;
- (void)reloadWithItemCount:(long long)arg1 sizeBlock:(CDUnknownBlockType)arg2;

@end
