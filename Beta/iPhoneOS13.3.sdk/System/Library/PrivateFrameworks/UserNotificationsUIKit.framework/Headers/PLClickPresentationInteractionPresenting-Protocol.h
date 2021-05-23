/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsUIKit/Swift-Protocol.h>

@class PLClickPresentationInteractionManager, UIView;

@protocol PLClickPresentationInteractionPresenting <Swift>

@property (nonatomic, readonly) PLClickPresentationInteractionManager *clickPresentationInteractionManager;
@property (nonatomic, readonly) UIView *viewForPreview;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (nonatomic, readonly) struct CGRect initialPresentedFrameOfViewForPreview;
@property (nonatomic, readonly) struct CGRect finalPresentedFrameOfViewForPreview;
@property (nonatomic, readonly) struct CGRect finalDismissedFrameOfViewForPreview;

@end
