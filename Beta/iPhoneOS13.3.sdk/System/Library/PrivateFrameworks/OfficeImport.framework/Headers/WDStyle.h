/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString, WDCharacterProperties, WDParagraphProperties, WDStyleSheet, WDTableCellProperties, WDTableRowProperties, WDTableStyleOverride;

__attribute__((visibility("hidden")))
@interface WDStyle : NSObject <Swift>

{
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellProperties;
    WDTableStyleOverride *mTableStyleOverrides[12];
    _Bool mHidden;
    NSString *mName;
    NSString *mId;
    int mStyleType;
    WDStyleSheet *mStyleSheet;
    WDStyle *mBaseStyle;
    WDStyle *mNextStyle;
}

@property (weak, readonly) WDStyleSheet *styleSheet;
@property (weak) WDStyle *baseStyle;
@property (weak) WDStyle *nextStyle;

- (id)description;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)type;
- (void)setName:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (_Bool)hidden;
- (id)id;
- (id)paragraphProperties;
- (id)characterProperties;
- (id)tableCellProperties;
- (id)tableProperties;
- (_Bool)isAnythingOverridden;
- (id)initWithStyleSheet:(id)arg1 id:(id)arg2 type:(int)arg3;
- (id)tableRowProperties;
- (id)tableStyleOverrideForPart:(int)arg1;

@end
