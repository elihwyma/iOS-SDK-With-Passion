/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@class OBBoldTrayButton, OBButtonTray, UILabel;

@interface OBSetupAssistantFinishedController

{
    UILabel *_titleLabel;
    OBButtonTray *_buttonTray;
    OBBoldTrayButton *_boldButton;
    CDUnknownBlockType _boldButtonBlock;
    UILabel *_instructionalLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) OBButtonTray *buttonTray;
@property (retain, nonatomic) OBBoldTrayButton *boldButton;
@property (copy, nonatomic) CDUnknownBlockType boldButtonBlock;
@property (retain, nonatomic) UILabel *instructionalLabel;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (id)_headerFont;
- (id)_instructionFont;
- (void)setButtonTitle:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)setInstructionalText:(id)arg1;

@end
