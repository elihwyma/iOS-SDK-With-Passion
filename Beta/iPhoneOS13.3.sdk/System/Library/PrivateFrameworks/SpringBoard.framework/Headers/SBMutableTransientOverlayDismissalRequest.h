/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransientOverlayDismissalRequest.h>

@interface SBMutableTransientOverlayDismissalRequest : SBTransientOverlayDismissalRequest

@property (nonatomic, getter=isAnimated) _Bool animated;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
