/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class WDBorder, WDShading;

__attribute__((visibility("hidden")))
@interface WDTableCellDescriptor : NSObject

{
    WDShading *mShading;
    WDBorder *mTopBorder;
    WDBorder *mLeftBorder;
    WDBorder *mBottomBorder;
    WDBorder *mRightBorder;
    WDBorder *mDiagonalUpBorder;
    WDBorder *mDiagonalDownBorder;
    short mWidth;
    int mWidthType;
    short mTopMargin;
    int mTopMarginType;
    short mBottomMargin;
    int mBottomMarginType;
    short mLeftMargin;
    int mLeftMarginType;
    short mRightMargin;
    int mRightMarginType;
    int mVerticalAlignment;
    unsigned int mShadingOverridden:1;
    unsigned int mTopBorderOverridden:1;
    unsigned int mLeftBorderOverridden:1;
    unsigned int mBottomBorderOverridden:1;
    unsigned int mRightBorderOverridden:1;
    unsigned int mDiagonalUpBorderOverridden:1;
    unsigned int mDiagonalDownBorderOverridden:1;
    unsigned int mWidthTypeOverridden:1;
    unsigned int mTopMarginOverridden:1;
    unsigned int mTopMarginTypeOverridden:1;
    unsigned int mBottomMarginOverridden:1;
    unsigned int mBottomMarginTypeOverridden:1;
    unsigned int mLeftMarginOverridden:1;
    unsigned int mLeftMarginTypeOverridden:1;
    unsigned int mRightMarginOverridden:1;
    unsigned int mRightMarginTypeOverridden:1;
    unsigned int mVerticalAlignmentOverridden:1;
    unsigned int mVerticallyMergedCell:1;
    unsigned int mVerticallyMergedCellOverridden:1;
    unsigned int mFirstInSetOfVerticallyMergedCells:1;
    unsigned int mFirstInSetOfVerticallyMergedCellsOverridden:1;
    unsigned int mNoWrap:1;
    unsigned int mNoWrapOverridden:1;
}

- (void)setWidth:(short)arg1;
- (int)verticalAlignment;
- (void)setVerticalAlignment:(int)arg1;
- (void)setLeftMargin:(short)arg1;
- (void)setRightMargin:(short)arg1;
- (void)setTopMargin:(short)arg1;
- (void)setBottomMargin:(short)arg1;
- (short)topMargin;
- (short)rightMargin;
- (void)setRightBorder:(id)arg1;
- (id)rightBorder;
- (_Bool)noWrap;
- (void)setNoWrap:(_Bool)arg1;
- (short)bottomMargin;
- (short)leftMargin;
- (id)topBorder;
- (id)bottomBorder;
- (void)setTopBorder:(id)arg1;
- (void)setBottomBorder:(id)arg1;
- (_Bool)isLeftMarginOverridden;
- (_Bool)isRightMarginOverridden;
- (_Bool)isTopMarginOverridden;
- (_Bool)isBottomMarginOverridden;
- (_Bool)isShadingOverridden;
- (id)shading;
- (_Bool)isBottomBorderOverridden;
- (_Bool)isTopBorderOverridden;
- (_Bool)isLeftBorderOverridden;
- (_Bool)isRightBorderOverridden;
- (id)leftBorder;
- (_Bool)isVerticalAlignmentOverridden;
- (void)setLeftBorder:(id)arg1;
- (_Bool)isDiagonalUpBorderOverridden;
- (id)diagonalUpBorder;
- (_Bool)isDiagonalDownBorderOverridden;
- (id)diagonalDownBorder;
- (void)setWidthType:(int)arg1;
- (void)setShading:(id)arg1;
- (void)setShadingOverridden:(_Bool)arg1;
- (void)setTopBorderOverridden:(_Bool)arg1;
- (void)setLeftBorderOverridden:(_Bool)arg1;
- (void)setBottomBorderOverridden:(_Bool)arg1;
- (void)setRightBorderOverridden:(_Bool)arg1;
- (void)setDiagonalUpBorder:(id)arg1;
- (void)setDiagonalUpBorderOverridden:(_Bool)arg1;
- (void)setDiagonalDownBorder:(id)arg1;
- (void)setDiagonalDownBorderOverridden:(_Bool)arg1;
- (int)widthType;
- (_Bool)isWidthTypeOverridden;
- (void)setWidthTypeOverridden:(_Bool)arg1;
- (void)setTopMarginOverridden:(_Bool)arg1;
- (int)topMarginType;
- (void)setTopMarginType:(int)arg1;
- (_Bool)isTopMarginTypeOverridden;
- (void)setTopMarginTypeOverridden:(_Bool)arg1;
- (void)setBottomMarginOverridden:(_Bool)arg1;
- (int)bottomMarginType;
- (void)setBottomMarginType:(int)arg1;
- (_Bool)isBottomMarginTypeOverridden;
- (void)setBottomMarginTypeOverridden:(_Bool)arg1;
- (void)setLeftMarginOverridden:(_Bool)arg1;
- (int)leftMarginType;
- (void)setLeftMarginType:(int)arg1;
- (_Bool)isLeftMarginTypeOverridden;
- (void)setLeftMarginTypeOverridden:(_Bool)arg1;
- (void)setRightMarginOverridden:(_Bool)arg1;
- (int)rightMarginType;
- (void)setRightMarginType:(int)arg1;
- (_Bool)isRightMarginTypeOverridden;
- (void)setRightMarginTypeOverridden:(_Bool)arg1;
- (void)setVerticalAlignmentOverridden:(_Bool)arg1;
- (_Bool)verticallyMergedCell;
- (void)setVerticallyMergedCell:(_Bool)arg1;
- (_Bool)isVerticallyMergedCellOverridden;
- (void)setVerticallyMergedCellOverridden:(_Bool)arg1;
- (_Bool)firstInSetOfVerticallyMergedCells;
- (void)setFirstInSetOfVerticallyMergedCells:(_Bool)arg1;
- (_Bool)isFirstInSetOfVerticallyMergedCellsOverridden;
- (void)setFirstInSetOfVerticallyMergedCellsOverridden:(_Bool)arg1;
- (_Bool)isNoWrapOverridden;
- (void)setNoWrapOverridden:(_Bool)arg1;

@end
