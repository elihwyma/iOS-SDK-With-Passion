/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransientOverlayPresentationRequest.h>

@class SBTransientOverlayViewController;

@interface SBMutableTransientOverlayPresentationRequest : SBTransientOverlayPresentationRequest

@property (nonatomic, getter=isAnimated) _Bool animated;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool shouldDismissSiri;
@property (retain, nonatomic) SBTransientOverlayViewController *viewController;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
