/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXDataRecordStore, SXDataTableSelectorValidator, SXDataTableStyle, SXJSONObjectMerger;

@interface SXDataTableComponentStyleFactory : NSObject

{
    SXDataRecordStore *_recordStore;
    SXDataTableStyle *_tableStyle;
    unsigned long long _dataOrientation;
    SXDataTableSelectorValidator *_selectorValidator;
    SXJSONObjectMerger *_rowStyleMerger;
    SXJSONObjectMerger *_columnStyleMerger;
    SXJSONObjectMerger *_cellStyleMerger;
}

@property (nonatomic, readonly) SXDataRecordStore *recordStore;
@property (nonatomic, readonly) SXDataTableStyle *tableStyle;
@property (nonatomic, readonly) unsigned long long dataOrientation;
@property (nonatomic, readonly) SXDataTableSelectorValidator *selectorValidator;
@property (nonatomic, readonly) SXJSONObjectMerger *rowStyleMerger;
@property (nonatomic, readonly) SXJSONObjectMerger *columnStyleMerger;
@property (nonatomic, readonly) SXJSONObjectMerger *cellStyleMerger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)descriptorForIdentifier:(id)arg1;
- (id)initWithRecordStore:(id)arg1 tableStyle:(id)arg2 dataOrientation:(unsigned long long)arg3 rowStyleMerger:(id)arg4 columnStyleMerger:(id)arg5 cellStyleMerger:(id)arg6;
- (id)rowStyleForRowIndex:(unsigned long long)arg1;
- (id)rowStyleForRowIndex:(unsigned long long)arg1 usingBaseStyle:(id)arg2;
- (id)columnStyleForColumnIndex:(unsigned long long)arg1;
- (id)columnStyleForColumnIndex:(unsigned long long)arg1 usingBaseStyle:(id)arg2;
- (id)cellStyleForIndexPath:(CDStruct_2fea82da)arg1;
- (id)cellStyleForIndexPath:(CDStruct_2fea82da)arg1 usingBaseStyle:(id)arg2;
- (id)styleByMergingStyleMatches:(id)arg1 forBaseStyle:(id)arg2 merger:(id)arg3;
- (id)filterDuplicateSequentialStyles:(id)arg1;
- (id)sortStylesMatchesBySelectorWeight:(id)arg1;
- (long long)compareSelector:(id)arg1 withOtherSelector:(id)arg2;
- (id)dataTableStyle;
- (id)headerRowStyleForRowIndex:(unsigned long long)arg1;
- (id)headerColumnStyleForColumnIndex:(unsigned long long)arg1;
- (id)headerCellStyleForIndexPath:(CDStruct_2fea82da)arg1;
- (unsigned long long)isOddNumber:(long long)arg1;
- (unsigned long long)isEvenNumber:(long long)arg1;

@end
