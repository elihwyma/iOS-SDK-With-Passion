/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@interface CUIKCalendarApplicationIcon : NSObject

+ (void)drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 iconBase:(id)arg3 date:(id)arg4 calendar:(id)arg5 format:(int)arg6;
+ (id)_iconImageWithFormat:(int)arg1 square:(_Bool)arg2 outline:(_Bool)arg3 drawBlock:(CDUnknownBlockType)arg4;
+ (id)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(int)arg3 outline:(_Bool)arg4;
+ (long long)_translateUIApplicationIconFormat:(int)arg1;
+ (void)drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 iconBase:(id)arg3 dateComponents:(id)arg4 dateNameFormatType:(long long)arg5 format:(long long)arg6 showGrid:(_Bool)arg7;
+ (double)_imageScaleForApplicationIconFormat:(int)arg1;
+ (id)getUnmaskedIconImage:(int)arg1;
+ (id)getMaskedIconImageWithFormat:(int)arg1 imageScale:(double)arg2;
+ (_Bool)formatSupportsDynamicIcon:(int)arg1;
+ (int)_iconVariantForFormat:(int)arg1 scale:(double)arg2 outline:(_Bool)arg3;
+ (id)croppedIconImage:(id)arg1 format:(int)arg2;
+ (id)_whiteImage;
+ (long long)dynamicIconFormat:(int)arg1;
+ (long long)_iconDateNameFormatTypeForDate:(id)arg1 calendar:(id)arg2 format:(int)arg3;
+ (id)_dayNumberStringFromDate:(id)arg1 calendar:(id)arg2;
+ (id)_dateNameFromDate:(id)arg1 calendar:(id)arg2 type:(long long)arg3 style:(long long)arg4;
+ (void)_drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 iconBase:(id)arg3 calendar:(id)arg4 dayNumberString:(id)arg5 dateNameBlock:(CDUnknownBlockType)arg6 dateNameFormatType:(long long)arg7 format:(long long)arg8 showGrid:(_Bool)arg9;
+ (id)_dayNumberStringFromDateComponents:(id)arg1;
+ (id)_dateNameFromDateComponents:(id)arg1 type:(long long)arg2 style:(long long)arg3;
+ (void)_fillContextWithWhiteBackgroundIfNeededForFormat:(long long)arg1 context:(struct CGContext *)arg2 frame:(struct CGRect)arg3;
+ (void)_drawGridInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
+ (id)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(int)arg3;
+ (id)iconImageWithDateComponents:(id)arg1 dateNameFormatType:(long long)arg2 format:(int)arg3;
+ (int)iconVersion;

@end
