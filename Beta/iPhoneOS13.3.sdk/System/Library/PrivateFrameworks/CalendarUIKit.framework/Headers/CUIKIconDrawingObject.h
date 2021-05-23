/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class NSCalendar, NSString, UIFont;

@interface CUIKIconDrawingObject : NSObject

{
    NSCalendar *_calendar;
    NSString *_dayNumber;
    CDUnknownBlockType _dateNameBlock;
    long long _dateNameFormatType;
    long long _format;
    UIFont *_dateNameFont;
    struct CGSize _canvasSize;
}

@property (retain) NSCalendar *calendar;
@property (copy) NSString *dayNumber;
@property (copy) CDUnknownBlockType dateNameBlock;
@property long long dateNameFormatType;
@property struct CGSize canvasSize;
@property long long format;
@property (nonatomic, readonly) UIFont *dayNumberFont;
@property (nonatomic, readonly) double dayNumberBaselineVerticalInset;
@property (nonatomic, readonly) double dayNumberTrackingValue;
@property (nonatomic, readonly) UIFont *dateNameFont;
@property (nonatomic, readonly) double dateNameBaselineVerticalInset;
@property (nonatomic, readonly) double dateNameHorizontalInset;
@property (nonatomic, readonly) double minFullDateNameFontScale;
@property (nonatomic, readonly) double minDateNameFontScale;
@property (nonatomic, readonly) double minDateNameLetterSpacing;

+ (id)colorForDayOfWeek;
+ (id)countriesRequiringBlackDayOfWeek;
+ (_Bool)isBlackDayOfWeekRequiredForLocale:(id)arg1;
+ (id)_dateNamesForDateFormatter:(id)arg1 type:(long long)arg2;
+ (id)_dateNamesForCalendar:(id)arg1 type:(long long)arg2;

- (void)draw;
- (void)_drawDayNumber;
- (void)_drawDateName;
- (void)_drawDayNumberForHomeScreenStyledIcon;
- (void)_drawDayNumberForNotificationIcon;
- (id)dateNameFont:(id)arg1;
- (double)resizeAttributedString:(id)arg1 withDateName:(id)arg2 font:(id)arg3 ctx:(id)arg4 maxSize:(struct CGSize)arg5;
- (id)dateNameFont:(id)arg1 size:(double)arg2;
- (id)_systemG2FromFont:(id)arg1;
- (_Bool)_shouldUseJ207SmallerFont:(id)arg1;
- (double)dateNameFontSizeForName:(id)arg1;
- (double)_homeScreenDateNameBaselineVerticalInset;
- (id)initWithCalendar:(id)arg1 dayNumber:(id)arg2 dateNameBlock:(CDUnknownBlockType)arg3 dateNameFormatType:(long long)arg4 canvasSize:(struct CGSize)arg5 format:(long long)arg6;

@end
