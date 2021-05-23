/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIView.h>

@class UIButton, UILabel, WFOverlayImageEditorOptionButton;

@protocol WFOverlayImageEditorOptionsViewDelegate;

__attribute__((visibility("hidden")))
@interface WFOverlayImageEditorOptionsView : UIView

{
    UIButton *_cancelButton;
    UIButton *_nextButton;
    id <WFOverlayImageEditorOptionsViewDelegate> _delegate;
    WFOverlayImageEditorOptionButton *_rotationButton;
    WFOverlayImageEditorOptionButton *_resetButton;
    WFOverlayImageEditorOptionButton *_opacityButton;
    UIView *_topBorder;
    UILabel *_nextLabel;
}

@property (weak, nonatomic, readonly) WFOverlayImageEditorOptionButton *rotationButton;
@property (weak, nonatomic, readonly) WFOverlayImageEditorOptionButton *resetButton;
@property (weak, nonatomic, readonly) WFOverlayImageEditorOptionButton *opacityButton;
@property (weak, nonatomic, readonly) UIView *topBorder;
@property (weak, nonatomic, readonly) UILabel *nextLabel;
@property (weak, nonatomic, readonly) UIButton *cancelButton;
@property (weak, nonatomic, readonly) UIButton *nextButton;
@property (weak, nonatomic) id <WFOverlayImageEditorOptionsViewDelegate> delegate;

- (id)init;
- (void)didTapResetButton;
- (void)didTapRotationButton;
- (void)didTapOpacityButton;
- (void)didTapCancelButton;
- (void)didTapNextButton;

@end
