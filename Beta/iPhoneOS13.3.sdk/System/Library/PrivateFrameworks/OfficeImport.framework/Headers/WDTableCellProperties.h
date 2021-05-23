/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableCellProperties : NSObject

{
    short mWidth;
    short mPosition;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_dbdf0818 mOriginalProperties;
    CDStruct_dbdf0818 mTrackedProperties;
    WDDocument *mDocument;
}

@property (weak, readonly) WDDocument *document;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (short)position;
- (id).cxx_construct;
- (short)width;
- (void)setWidth:(short)arg1;
- (int)deleted;
- (void)setPosition:(short)arg1;
- (void)addProperties:(id)arg1;
- (int)verticalAlignment;
- (void)setVerticalAlignment:(int)arg1;
- (void)setLeftMargin:(short)arg1;
- (void)setRightMargin:(short)arg1;
- (void)setTopMargin:(short)arg1;
- (void)setBottomMargin:(short)arg1;
- (short)topMargin;
- (id)initWithDocument:(id)arg1;
- (short)rightMargin;
- (id)rightBorder;
- (int)edited;
- (void)setEdited:(int)arg1;
- (void)setDeleted:(int)arg1;
- (_Bool)noWrap;
- (void)setNoWrap:(_Bool)arg1;
- (int)textDirection;
- (short)bottomMargin;
- (short)leftMargin;
- (void)setDeletionDate:(id)arg1;
- (id)deletionDate;
- (id)topBorder;
- (id)bottomBorder;
- (_Bool)isLeftMarginOverridden;
- (_Bool)isRightMarginOverridden;
- (_Bool)isTopMarginOverridden;
- (_Bool)isBottomMarginOverridden;
- (_Bool)isDeletedOverridden;
- (_Bool)isShadingOverridden;
- (id)shading;
- (_Bool)isBottomBorderOverridden;
- (_Bool)isTopBorderOverridden;
- (_Bool)isLeftBorderOverridden;
- (_Bool)isRightBorderOverridden;
- (id)leftBorder;
- (_Bool)isVerticalAlignmentOverridden;
- (_Bool)isInsideHorizontalBorderOverridden;
- (id)insideHorizontalBorder;
- (_Bool)isInsideVerticalBorderOverridden;
- (id)insideVerticalBorder;
- (void)setTextDirection:(int)arg1;
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
- (_Bool)isTextDirectionOverridden;
- (void)clearShading;
- (id)mutableShading;
- (id)mutableDiagonalUpBorder;
- (id)mutableDiagonalDownBorder;
- (id)mutableInsideHorizontalBorder;
- (id)mutableInsideVerticalBorder;
- (_Bool)isDiagonalUpBorderOverridden;
- (id)diagonalUpBorder;
- (_Bool)isDiagonalDownBorderOverridden;
- (id)diagonalDownBorder;
- (void)setWidthType:(int)arg1;
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
- (int)topMarginType;
- (void)setTopMarginType:(int)arg1;
- (_Bool)isTopMarginTypeOverridden;
- (int)bottomMarginType;
- (void)setBottomMarginType:(int)arg1;
- (_Bool)isBottomMarginTypeOverridden;
- (int)leftMarginType;
- (void)setLeftMarginType:(int)arg1;
- (_Bool)isLeftMarginTypeOverridden;
- (int)rightMarginType;
- (void)setRightMarginType:(int)arg1;
- (_Bool)isRightMarginTypeOverridden;
- (_Bool)verticallyMergedCell;
- (void)setVerticallyMergedCell:(_Bool)arg1;
- (_Bool)isVerticallyMergedCellOverridden;
- (_Bool)firstInSetOfVerticallyMergedCells;
- (void)setFirstInSetOfVerticallyMergedCells:(_Bool)arg1;
- (_Bool)isFirstInSetOfVerticallyMergedCellsOverridden;
- (_Bool)isNoWrapOverridden;
- (void)addPropertiesValues:(CDStruct_dbdf0818 *)arg1 to:(CDStruct_dbdf0818 *)arg2;
- (void)originalToTracked;

@end
