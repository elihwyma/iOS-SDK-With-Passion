/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class UIView;

@protocol PLClickPresentationInteractionPresenting;

@protocol PLClickPresentationInteractionPresentable <Swift>

@property (weak, nonatomic) id <PLClickPresentationInteractionPresenting> presenter;
@property (nonatomic, readonly) UIView *viewWithContent;
@property (nonatomic, readonly) UIView *viewForTouchContinuation;

@end
