/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSEditingPane.h>

@class MCQuestionView, UITransitionView;

__attribute__((visibility("hidden")))
@interface MCQuestionPane : PSEditingPane

{
    MCQuestionView *_questionView;
    UITransitionView *_transitionView;
    double _navigationBarHeight;
    double _statusBarHeight;
}

@property (nonatomic) double navigationBarHeight;
@property (nonatomic) double statusBarHeight;

- (void)setProperties:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)transitionViewDidComplete:(id)arg1;
- (_Bool)requiresKeyboard;
- (void)viewDidBecomeVisible;
- (void)disableInputField;
- (void)enableInputField;
- (void)_slide:(int)arg1 toQuestionWithProperties:(id)arg2;
- (void)_updateInPlaceWithProperties:(id)arg1;
- (id)responseValue;
- (void)setProperties:(id)arg1 withStyle:(int)arg2;

@end
