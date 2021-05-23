/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIGestureRecognizer, UIView;

@protocol UIViewControllerPreviewingDelegate;

@protocol UIViewControllerPreviewing <Swift>

@property (nonatomic, readonly) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic, readonly) id <UIViewControllerPreviewingDelegate> delegate;
@property (nonatomic, readonly) UIView *sourceView;
@property (nonatomic) struct CGRect sourceRect;

@end
