/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class WDCharacterProperties, WDDocument, WDParagraphProperties, WDStyle, WDTableCellProperties, WDTableRowProperties;

__attribute__((visibility("hidden")))
@interface WDTableStyleOverride : NSObject <Swift>

{
    WDDocument *mDocument;
    int mPart;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellStyleProperties;
    unsigned int mParagraphPropertiesOverridden:1;
    unsigned int mCharacterPropertiesOverridden:1;
    unsigned int mTableRowPropertiesOverridden:1;
    unsigned int mTableCellStylePropertiesOverridden:1;
    WDStyle *mStyle;
}

@property (weak) WDStyle *style;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDocument:(id)arg1;
- (int)part;
- (void)setPart:(int)arg1;
- (id)paragraphProperties;
- (id)characterProperties;
- (_Bool)isCharacterPropertiesOverridden;
- (id)tableProperties;
- (id)mutableCharacterProperties;
- (id)tableRowProperties;
- (id)mutableParagraphProperties;
- (_Bool)isParagraphPropertiesOverridden;
- (void)setParagraphPropertiesOverridden:(_Bool)arg1;
- (void)setCharacterPropertiesOverridden:(_Bool)arg1;
- (_Bool)isTablePropertiesOverridden;
- (id)mutableTableRowProperties;
- (_Bool)isTableRowPropertiesOverridden;
- (void)setTableRowPropertiesOverridden:(_Bool)arg1;
- (id)tableCellStyleProperties;
- (id)mutableTableCellStyleProperties;
- (_Bool)isTableCellStylePropertiesOverridden;
- (void)setTableCellStylePropertiesOverridden:(_Bool)arg1;

@end
