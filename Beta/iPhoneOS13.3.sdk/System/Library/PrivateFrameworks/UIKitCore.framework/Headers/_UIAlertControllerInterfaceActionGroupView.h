/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIInterfaceActionGroupView.h>

@class UIAlertController;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView

{
    _Bool _scrollableHeaderViewHasRealContent;
    UIAlertController *_alertController;
}

@property (weak, nonatomic) UIAlertController *alertController;
@property (nonatomic) _Bool scrollableHeaderViewHasRealContent;

- (id)_alertController;
- (_Bool)_shouldInstallContentGuideConstraints;
- (_Bool)_shouldShowSeparatorAboveActionsSequenceView;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
- (id)initWithAlertController:(id)arg1 actionGroup:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;

@end
