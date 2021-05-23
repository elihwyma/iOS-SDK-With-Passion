/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSButton.h>

@class CPGridButton, CPSAbridgableLabel, UIView;

@protocol CPTemplateDelegate;

@interface CPSGridButton : CPSButton

{
    CPSAbridgableLabel *_customTitleLabel;
    UIView *_focusView;
    CPGridButton *_gridButton;
    id <CPTemplateDelegate> _templateDelegate;
}

@property (retain, nonatomic) CPSAbridgableLabel *customTitleLabel;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) CPGridButton *gridButton;
@property (weak, nonatomic) id <CPTemplateDelegate> templateDelegate;

+ (id)buttonWithGridButton:(id)arg1 templateDelegate:(id)arg2;

- (void)setEnabled:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_updateLabelColor;
- (double)preferredLabelWidth;

@end
