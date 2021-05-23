/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class _UIStatusBarAction;

@protocol UILayoutItem;

@protocol _UIStatusBarActionable <Swift>

@property (retain, nonatomic) _UIStatusBarAction *action;
@property (nonatomic) struct UIEdgeInsets actionInsets;
@property (nonatomic, readonly) id <UILayoutItem> layoutItem;

@end
