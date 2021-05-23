/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIView;

@protocol UIViewControllerContextTransitioning;

@protocol UIViewControllerKeyboardContextTransitioning <Swift>

@property (nonatomic, readonly) id <UIViewControllerContextTransitioning> mainContext;
@property (nonatomic, readonly) UIView *fromKeyboard;
@property (nonatomic, readonly) struct CGRect fromKeyboardFrame;
@property (nonatomic, readonly) UIView *toKeyboard;
@property (nonatomic, readonly) struct CGRect toKeyboardFrame;

@end
