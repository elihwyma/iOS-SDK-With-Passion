/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextInputAssistantItem.h>

@protocol UISystemDefaultTextInputAssistantItemDelegate;

@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem

{
    id <UISystemDefaultTextInputAssistantItemDelegate> _delegate;
}

@property (weak, nonatomic) id <UISystemDefaultTextInputAssistantItemDelegate> delegate;

- (void)assistantCut;
- (void)assistantCopy;
- (void)assistantUndo;
- (void)assistantRedo;
- (void)assistantPaste;
- (void)assistantBold;
- (void)assistantItalic;
- (void)assistantUnderline;
- (void)assistantDismiss;
- (void)assistantShowKeyboard;
- (void)assistantWriteboard;
- (void)performSystemButtonActionForStyle:(long long)arg1;
- (SEL)_responderSelectorForSystemButtonStyle:(long long)arg1;
- (_Bool)canPerformSystemButtonActionForStyle:(long long)arg1;
- (void)analyticsDispatchWithActionStyle:(long long)arg1;
- (void)_performReturn;

@end
