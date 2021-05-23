/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class WDDocument, WDTablePropertiesValues;

__attribute__((visibility("hidden")))
@interface WDTableProperties : NSObject <Swift>

{
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    WDTablePropertiesValues *mOriginalProperties;
    WDTablePropertiesValues *mTrackedProperties;
    WDDocument *mDocument;
}

@property (weak, readonly) WDDocument *document;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)alignment;
- (void)setAlignment:(int)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (int)deleted;
- (short)cellSpacing;
- (id)initWithDocument:(id)arg1;
- (id)rightBorder;
- (int)edited;
- (void)setEdited:(int)arg1;
- (void)setDeleted:(int)arg1;
- (short)indent;
- (void)setCellSpacing:(short)arg1;
- (unsigned short)look;
- (void)setIndent:(short)arg1;
- (id)baseStyle;
- (void)setBaseStyle:(id)arg1;
- (void)setDeletionDate:(id)arg1;
- (id)deletionDate;
- (id)topBorder;
- (id)bottomBorder;
- (_Bool)isDeletedOverridden;
- (_Bool)isBaseStyleOverridden;
- (_Bool)isHorizontalAnchorOverridden;
- (int)horizontalAnchor;
- (_Bool)isVerticalAnchorOverridden;
- (int)verticalAnchor;
- (_Bool)isHorizontalPositionOverridden;
- (long long)horizontalPosition;
- (_Bool)isVerticalPositionOverridden;
- (long long)verticalPosition;
- (_Bool)isJustificationOverridden;
- (int)justification;
- (_Bool)isShadingOverridden;
- (id)shading;
- (_Bool)isBottomBorderOverridden;
- (_Bool)isWidthOverridden;
- (_Bool)isTopBorderOverridden;
- (_Bool)isLeftBorderOverridden;
- (_Bool)isRightBorderOverridden;
- (id)leftBorder;
- (_Bool)isLeftDistanceFromTextOverridden;
- (long long)leftDistanceFromText;
- (_Bool)isInsideHorizontalBorderOverridden;
- (id)insideHorizontalBorder;
- (_Bool)isInsideVerticalBorderOverridden;
- (id)insideVerticalBorder;
- (_Bool)isIndentOverridden;
- (_Bool)isAlignmentOverridden;
- (void)setResolveMode:(int)arg1;
- (id)mutableTopBorder;
- (id)mutableLeftBorder;
- (id)mutableBottomBorder;
- (id)mutableRightBorder;
- (int)resolveMode;
- (void)setFormattingChanged:(int)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setFormattingChangeDate:(id)arg1;
- (_Bool)isFormattingChangedOverridden;
- (int)formattingChanged;
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (_Bool)isFormattingChangeDateOverridden;
- (id)formattingChangeDate;
- (_Bool)isTableFloating;
- (void)clearShading;
- (id)mutableShading;
- (id)mutableInsideHorizontalBorder;
- (id)mutableInsideVerticalBorder;
- (void)setJustification:(int)arg1;
- (void)setWidthType:(int)arg1;
- (void)setIndentType:(int)arg1;
- (void)setVerticalAnchor:(int)arg1;
- (void)setHorizontalAnchor:(int)arg1;
- (void)setVerticalPosition:(long long)arg1;
- (void)setHorizontalPosition:(long long)arg1;
- (void)setLeftDistanceFromText:(long long)arg1;
- (void)setTopDistanceFromText:(long long)arg1;
- (void)setRightDistanceFromText:(long long)arg1;
- (void)setBottomDistanceFromText:(long long)arg1;
- (void)setBiDirectional:(_Bool)arg1;
- (unsigned short)indexToAuthorIDOfDeletion;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (unsigned short)indexToAuthorIDOfEdit;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (id)editDate;
- (void)setEditDate:(id)arg1;
- (_Bool)isEditedOverridden;
- (_Bool)isIndexToAuthorIDOfDeletionOverridden;
- (_Bool)isIndexToAuthorIDOfEditOverridden;
- (_Bool)isDeletionDateOverridden;
- (_Bool)isEditDateOverridden;
- (int)widthType;
- (_Bool)isWidthTypeOverridden;
- (void)setLook:(unsigned short)arg1;
- (int)indentType;
- (int)cellSpacingType;
- (void)setCellSpacingType:(int)arg1;
- (long long)topDistanceFromText;
- (long long)rightDistanceFromText;
- (long long)bottomDistanceFromText;
- (_Bool)biDirectional;
- (_Bool)isLookOverridden;
- (void)clearTopBorder;
- (void)clearLeftBorder;
- (void)clearBottomBorder;
- (void)clearRightBorder;
- (void)clearInsideHorizontalBorder;
- (void)clearInsideVerticalBorder;
- (_Bool)isIndentTypeOverridden;
- (_Bool)isCellSpacingOverridden;
- (_Bool)isCellSpacingTypeOverridden;
- (_Bool)isTopDistanceFromTextOverridden;
- (_Bool)isRightDistanceFromTextOverridden;
- (_Bool)isBottomDistanceFromTextOverridden;
- (_Bool)isBiDirectionalOverridden;
- (void)moveOrignalToTracked;

@end
