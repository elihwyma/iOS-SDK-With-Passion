/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIButton.h>

@class AVTAvatarActionButtonBlockHandler;

@interface AVTAvatarActionButton : UIButton

{
    _Bool _isDestructive;
    AVTAvatarActionButtonBlockHandler *_blockHandler;
}

@property (nonatomic) _Bool isDestructive;
@property (retain, nonatomic) AVTAvatarActionButtonBlockHandler *blockHandler;

+ (id)buttonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (id)defaultButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
+ (id)destructiveButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)performActionBlock;

@end
