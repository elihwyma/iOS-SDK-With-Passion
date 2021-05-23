/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@class UIView;

@protocol _UIRemoteKeyboardInputViewPlaceholder

@property (nonatomic) struct CGSize fixedSize;
@property (retain, readonly) UIView *placeheldView;
@property (retain, nonatomic) UIView *fallbackView;
@property (retain, nonatomic) UIView *associatedView;

- (unsigned short)_isPlaceholderViewSelector;
- (unsigned short)refreshPlaceholder;

@end
