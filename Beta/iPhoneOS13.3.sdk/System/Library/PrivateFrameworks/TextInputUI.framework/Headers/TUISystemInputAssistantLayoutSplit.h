/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUISystemInputAssistantLayoutSplit

{
    double _leftSplitWidth;
    double _rightSplitWidth;
}

@property (nonatomic) double leftSplitWidth;
@property (nonatomic) double rightSplitWidth;

- (id)init;
- (_Bool)usesUnifiedButtonBar;
- (void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4;
- (void)layoutViewSet:(id)arg1 inBounds:(struct CGRect)arg2 forAssistantView:(id)arg3;

@end
