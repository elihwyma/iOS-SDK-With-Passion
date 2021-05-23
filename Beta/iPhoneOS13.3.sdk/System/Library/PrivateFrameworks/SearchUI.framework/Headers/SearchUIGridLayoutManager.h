/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, TLKGridLayoutManager;

@interface SearchUIGridLayoutManager : NSObject

{
    _Bool _isCompactTable;
    TLKGridLayoutManager *_gridManager;
    NSMapTable *_tableMapping;
}

@property (retain, nonatomic) NSMapTable *tableMapping;
@property (retain, nonatomic) TLKGridLayoutManager *gridManager;
@property (nonatomic) _Bool isCompactTable;

+ (id)alignmentsForSFHeaderRow:(id)arg1;
+ (id)richTextForRichDataItems:(id)arg1;
+ (id)richTextForDataItems:(id)arg1;
+ (_Bool)shouldHideViewForRichData:(id)arg1;

- (id)initWithHeaderSection:(id)arg1 dataSections:(id)arg2;
- (_Bool)computeCompactTableForSections:(id)arg1;
- (id)tableRowForTableRowCardSection:(id)arg1;

@end
