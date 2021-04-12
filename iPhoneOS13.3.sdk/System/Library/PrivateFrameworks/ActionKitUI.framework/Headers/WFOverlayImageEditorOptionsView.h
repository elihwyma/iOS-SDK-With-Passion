//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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

@property(readonly, nonatomic) __weak UILabel *nextLabel; // @synthesize nextLabel=_nextLabel;
@property(readonly, nonatomic) __weak UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(readonly, nonatomic) __weak WFOverlayImageEditorOptionButton *opacityButton; // @synthesize opacityButton=_opacityButton;
@property(readonly, nonatomic) __weak WFOverlayImageEditorOptionButton *resetButton; // @synthesize resetButton=_resetButton;
@property(readonly, nonatomic) __weak WFOverlayImageEditorOptionButton *rotationButton; // @synthesize rotationButton=_rotationButton;
@property(nonatomic) __weak id <WFOverlayImageEditorOptionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(readonly, nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
// - (void).cxx_destruct;
- (void)didTapNextButton;
- (void)didTapCancelButton;
- (void)didTapOpacityButton;
- (void)didTapRotationButton;
- (void)didTapResetButton;
- (id)init;

@end

