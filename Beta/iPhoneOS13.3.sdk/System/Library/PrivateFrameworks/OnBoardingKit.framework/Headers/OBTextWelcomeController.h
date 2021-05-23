/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@class OBTextBulletedList, UIStackView;

@interface OBTextWelcomeController

{
    UIStackView *_stackView;
    OBTextBulletedList *_currentBulletedList;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) OBTextBulletedList *currentBulletedList;

- (void)loadView;
- (id)initWithTitle:(id)arg1;
- (void)addSectionWithHeader:(id)arg1 content:(id)arg2 accessoryButton:(id)arg3;
- (void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 accessoryButton:(id)arg3;
- (_Bool)shouldInlineButtonTray;
- (void)addSectionWithHeader:(id)arg1 content:(id)arg2;
- (void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2;

@end
