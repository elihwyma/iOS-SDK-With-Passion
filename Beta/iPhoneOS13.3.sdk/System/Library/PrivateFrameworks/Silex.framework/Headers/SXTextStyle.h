/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray, SXTextDecoration, SXTextShadow, SXTextStroke, UIColor;

@protocol SXTextStyleFontAttributes;

@interface SXTextStyle : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXJSONArray *conditional;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) id <SXTextStyleFontAttributes> fontAttributes;
@property (nonatomic, readonly) long long fontSize;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) SXTextShadow *textShadow;
@property (nonatomic, readonly) long long textTransform;
@property (nonatomic, readonly) double tracking;
@property (nonatomic, readonly) SXTextDecoration *underline;
@property (nonatomic, readonly) SXTextDecoration *strikethrough;
@property (nonatomic, readonly) SXJSONArray *listStyle;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) int verticalAlignment;
@property (nonatomic, readonly) SXTextStroke *stroke;
@property (nonatomic, readonly) NSString *identifier;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;
+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

- (int)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2;
- (long long)textTransformWithValue:(id)arg1 withType:(int)arg2;
- (long long)fontSizeWithValue:(id)arg1 withType:(int)arg2;

@end
