/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class NSString;

@interface CUIKDefaultIconGenerator : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_dayNumberStringFromDate:(id)arg1 calendar:(id)arg2;
+ (id)_dateNameFromDate:(id)arg1 calendar:(id)arg2 type:(long long)arg3 style:(long long)arg4;
+ (void)_drawGridInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
+ (void)drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 scale:(double)arg3 iconBase:(id)arg4 date:(id)arg5 calendar:(id)arg6 format:(long long)arg7;
+ (id)_iconImageWithSize:(struct CGSize)arg1 scale:(double)arg2 drawBlock:(CDUnknownBlockType)arg3;
+ (id)_whiteImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
+ (void)_drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 scale:(double)arg3 iconBase:(id)arg4 calendar:(id)arg5 dayNumberString:(id)arg6 dateNameBlock:(CDUnknownBlockType)arg7 dateNameFormatType:(long long)arg8 showGrid:(_Bool)arg9;

- (struct CGImage *)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3 size:(struct CGSize)arg4 scale:(double)arg5;

@end
