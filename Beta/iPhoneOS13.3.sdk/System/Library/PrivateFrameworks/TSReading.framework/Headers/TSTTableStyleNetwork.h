/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class TSTCellStyle, TSTTableStyle, TSWPParagraphStyle, TSWPShapeStyle;

@interface TSTTableStyleNetwork : TSPObject

{
    unsigned long long mPresetIndex;
    TSTTableStyle *mTableStyle;
    TSTCellStyle *mHeaderRowCellStyle;
    TSTCellStyle *mHeaderColumnCellStyle;
    TSTCellStyle *mFooterRowCellStyle;
    TSTCellStyle *mBodyCellStyle;
    TSWPParagraphStyle *mHeaderRowTextStyle;
    TSWPParagraphStyle *mHeaderColumnTextStyle;
    TSWPParagraphStyle *mFooterRowTextStyle;
    TSWPParagraphStyle *mBodyTextStyle;
    TSWPParagraphStyle *mTableNameStyle;
    TSWPShapeStyle *mTableNameShapeStyle;
}

@property (retain, nonatomic) TSTTableStyle *tableStyle;
@property (nonatomic, readonly) TSTCellStyle *bodyCellStyle;
@property (nonatomic, readonly) TSTCellStyle *headerColumnCellStyle;
@property (nonatomic, readonly) TSTCellStyle *footerRowCellStyle;
@property (nonatomic, readonly) TSTCellStyle *headerRowCellStyle;
@property (nonatomic, readonly) TSWPParagraphStyle *bodyTextStyle;
@property (nonatomic, readonly) TSWPParagraphStyle *headerColumnTextStyle;
@property (nonatomic, readonly) TSWPParagraphStyle *footerRowTextStyle;
@property (nonatomic, readonly) TSWPParagraphStyle *headerRowTextStyle;
@property (retain, nonatomic) TSWPParagraphStyle *tableNameStyle;
@property (retain, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property (nonatomic) unsigned long long presetIndex;

+ (id)tableNameStyleIDForPreset:(unsigned long long)arg1;
+ (id)defaultTableNameShapeStyleWithContext:(id)arg1;
+ (id)tableNameShapeStyleIDForPreset:(unsigned long long)arg1;
+ (id)networkFromStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)networkFromTableModel:(id)arg1;
+ (id)networkWithContext:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)createStylesInStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)networkFromTheme:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)identifiersForPresetIndex:(unsigned long long)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1;
- (_Bool)valid;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (void)setStylesFromTableModel:(id)arg1;
- (void)setCellStyle:(id)arg1 forTableArea:(unsigned int)arg2;
- (void)setTextStyle:(id)arg1 forTableArea:(unsigned int)arg2;
- (void)setBodyCellStyle:(id)arg1;
- (void)setHeaderColumnCellStyle:(id)arg1;
- (void)setFooterRowCellStyle:(id)arg1;
- (void)setHeaderRowCellStyle:(id)arg1;
- (void)setBodyTextStyle:(id)arg1;
- (void)setHeaderColumnTextStyle:(id)arg1;
- (void)setFooterRowTextStyle:(id)arg1;
- (void)setHeaderRowTextStyle:(id)arg1;
- (id)initWithContext:(id)arg1 fromArray:(id)arg2 presetIndex:(unsigned long long)arg3;
- (_Bool)stylesInStylesheet:(id)arg1;
- (id)cellStyleForTableArea:(unsigned int)arg1;
- (id)textStyleForTableArea:(unsigned int)arg1;
- (id)styleArray;
- (id)dictionaryWithPreset:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1 fromDictionary:(id)arg2 withPreset:(unsigned long long)arg3;

@end
