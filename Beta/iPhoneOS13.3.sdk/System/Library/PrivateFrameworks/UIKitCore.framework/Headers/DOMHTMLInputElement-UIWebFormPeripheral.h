/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <WebKitLegacy/DOMHTMLInputElement.h>

@interface DOMHTMLInputElement (UIWebFormPeripheral)

- (long long)keyboardType;
- (id)text;
- (_Bool)isSecure;
- (id)textInputTraits;
- (_Bool)isEditing;
- (id)createPeripheral;
- (_Bool)isAssistedDateType;
- (void)_accessoryClear;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (_Bool)nodeCanBecomeFirstResponder;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (_Bool)_requiresAccessoryView;
- (_Bool)_requiresInputView;
- (_Bool)_supportsAutoFill;
- (_Bool)_supportsAccessoryClear;
- (id)_textFormElement;
- (_Bool)isTextControl;
- (_Bool)isLikelyToBeginPageLoad;

@end
