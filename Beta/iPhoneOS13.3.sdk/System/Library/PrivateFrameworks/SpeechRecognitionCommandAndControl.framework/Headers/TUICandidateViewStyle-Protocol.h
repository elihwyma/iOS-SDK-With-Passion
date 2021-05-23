/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <SpeechRecognitionCommandAndControl/Swift-Protocol.h>

@class NSString, UIColor, UIFont, UIImage;

@protocol TUICandidateViewStyle <Swift>

@property (nonatomic, readonly) UIFont *candidateFont;
@property (nonatomic, readonly) UIFont *annotationTextFont;
@property (nonatomic, readonly) UIFont *alternativeTextFont;
@property (nonatomic, readonly) UIFont *candidateNumberFont;
@property (nonatomic, readonly) UIFont *sortControlFont;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) UIColor *highlightedTextColor;
@property (nonatomic, readonly) UIColor *alternativeTextColor;
@property (nonatomic, readonly) UIColor *highlightedAlternativeTextColor;
@property (nonatomic, readonly) UIColor *candidateNumberColor;
@property (nonatomic, readonly) UIColor *highlightedCandidateNumberColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *cellBackgroundColor;
@property (nonatomic, readonly) UIColor *arrowButtonBackgroundColor;
@property (nonatomic, readonly) UIColor *gridBackgroundColor;
@property (nonatomic, readonly) UIColor *highlightedBackgroundColor;
@property (nonatomic, readonly) UIColor *highlightedRowBackgroundColor;
@property (nonatomic, readonly) UIColor *groupHeaderBackgroundColor;
@property (nonatomic, readonly) UIColor *lineColor;
@property (nonatomic, readonly) UIColor *sortControlColor;
@property (nonatomic, readonly) UIColor *sortControlBackgroundColor;
@property (copy, nonatomic, readonly) NSString *arrowButtonImageName;
@property (nonatomic, readonly) UIImage *cellSeparatorImage;
@property (nonatomic, readonly) UIImage *slottedCellSeparatorImage;
@property (nonatomic, readonly) UIImage *leftEdgeSeparatorImage;
@property (nonatomic, readonly) UIImage *rightEdgeSeparatorImage;
@property (nonatomic, readonly) UIImage *arrowButtonSeparatorImage;
@property (nonatomic, readonly) UIImage *cellBackgroundImage;
@property (nonatomic, readonly) UIImage *highlightedCellBackgroundImage;
@property (nonatomic, readonly) double rowHeight;
@property (nonatomic, readonly) double arrowButtonHeight;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) unsigned long long maskedCorners;
@property (nonatomic, readonly) unsigned long long gridMaskedCorners;
@property (nonatomic, readonly) double foregroundOpacity;
@property (nonatomic, readonly) double backgroundOpacity;
@property (nonatomic, readonly) _Bool doNotClipToBounds;
@property (nonatomic, readonly) unsigned long long columnsCount;
@property (nonatomic, readonly) unsigned long long maxNumberOfProactiveCells;
@property (nonatomic, readonly) double minimumCellPadding;
@property (nonatomic, readonly) double minimumCellWidth;
@property (nonatomic, readonly) double singleSlottedCellMargin;
@property (nonatomic, readonly) struct UIEdgeInsets extraCellPadding;
@property (nonatomic, readonly) struct UIEdgeInsets arrowButtonPadding;
@property (nonatomic, readonly) struct UIEdgeInsets gridPadding;
@property (nonatomic, readonly) struct UIEdgeInsets gridLinePadding;
@property (nonatomic, readonly) struct CGPoint gridLineOffset;
@property (nonatomic, readonly) struct UIEdgeInsets sortControlPadding;
@property (nonatomic, readonly) long long cellTextAlignment;
@property (nonatomic, readonly) _Bool darkBackdrop;
@property (nonatomic, readonly) _Bool scrollDisabled;
@property (nonatomic, readonly) _Bool showsIndex;
@property (nonatomic, readonly) _Bool fillGridWithLines;

@end
