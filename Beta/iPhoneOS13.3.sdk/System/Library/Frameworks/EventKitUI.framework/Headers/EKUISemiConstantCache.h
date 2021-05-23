/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class UIFont;

@interface EKUISemiConstantCache : NSObject

{
    _Bool _calInterfaceIsLeftToRight;
    _Bool _usesLargeText;
    double _dayOccurrenceMinimumCachedLineHeightCompact;
    double _dayOccurrenceMinimumCachedLineHeightRegular;
    double _dayOccurrenceMinimumCachedLineHeightSmallCompact;
    double _dayOccurrenceMinimumCachedLineHeightSmallRegular;
    UIFont *_dayOccurrenceUncompressedSecondaryTextFont;
    double _weekAllDayBaselineForLargeFormatWeekView;
    double _weekAllDayBaselineForSmallFormatWeekView;
    UIFont *_weekAllDayLabelFontCompact;
    UIFont *_weekAllDayLabelFontRegular;
    UIFont *_weekAllDayTodayLabelFontCompact;
    double _currentScaleFactor;
    double _weekAllDayOccurrenceHeight;
    double _minYearMonthHeaderFontSizeUsed;
}

@property (readonly) _Bool usesLargeText;
@property (readonly) double currentScaleFactor;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightRegular;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallCompact;
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallRegular;
@property (readonly) UIFont *dayOccurrenceUncompressedSecondaryTextFont;
@property double weekAllDayBaselineForLargeFormatWeekView;
@property double weekAllDayBaselineForSmallFormatWeekView;
@property double weekAllDayOccurrenceHeight;
@property (readonly) UIFont *weekAllDayLabelFontCompact;
@property (readonly) UIFont *weekAllDayLabelFontRegular;
@property (readonly) UIFont *weekAllDayTodayLabelFontCompact;
@property (readonly) UIFont *weekAllDayTodayLabelFontRegular;
@property double minYearMonthHeaderFontSizeUsed;

+ (id)sharedInstance;

- (id)init;
- (void)_orientationChanged:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_contentCategorySizeChanged:(id)arg1;
- (void)updateMetrics;
- (id)_dayOccurrenceFontWithStyle:(id)arg1 size:(double)arg2 regularSize:(double)arg3;
- (long long)_participantStatusFromDetailAttendeesStatus:(int)arg1;
- (id)commentIconStringForFont:(id)arg1;
- (id)statusGlyphForStatusType:(int)arg1;
- (id)birthdayImageForFont:(id)arg1;

@end
