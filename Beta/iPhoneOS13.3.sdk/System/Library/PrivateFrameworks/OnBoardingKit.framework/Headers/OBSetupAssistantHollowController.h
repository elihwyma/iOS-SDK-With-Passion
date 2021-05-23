/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@class OBHollowButton;

@interface OBSetupAssistantHollowController

{
    OBHollowButton *_contentButton;
}

@property (retain, nonatomic) OBHollowButton *contentButton;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (void)addHollowButtonWithTitle:(id)arg1 target:(id)arg2 downPressSelector:(SEL)arg3 upLiftSelector:(SEL)arg4;

@end
