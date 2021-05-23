/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SXDataRecordValueTransformerFactory, SXDataTableDictionary;

@protocol SXDOMObjectProviding, SXDataTableComponentControllerDataSource, SXDataTableStyleFactory, SXDataTableTextSourceFactory;

@interface SXDataTableComponentController : NSObject

{
    SXDataTableDictionary *_cellObjects;
    SXDataTableDictionary *_textLayouters;
    id <SXDataTableComponentControllerDataSource> _dataSource;
    id <SXDataTableStyleFactory> _styleFactory;
    id <SXDataTableTextSourceFactory> _textSourceFactory;
    NSArray *_records;
    SXDataRecordValueTransformerFactory *_recordValueTransformerFactory;
    id <SXDOMObjectProviding> _DOMObjectProvider;
}

@property (nonatomic, readonly) id <SXDataTableStyleFactory> styleFactory;
@property (nonatomic, readonly) id <SXDataTableTextSourceFactory> textSourceFactory;
@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) SXDataRecordValueTransformerFactory *recordValueTransformerFactory;
@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) SXDataTableDictionary *cellObjects;
@property (nonatomic, readonly) SXDataTableDictionary *textLayouters;
@property (weak, nonatomic, readonly) id <SXDataTableComponentControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (id)component;
- (void)loadRecords;
- (id)textStyleForIdentifier:(id)arg1;
- (id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(_Bool)arg2;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)additionsForTextSource:(id)arg1;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)defaultComponentTextStyleForTextSource:(id)arg1;
- (id)defaultComponentTextStylesForTextSource:(id)arg1;
- (id)linkStyleForTextSource:(id)arg1;
- (unsigned long long)dataOrientation;
- (id)initWithStyleFactory:(id)arg1 textSourceFactory:(id)arg2 dataSource:(id)arg3 recordValueTransformerFactory:(id)arg4 DOMObjectProvider:(id)arg5;
- (void)prepareForLayout;
- (id)rowStyleForRowIndex:(unsigned long long)arg1;
- (id)columnStyleForColumnIndex:(unsigned long long)arg1;
- (id)cellStyleForIndexPath:(CDStruct_2fea82da)arg1;
- (_Bool)indexPathIsHeader:(CDStruct_2fea82da)arg1;
- (id)dataDescriptorForIdentifier:(id)arg1;
- (_Bool)hasRowHeader;
- (_Bool)hasColumnHeader;
- (id)dataDescriptorForIndexPath:(CDStruct_2fea82da)arg1;
- (CDStruct_2fea82da)indexPathSubstractingHeaders:(CDStruct_2fea82da)arg1;
- (id)recordForIndexPath:(CDStruct_2fea82da)arg1;
- (id)cellObjectForIndexPath:(CDStruct_2fea82da)arg1;
- (double)convertConvertibleValue:(struct _SXConvertibleValue)arg1;
- (id)textLayouterForIndexPath:(CDStruct_2fea82da)arg1;
- (double)minimumWidthForStorage:(id)arg1 usingStringEnumeration:(unsigned long long)arg2;
- (_Bool)shouldTreatIndexPathAsHeader:(CDStruct_2fea82da)arg1;
- (id)tableBorder;
- (id)backgroundColorForRowAtIndex:(unsigned long long)arg1;
- (id)backgroundColorForColumnAtIndex:(unsigned long long)arg1;
- (id)backgroundColorForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (double)widthForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (double)heightForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (double)minimumWidthForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (double)heightForCellndexPath:(CDStruct_2fea82da)arg1 forWidth:(double)arg2;
- (id)cellBorderForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (CDStruct_d2b197d1)paddingForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (unsigned long long)verticalAlignmentForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (unsigned long long)horizontalAlignmentForCellAtIndexPath:(CDStruct_2fea82da)arg1;
- (id)rowDividerAtIndex:(unsigned long long)arg1;
- (id)columnDividerAtIndex:(unsigned long long)arg1;

@end
