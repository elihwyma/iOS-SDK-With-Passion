/*
 Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

#import <UIKit/UIButton.h>

@interface _KeypadButton : UIButton

{
    long long _keyType;
    unsigned long long _digit;
}

@property (nonatomic, readonly) long long keyType;
@property (nonatomic, readonly) unsigned long long digit;

- (void)setHighlighted:(_Bool)arg1;
- (void)_updateBackgroundColor;
- (id)initWithKeyType:(long long)arg1 digit:(unsigned long long)arg2 target:(id)arg3;
- (id)initWithKeyType:(long long)arg1 target:(id)arg2;
- (id)initWithDigit:(unsigned long long)arg1 target:(id)arg2;

@end
