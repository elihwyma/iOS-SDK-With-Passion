/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <QuartzCore/CALayer.h>

@class NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface RCTextLayer : CALayer

{
    struct CGSize _cachedSize;
    unsigned long long _cachedSizeHash;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _preferredAlignment;
    long long _textAlignment;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long preferredAlignment;
@property (nonatomic) long long textAlignment;

- (id)init;
- (id)_attributes;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGSize)_displaySize;
- (struct CGRect)textRectWithAlignment:(long long)arg1 inLayoutBounds:(struct CGRect)arg2;

@end
