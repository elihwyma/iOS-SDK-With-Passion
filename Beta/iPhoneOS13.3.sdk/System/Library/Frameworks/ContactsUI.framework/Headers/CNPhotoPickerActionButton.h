/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIButton.h>

@class CNPhotoPickerActionButtonBlockHandler;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerActionButton : UIButton

{
    _Bool _isDestructive;
    CNPhotoPickerActionButtonBlockHandler *_blockHandler;
}

@property (nonatomic) _Bool isDestructive;
@property (retain, nonatomic) CNPhotoPickerActionButtonBlockHandler *blockHandler;

+ (id)buttonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (id)defaultButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (id)destructiveButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)performActionBlock;

@end
