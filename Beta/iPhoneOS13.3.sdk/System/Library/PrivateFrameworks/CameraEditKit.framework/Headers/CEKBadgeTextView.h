/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <CameraEditKit/CEKBadgeView.h>

@class NSDictionary, NSString;

@interface CEKBadgeTextView : CEKBadgeView

{
    NSString *_contentSizeCategory;
    unsigned long long _fontStyle;
    NSDictionary *__textAttributes;
    NSString *__text;
    struct UIEdgeInsets __textInsets;
}

@property (retain, nonatomic, setter=_setTextAttributes:) NSDictionary *_textAttributes;
@property (copy, nonatomic, setter=_setText:) NSString *_text;
@property (nonatomic, setter=_setTextInsets:) struct UIEdgeInsets _textInsets;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) unsigned long long fontStyle;

+ (struct UIEdgeInsets)_defaultTextInsets;
+ (id)_textAttributesForContentSize:(id)arg1 fontStyle:(unsigned long long)arg2;
+ (id)_fontForContentSize:(id)arg1 fontStyle:(unsigned long long)arg2;
+ (double)_textHeightForContentSize:(id)arg1;
+ (double)_heightForContentSize:(id)arg1 textInsets:(struct UIEdgeInsets)arg2;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_maskImage;
- (struct CGSize)_textSize;

@end
