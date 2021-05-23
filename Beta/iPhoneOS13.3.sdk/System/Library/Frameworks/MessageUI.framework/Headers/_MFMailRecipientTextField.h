/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UITextField.h>

@interface _MFMailRecipientTextField : UITextField

{
    _Bool _isShowingDictationPlaceholder;
}

@property (nonatomic, readonly) _Bool isShowingDictationPlaceholder;

- (void)paste:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (id)insertDictationResultPlaceholder;
- (void)_handleKeyUIEvent:(id)arg1;
- (id)_previousKeyResponder;
- (id)customOverlayContainer;

@end
