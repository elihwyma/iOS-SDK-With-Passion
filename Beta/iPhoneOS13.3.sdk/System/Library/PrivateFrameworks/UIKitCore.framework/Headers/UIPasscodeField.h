/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSMutableString, NSString, UIButton;

@interface UIPasscodeField : UIView

{
    NSMutableString *_value;
    NSMutableArray *_entryFields;
    NSMutableArray *_entryBackgrounds;
    UIButton *_okButton;
    _Bool _opaqueBackground;
    _Bool _centerHorizontally;
    long long _keyboardType;
    long long _keyboardAppearance;
    int _emptyContentReturnKeyType;
    id _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)defaultHeight;
+ (Class)textFieldClass;

- (void)dealloc;
- (void)appendString:(id)arg1;
- (id)stringValue;
- (void)setDelegate:(id)arg1;
- (void)setStringValue:(id)arg1;
- (_Bool)isFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)setKeyboardType:(long long)arg1;
- (void)_textDidChange;
- (int)numberOfEntryFields;
- (void)setNumberOfEntryFields:(int)arg1;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (_Bool)textFieldShouldStartEditing:(id)arg1;
- (void)setTextCentersHorizontally:(_Bool)arg1;
- (void)setKeyboardType:(long long)arg1 appearance:(long long)arg2;
- (void)setKeyboardType:(long long)arg1 appearance:(long long)arg2 emptyContentReturnKeyType:(int)arg3;
- (void)okButtonClicked:(id)arg1;
- (void)setNumberOfEntryFields:(int)arg1 opaqueBackground:(_Bool)arg2;
- (void)_updateFields;
- (_Bool)showsOKButton;
- (void)setShowsOKButton:(_Bool)arg1;
- (void)deleteLastCharacter;
- (_Bool)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;

@end
