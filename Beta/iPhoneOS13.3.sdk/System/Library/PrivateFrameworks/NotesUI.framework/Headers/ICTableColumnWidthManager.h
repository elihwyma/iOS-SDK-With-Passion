/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICTable, ICTextController, NSMutableDictionary;

@protocol ICAvailableTableWidthProviding;

@interface ICTableColumnWidthManager : NSObject

{
    ICTable *_table;
    NSObject<ICAvailableTableWidthProviding> *_delegate;
    ICTextController *_styler;
    NSMutableDictionary *_cachedIdealColumnWidths;
    NSMutableDictionary *_cachedActualColumnWidths;
    NSMutableDictionary *_cachedMinimumColumnWidths;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedIdealColumnWidths;
@property (nonatomic, readonly) NSMutableDictionary *cachedActualColumnWidths;
@property (nonatomic, readonly) NSMutableDictionary *cachedMinimumColumnWidths;
@property (weak, nonatomic, readonly) ICTable *table;
@property (weak, nonatomic, readonly) NSObject<ICAvailableTableWidthProviding> *delegate;
@property (nonatomic, readonly) ICTextController *styler;
@property (nonatomic, readonly) double singleColumnTableWidth;

- (double)comfortableColumnWidth;
- (double)calculateIdealWidthOfColumn:(id)arg1;
- (double)comfortableNumberOfColumnsOnscreen;
- (id)recalculateActualWidths;
- (id)initWithTable:(id)arg1 delegate:(id)arg2;
- (double)widthOfColumn:(id)arg1;
- (id)invalidateWidthForColumns:(id)arg1;
- (id)invalidateAvailableWidth;

@end
