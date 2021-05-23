/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardFloatingTransitionState : NSObject

{
    UIView *_inputView;
    double _borderWidth;
    UIColor *_borderColor;
    double _cornerRadius;
    struct CGPoint _scale;
    struct CGRect _inputViewFrame;
    struct CGRect _platterViewFrame;
    struct UIEdgeInsets _platterInsets;
    struct CGAffineTransform _initialInputViewTransform;
    struct CGAffineTransform _finalInputViewTransform;
}

@property (retain, nonatomic) UIView *inputView;
@property (nonatomic) struct CGRect inputViewFrame;
@property (nonatomic) struct CGRect platterViewFrame;
@property (nonatomic) struct UIEdgeInsets platterInsets;
@property (nonatomic) struct CGPoint scale;
@property (nonatomic) struct CGAffineTransform initialInputViewTransform;
@property (nonatomic) struct CGAffineTransform finalInputViewTransform;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) double cornerRadius;

@end
