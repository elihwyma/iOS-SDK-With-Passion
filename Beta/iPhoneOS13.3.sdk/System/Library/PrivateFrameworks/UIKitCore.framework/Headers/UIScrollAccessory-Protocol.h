/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@class UIScrollView;

@protocol UIScrollAccessory

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long edge;
@property (nonatomic, readonly) _Bool overlay;

- (unsigned short)update;

@end
