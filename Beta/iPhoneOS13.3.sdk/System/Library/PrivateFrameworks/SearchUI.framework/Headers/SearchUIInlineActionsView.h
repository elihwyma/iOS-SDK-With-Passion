/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <AppSupportUI/NUIContainerStackView.h>

@class CNActionView, CNContactInlineActionsViewController;

@interface SearchUIInlineActionsView : NUIContainerStackView

{
    CNActionView *_messageButton;
    CNContactInlineActionsViewController *_inlineActionsViewController;
    CNActionView *_directionsButton;
}

@property (retain) CNActionView *messageButton;
@property (retain) CNContactInlineActionsViewController *inlineActionsViewController;
@property (retain) CNActionView *directionsButton;

- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)initWithMessageMbutton:(id)arg1 inlineActionsViewController:(id)arg2 directionsButton:(id)arg3;

@end
