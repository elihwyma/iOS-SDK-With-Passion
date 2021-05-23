/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXTextStyle.h>

@class NSString, SXDropCapStyle, SXJSONArray, SXTextDecoration, SXTextShadow, SXTextStroke, UIColor;

@protocol SXTextStyleFontAttributes;

@interface SXComponentTextStyle : SXTextStyle

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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
@property (nonatomic, readonly) long long textAlignment;
@property (nonatomic, readonly) long long lineHeight;
@property (nonatomic, readonly) double relativeLineHeight;
@property (nonatomic, readonly) long long exactLineHeight;
@property (nonatomic, readonly) SXDropCapStyle *dropCapStyle;
@property (nonatomic, readonly) long long hyphenation;
@property (nonatomic, readonly) SXTextStyle *linkStyle;
@property (nonatomic, readonly) long long paragraphSpacingBefore;
@property (nonatomic, readonly) long long paragraphSpacingAfter;
@property (nonatomic, readonly) long long firstLineIndent;
@property (nonatomic, readonly) _Bool hangingPunctuation;
@property (nonatomic, readonly) _Bool fontScaling;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

- (long long)textAlignmentWithValue:(id)arg1 withType:(int)arg2;
- (long long)lineHeightWithValue:(id)arg1 withType:(int)arg2;
- (long long)exactLineHeightWithValue:(id)arg1 withType:(int)arg2;
- (double)relativeLineHeightWithValue:(id)arg1 withType:(int)arg2;
- (long long)hyphenationWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)fontScalingWithValue:(id)arg1 withType:(int)arg2;

@end
