/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@protocol UITextInputAdditions

@property (nonatomic, readonly, getter=isEditable) _Bool editable;
@property (nonatomic, readonly, getter=isEditing) _Bool editing;
@property (nonatomic, readonly, getter=_caretRect) struct CGRect caretRect;

- (unsigned short)textInputView;
- (unsigned short)interactionAssistant;
- (unsigned short)beginSelectionChange;
- (unsigned short)endSelectionChange;

@end
