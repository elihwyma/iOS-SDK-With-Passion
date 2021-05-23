/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class CUIKIconSizeMetrics, NSCalendar, NSString;

@interface CUIKIconDrawObject : NSObject

{
    NSCalendar *_calendar;
    NSString *_dayNumber;
    CDUnknownBlockType _dateNameBlock;
    long long _dateNameFormatType;
    double _canvasScale;
    CUIKIconSizeMetrics *_sizeMetrics;
    struct CGSize _canvasSize;
}

@property (copy, nonatomic, readonly) NSCalendar *calendar;
@property (copy, nonatomic, readonly) NSString *dayNumber;
@property (nonatomic, readonly) CDUnknownBlockType dateNameBlock;
@property (nonatomic, readonly) long long dateNameFormatType;
@property (nonatomic, readonly) struct CGSize canvasSize;
@property (nonatomic, readonly) double canvasScale;
@property (nonatomic, readonly) CUIKIconSizeMetrics *sizeMetrics;

+ (id)countriesRequiringBlackDayOfWeek;
+ (_Bool)isBlackDayOfWeekRequiredForLocale:(id)arg1;
+ (id)defaultDayNumberFontWithSize:(double)arg1;
+ (id)systemG2FromFont:(id)arg1;

- (id)dayNumberFont;
- (void)draw;
- (void)_drawDayNumber;
- (void)_drawDateName;
- (id)dateNameFont:(id)arg1;
- (id)colorForDayOfWeek;
- (double)resizeAttributedString:(id)arg1 withDateName:(id)arg2 font:(id)arg3 ctx:(id)arg4 maxSize:(struct CGSize)arg5;
- (_Bool)sizeMetricsAreHomeScreenSize;
- (id)dateNameFontForDateName:(id)arg1 size:(double)arg2;
- (double)dateNameFontSizeForDateName:(id)arg1;
- (id)initWithCalendar:(id)arg1 dayNumber:(id)arg2 dateNameBlock:(CDUnknownBlockType)arg3 dateNameFormatType:(long long)arg4 canvasSize:(struct CGSize)arg5 canvasScale:(double)arg6;

@end
