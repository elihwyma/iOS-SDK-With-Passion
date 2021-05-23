/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPrintFormatter.h>

@class NSAttributedString, NSString, UIColor, UIFont;

@interface UISimpleTextPrintFormatter : UIPrintFormatter

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long textAlignment;

- (id)initWithText:(id)arg1;
- (id)initWithAttributedText:(id)arg1;

@end
