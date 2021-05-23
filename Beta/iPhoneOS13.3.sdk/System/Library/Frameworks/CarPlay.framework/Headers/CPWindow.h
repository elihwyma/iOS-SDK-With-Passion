/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <UIKit/UIWindow.h>

@class CPTemplateApplicationScene, NSLayoutConstraint, UILayoutGuide, UIWindowScene;

@interface CPWindow : UIWindow

{
    CPTemplateApplicationScene *_templateApplicationScene;
    UILayoutGuide *_mapButtonSafeAreaLayoutGuide;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *rightConstraint;
@property (nonatomic, readonly) UILayoutGuide *mapButtonSafeAreaLayoutGuide;
@property (weak, nonatomic) UIWindowScene *windowScene;
@property (weak, nonatomic) CPTemplateApplicationScene *templateApplicationScene;

- (void)updateLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1 templateScene:(id)arg2;

@end
