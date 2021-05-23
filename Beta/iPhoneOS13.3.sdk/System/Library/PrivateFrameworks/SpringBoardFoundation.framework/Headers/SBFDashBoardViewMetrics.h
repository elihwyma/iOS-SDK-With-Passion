/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface SBFDashBoardViewMetrics : NSObject

+ (_Bool)_isPortrait;
+ (double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2;
+ (double)timeLabelToSubtitleLabelDifferenceY;
+ (_Bool)_presentsListBelowDateTime;
+ (struct CGRect)suggestedFrameForListForPage:(unsigned long long)arg1 pageBounds:(struct CGRect)arg2 insets:(struct UIEdgeInsets)arg3;
+ (_Bool)listScrollsDateTime;
+ (struct CGRect)suggestedFrameForListForPage:(unsigned long long)arg1 pageBounds:(struct CGRect)arg2 insets:(struct UIEdgeInsets)arg3 scrollsDateTime:(_Bool)arg4;
+ (struct CGRect)_reducedPageBoundsFromBounds:(struct CGRect)arg1 forPage:(unsigned long long)arg2;
+ (struct UIEdgeInsets)suggestedContentInsetsForListForPage:(unsigned long long)arg1 pageBounds:(struct CGRect)arg2 scrollsDateTime:(_Bool)arg3;
+ (unsigned long long)listLayoutForPage:(unsigned long long)arg1;
+ (double)listMinYForPage:(unsigned long long)arg1;
+ (_Bool)layoutUsesMargin:(unsigned long long)arg1;
+ (_Bool)layoutCentersContent:(unsigned long long)arg1;
+ (double)listWidthForPage:(unsigned long long)arg1;
+ (double)listInsetXForPage:(unsigned long long)arg1;
+ (double)listInsetXForPage:(unsigned long long)arg1 leading:(_Bool)arg2;
+ (double)searchClippingLineMaxY;
+ (unsigned long long)dateTimeLayoutForPage:(unsigned long long)arg1;
+ (struct CGRect)suggestedFrameForListForPage:(unsigned long long)arg1 pageBounds:(struct CGRect)arg2;
+ (double)timeToListInsetXforPage:(unsigned long long)arg1;
+ (double)_dateTimeMinXForReducedBounds:(struct CGRect)arg1 forPage:(unsigned long long)arg2;
+ (double)timeLabelBaselineY;
+ (double)timeSubtitleBaselineY;
+ (double)_padSpecificValueJ99:(double)arg1 otherPad:(double)arg2;
+ (double)_phoneSpecificValueN56:(double)arg1 n61:(double)arg2 n69:(double)arg3 d22:(double)arg4;
+ (double)timeToSubtitleLabelBaselineDifferenceY;
+ (id)dateOnlyLunarDateFont;
+ (double)_phoneSpecificValueN56:(double)arg1 n61:(double)arg2 n69:(double)arg3;
+ (double)dateBaselineToListY;
+ (double)_padSpecificValueForDevice:(struct SBFDashBoardOrientationLeadingInsets)arg1 leading:(_Bool)arg2;
+ (double)_padSpecificInsets:(struct SBFDashBoardPadPageInsets)arg1 leading:(_Bool)arg2;
+ (double)searchBarWidth;
+ (struct UIEdgeInsets)suggestedContentInsetsForListForPage:(unsigned long long)arg1 pageBounds:(struct CGRect)arg2;
+ (struct CGRect)suggestedFrameForMediaControlsForPageBounds:(struct CGRect)arg1;
+ (struct CGRect)suggestedFrameForMediaArtworkForControlsFrame:(struct CGRect)arg1 bottomInset:(double)arg2 inPageBounds:(struct CGRect)arg3;
+ (struct CGRect)suggestedFrameForCallToActionLabel:(id)arg1 yOffset:(double)arg2 inBounds:(struct CGRect)arg3;
+ (double)timeLabelScrollPercentForPage:(unsigned long long)arg1;
+ (struct CGRect)suggestedFrameForDateTimeViewInScreenCoordinates:(struct CGRect)arg1 centeredX:(_Bool)arg2;
+ (struct UIEdgeInsets)_cachedGlyphInsetsForString:(id)arg1 withFont:(id)arg2;
+ (double)timeLabelToLunarDateLabelDifferenceY;
+ (double)dateOnlyLabelToLunarDateLabelBaselineDifferenceY;
+ (id)dateFont;
+ (double)singleLineDateViewBaselineDifferenceY;
+ (struct CGRect)suggestedFrameForStatusView:(id)arg1 inView:(id)arg2 withInsets:(struct UIEdgeInsets)arg3;

@end
