/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIButton.h>

@interface MFComposeStyleSelectorButton : UIButton

{
    long long _styleType;
}

@property (nonatomic, readonly) long long styleType;

+ (id)buttonWithStyleType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)_imageForTextStyleType:(long long)arg1;

@end
