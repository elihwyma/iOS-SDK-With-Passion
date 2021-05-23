/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIButton.h>

@class UIImageView;

@interface MFComposeSMIMELockButton : UIButton

{
    UIImageView *_lockedImageView;
    UIImageView *_unlockedImageView;
    _Bool _wantsEncryption;
    _Bool _canEncrypt;
    struct UIEdgeInsets touchInsets;
}

@property (nonatomic) struct UIEdgeInsets touchInsets;
@property (nonatomic) _Bool wantsEncryption;
@property (nonatomic) _Bool canEncrypt;

- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setWantsEncryption:(_Bool)arg1 canEncrypt:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_updateButtonAppearance;
- (void)_updateButtonAppearanceAnimated:(_Bool)arg1;
- (void)_closeLock;
- (void)_openLock;

@end
