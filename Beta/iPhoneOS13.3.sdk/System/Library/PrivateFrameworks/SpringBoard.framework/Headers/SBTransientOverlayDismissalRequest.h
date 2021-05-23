/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class SBTransientOverlayViewController;

@interface SBTransientOverlayDismissalRequest : NSObject <Swift>

{
    _Bool _animated;
    CDUnknownBlockType _completionHandler;
    long long _requestType;
    SBTransientOverlayViewController *_viewController;
}

@property (nonatomic, readonly, getter=isAnimated) _Bool animated;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;

+ (id)dismissalRequestForAllViewControllers;
+ (id)dismissalRequestForViewController:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)_copyWithClass:(Class)arg1;

@end
