/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@class UIView;

@interface TLKRoundedCornerLabel

{
    _Bool _large;
    UIView *_borderView;
}

@property (retain, nonatomic) UIView *borderView;
@property (nonatomic) _Bool large;

- (void)tlk_updateForAppearance:(id)arg1;
- (id)initWithProminence:(unsigned long long)arg1;

@end
