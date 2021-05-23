/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor, UIFont, UIImage;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateViewStyle : NSObject <Swift>

{
    _Bool _doNotClipToBounds;
    _Bool _darkBackdrop;
    _Bool _scrollDisabled;
    _Bool _showsIndex;
    _Bool _fillGridWithLines;
    UIFont *_candidateFont;
    UIFont *_annotationTextFont;
    UIFont *_alternativeTextFont;
    UIFont *_candidateNumberFont;
    UIFont *_sortControlFont;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIColor *_alternativeTextColor;
    UIColor *_highlightedAlternativeTextColor;
    UIColor *_candidateNumberColor;
    UIColor *_highlightedCandidateNumberColor;
    UIColor *_backgroundColor;
    UIColor *_cellBackgroundColor;
    UIColor *_arrowButtonBackgroundColor;
    UIColor *_gridBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIColor *_highlightedRowBackgroundColor;
    UIColor *_groupHeaderBackgroundColor;
    UIColor *_lineColor;
    UIColor *_sortControlColor;
    UIColor *_sortControlBackgroundColor;
    NSString *_arrowButtonImageName;
    UIImage *_cellSeparatorImage;
    UIImage *_slottedCellSeparatorImage;
    UIImage *_leftEdgeSeparatorImage;
    UIImage *_rightEdgeSeparatorImage;
    UIImage *_arrowButtonSeparatorImage;
    UIImage *_cellBackgroundImage;
    UIImage *_highlightedCellBackgroundImage;
    double _rowHeight;
    double _arrowButtonHeight;
    double _cornerRadius;
    unsigned long long _maskedCorners;
    unsigned long long _gridMaskedCorners;
    double _foregroundOpacity;
    double _backgroundOpacity;
    unsigned long long _columnsCount;
    unsigned long long _maxNumberOfProactiveCells;
    double _minimumCellPadding;
    double _minimumCellWidth;
    double _singleSlottedCellMargin;
    long long _cellTextAlignment;
    struct CGPoint _gridLineOffset;
    struct UIEdgeInsets _extraCellPadding;
    struct UIEdgeInsets _arrowButtonPadding;
    struct UIEdgeInsets _gridPadding;
    struct UIEdgeInsets _gridLinePadding;
    struct UIEdgeInsets _sortControlPadding;
}

@property (retain, nonatomic) UIFont *candidateFont;
@property (retain, nonatomic) UIFont *annotationTextFont;
@property (retain, nonatomic) UIFont *alternativeTextFont;
@property (retain, nonatomic) UIFont *candidateNumberFont;
@property (retain, nonatomic) UIFont *sortControlFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (retain, nonatomic) UIColor *alternativeTextColor;
@property (retain, nonatomic) UIColor *highlightedAlternativeTextColor;
@property (retain, nonatomic) UIColor *candidateNumberColor;
@property (retain, nonatomic) UIColor *highlightedCandidateNumberColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *cellBackgroundColor;
@property (retain, nonatomic) UIColor *arrowButtonBackgroundColor;
@property (retain, nonatomic) UIColor *gridBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedRowBackgroundColor;
@property (retain, nonatomic) UIColor *groupHeaderBackgroundColor;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) UIColor *sortControlColor;
@property (retain, nonatomic) UIColor *sortControlBackgroundColor;
@property (copy, nonatomic) NSString *arrowButtonImageName;
@property (retain, nonatomic) UIImage *cellSeparatorImage;
@property (retain, nonatomic) UIImage *slottedCellSeparatorImage;
@property (retain, nonatomic) UIImage *leftEdgeSeparatorImage;
@property (retain, nonatomic) UIImage *rightEdgeSeparatorImage;
@property (retain, nonatomic) UIImage *arrowButtonSeparatorImage;
@property (retain, nonatomic) UIImage *cellBackgroundImage;
@property (retain, nonatomic) UIImage *highlightedCellBackgroundImage;
@property (nonatomic) double rowHeight;
@property (nonatomic) double arrowButtonHeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) unsigned long long gridMaskedCorners;
@property (nonatomic) double foregroundOpacity;
@property (nonatomic) double backgroundOpacity;
@property (nonatomic) _Bool doNotClipToBounds;
@property (nonatomic) unsigned long long columnsCount;
@property (nonatomic) unsigned long long maxNumberOfProactiveCells;
@property (nonatomic) double minimumCellPadding;
@property (nonatomic) double minimumCellWidth;
@property (nonatomic) double singleSlottedCellMargin;
@property (nonatomic) struct UIEdgeInsets extraCellPadding;
@property (nonatomic) struct UIEdgeInsets arrowButtonPadding;
@property (nonatomic) struct UIEdgeInsets gridPadding;
@property (nonatomic) struct UIEdgeInsets gridLinePadding;
@property (nonatomic) struct CGPoint gridLineOffset;
@property (nonatomic) struct UIEdgeInsets sortControlPadding;
@property (nonatomic) long long cellTextAlignment;
@property (nonatomic) _Bool darkBackdrop;
@property (nonatomic) _Bool scrollDisabled;
@property (nonatomic) _Bool showsIndex;
@property (nonatomic) _Bool fillGridWithLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)styleForDarkKeyboard:(_Bool)arg1;
+ (id)disambiguationStyleForDarkKeyboard:(_Bool)arg1;
+ (id)tvStyleForDarkKeyboard:(_Bool)arg1;
+ (id)darkKeyboardStyle;
+ (id)lightKeyboardStyle;
+ (id)darkKeyboardStyleForDisambiguation;
+ (id)lightKeyboardStyleForDisambiguation;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
