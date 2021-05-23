/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class SXJSONArray, SXTextDecoration, SXTextShadow, SXTextStroke, UIColor;

@protocol SXConditionalTextStyleProperties <Swift>

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

@end
