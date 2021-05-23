/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@interface ICKeyboardNotificationListener : NSObject

{
    struct CGRect _keyboardFrame;
}

@property (nonatomic) struct CGRect keyboardFrame;

+ (id)sharedListener;

- (id)init;
- (void)dealloc;
- (struct CGRect)currentKeyboardFrame;
- (void)handleKeyboardWillShow:(id)arg1;
- (void)handleKeyboardWillHide:(id)arg1;

@end
