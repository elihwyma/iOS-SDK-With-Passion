/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <UIKit/UIView.h>

@class CPRouteChoice, CPSAbridgableLabel, CPSInvisibleButton, UIImageView, UIStackView;

@protocol CPSRouteRowInteracting;

@interface CPSRouteRowView : UIView

{
    _Bool _selected;
    CPRouteChoice *_representedRouteChoice;
    UIImageView *_checkmarkView;
    CPSAbridgableLabel *_title;
    CPSAbridgableLabel *_detail;
    UIView *_focusBackground;
    CPSInvisibleButton *_rowButton;
    id <CPSRouteRowInteracting> _interactionDelegate;
    UIStackView *_labelStackView;
}

@property (nonatomic, readonly) UIImageView *checkmarkView;
@property (nonatomic, readonly) CPSAbridgableLabel *title;
@property (nonatomic, readonly) CPSAbridgableLabel *detail;
@property (retain, nonatomic) UIView *focusBackground;
@property (retain, nonatomic) CPSInvisibleButton *rowButton;
@property (weak, nonatomic) id <CPSRouteRowInteracting> interactionDelegate;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) CPRouteChoice *representedRouteChoice;
@property (nonatomic, getter=isSelected) _Bool selected;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_updateAppearance;
- (void)handleRowSelection:(id)arg1;

@end
