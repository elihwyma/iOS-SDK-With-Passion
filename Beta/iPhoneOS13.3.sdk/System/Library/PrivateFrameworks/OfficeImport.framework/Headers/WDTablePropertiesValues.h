/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDate, WDBorder, WDShading, WDStyle;

__attribute__((visibility("hidden")))
@interface WDTablePropertiesValues : NSObject

{
    unsigned int mBaseStyleOverridden:1;
    unsigned int mLookOverridden:1;
    unsigned int mShadingOverridden:1;
    unsigned int mTopBorderOverridden:1;
    unsigned int mLeftBorderOverridden:1;
    unsigned int mBottomBorderOverridden:1;
    unsigned int mRightBorderOverridden:1;
    unsigned int mInsideHorizontalBorderOverridden:1;
    unsigned int mInsideVerticalBorderOverridden:1;
    unsigned int mJustificationOverridden:1;
    unsigned int mAlignmentOverridden:1;
    unsigned int mWidthOverridden:1;
    unsigned int mWidthTypeOverridden:1;
    unsigned int mIndentOverridden:1;
    unsigned int mIndentTypeOverridden:1;
    unsigned int mCellSpacingOverridden:1;
    unsigned int mCellSpacingTypeOverridden:1;
    unsigned int mVerticalAnchorOverridden:1;
    unsigned int mHorizontalAnchorOverridden:1;
    unsigned int mVerticalPositionOverridden:1;
    unsigned int mHorizontalPositionOverridden:1;
    unsigned int mLeftDistanceFromTextOverridden:1;
    unsigned int mTopDistanceFromTextOverridden:1;
    unsigned int mRightDistanceFromTextOverridden:1;
    unsigned int mBottomDistanceFromTextOverridden:1;
    unsigned int mDeletedOverridden:1;
    unsigned int mEditedOverridden:1;
    unsigned int mFormattingChangedOverridden:1;
    unsigned int mBiDirectionalOverridden:1;
    unsigned int mIndexToAuthorIDOfDeletionOverridden:1;
    unsigned int mIndexToAuthorIDOfEditOverridden:1;
    unsigned int mIndexToAuthorIDOfFormattingChangeOverridden:1;
    unsigned int mDeletionDateOverridden:1;
    unsigned int mEditDateOverridden:1;
    unsigned int mFormattingChangeDateOverridden:1;
    _Bool _biDirectional;
    unsigned short _look;
    short _indent;
    short _cellSpacing;
    unsigned short _indexToAuthorIDOfDeletion;
    unsigned short _indexToAuthorIDOfEdit;
    unsigned short _indexToAuthorIDOfFormattingChange;
    int _justification;
    int _alignment;
    int _widthType;
    int _indentType;
    int _cellSpacingType;
    int _verticalAnchor;
    int _horizontalAnchor;
    int _deleted;
    int _edited;
    int _formattingChanged;
    WDStyle *_baseStyle;
    WDShading *_shading;
    WDBorder *_topBorder;
    WDBorder *_leftBorder;
    WDBorder *_bottomBorder;
    WDBorder *_rightBorder;
    WDBorder *_insideHorizontalBorder;
    WDBorder *_insideVerticalBorder;
    long long _width;
    long long _verticalPosition;
    long long _horizontalPosition;
    long long _leftDistanceFromText;
    long long _topDistanceFromText;
    long long _rightDistanceFromText;
    long long _bottomDistanceFromText;
    NSDate *_deletionDate;
    NSDate *_editDate;
    NSDate *_formattingChangeDate;
}

@property (weak, nonatomic) WDStyle *baseStyle;
@property unsigned short look;
@property (retain, nonatomic) WDShading *shading;
@property (retain, nonatomic) WDBorder *topBorder;
@property (retain, nonatomic) WDBorder *leftBorder;
@property (retain, nonatomic) WDBorder *bottomBorder;
@property (retain, nonatomic) WDBorder *rightBorder;
@property (retain, nonatomic) WDBorder *insideHorizontalBorder;
@property (retain, nonatomic) WDBorder *insideVerticalBorder;
@property int justification;
@property int alignment;
@property long long width;
@property int widthType;
@property short indent;
@property int indentType;
@property short cellSpacing;
@property int cellSpacingType;
@property int verticalAnchor;
@property int horizontalAnchor;
@property long long verticalPosition;
@property long long horizontalPosition;
@property long long leftDistanceFromText;
@property long long topDistanceFromText;
@property long long rightDistanceFromText;
@property long long bottomDistanceFromText;
@property int deleted;
@property int edited;
@property int formattingChanged;
@property _Bool biDirectional;
@property unsigned short indexToAuthorIDOfDeletion;
@property unsigned short indexToAuthorIDOfEdit;
@property unsigned short indexToAuthorIDOfFormattingChange;
@property (retain, nonatomic) NSDate *deletionDate;
@property (retain, nonatomic) NSDate *editDate;
@property (retain, nonatomic) NSDate *formattingChangeDate;
@property _Bool baseStyleOverridden;
@property _Bool lookOverridden;
@property _Bool shadingOverridden;
@property _Bool topBorderOverridden;
@property _Bool leftBorderOverridden;
@property _Bool bottomBorderOverridden;
@property _Bool rightBorderOverridden;
@property _Bool insideHorizontalBorderOverridden;
@property _Bool insideVerticalBorderOverridden;
@property _Bool justificationOverridden;
@property _Bool alignmentOverridden;
@property _Bool widthOverridden;
@property _Bool widthTypeOverridden;
@property _Bool indentOverridden;
@property _Bool indentTypeOverridden;
@property _Bool cellSpacingOverridden;
@property _Bool cellSpacingTypeOverridden;
@property _Bool verticalAnchorOverridden;
@property _Bool horizontalAnchorOverridden;
@property _Bool verticalPositionOverridden;
@property _Bool horizontalPositionOverridden;
@property _Bool leftDistanceFromTextOverridden;
@property _Bool topDistanceFromTextOverridden;
@property _Bool rightDistanceFromTextOverridden;
@property _Bool bottomDistanceFromTextOverridden;
@property _Bool deletedOverridden;
@property _Bool editedOverridden;
@property _Bool formattingChangedOverridden;
@property _Bool biDirectionalOverridden;
@property _Bool indexToAuthorIDOfDeletionOverridden;
@property _Bool indexToAuthorIDOfEditOverridden;
@property _Bool indexToAuthorIDOfFormattingChangeOverridden;
@property _Bool deletionDateOverridden;
@property _Bool editDateOverridden;
@property _Bool formattingChangeDateOverridden;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
