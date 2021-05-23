/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <UIKit/UIButton.h>

@class NSString;

@interface CNFRegLearnMoreButton : UIButton

{
    long long _style;
    NSString *_buttonText;
    _Bool _alwaysUnderline;
    _Bool _usesImage;
}

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) _Bool alwaysUnderline;
@property (nonatomic) _Bool usesImage;

+ (id)roundedButtonWithText:(id)arg1 color:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (void)_setupLearnMoreTextForCurrentStyle;
- (void)_setupArrowImageForCurrentStyle;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 text:(id)arg3;

@end
