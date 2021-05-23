/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OABDefaultsManager : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct EshColor)shadowColor;
- (int)shadowAlpha;
- (_Bool)hidden;
- (int)strokeWidth;
- (_Bool)isFilled;
- (int)shadowOffsetX;
- (int)shadowOffsetY;
- (int)fillType;
- (int)shadowType;
- (struct EshColor)fillFgColor;
- (_Bool)isStroked;
- (struct EshColor)strokeFgColor;
- (struct EshColor)fillBgColor;
- (struct EshColor)strokeBgColor;
- (int)fillFgAlpha;
- (int)fillAngle;
- (int)fillFocusLeft;
- (int)fillFocusTop;
- (int)fillFocusRight;
- (int)fillFocusBottom;
- (unsigned int)fillBlipID;
- (id)fillBlipName;
- (struct EshBlip *)fillBlipDataReference;
- (int)fillBgAlpha;
- (int)fillFocus;
- (const struct EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (_Bool)isTextPath;
- (int)strokeFillType;
- (unsigned int)strokeFillBlipID;
- (id)strokeFillBlipName;
- (struct EshBlip *)strokeFillBlipDataReference;
- (int)strokeFgAlpha;
- (int)strokeMiterLimit;
- (int)strokeCompoundType;
- (int)strokePresetDash;
- (const struct EshTablePropVal<int> *)strokeCustomDash;
- (int)strokeCapStyle;
- (int)strokeJoinStyle;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowLength;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowLength;
- (_Bool)isShadowed;
- (int)shadowSoftness;
- (_Bool)isFillOK;
- (_Bool)isStrokeOK;
- (_Bool)isShadowOK;
- (id)textPathUnicodeString;
- (int)textPathTextAlignment;
- (int)textPathFontSize;
- (id)textPathFontFamily;
- (_Bool)textPathBold;
- (_Bool)textPathItalic;
- (_Bool)textPathUnderline;
- (_Bool)textPathSmallcaps;
- (_Bool)textPathStrikethrough;

@end
