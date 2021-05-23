/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class SBTransientOverlayViewController;

@interface SBTransientOverlayPresentationRequest : NSObject <Swift>

{
    _Bool _animated;
    CDUnknownBlockType _completionHandler;
    _Bool _shouldDismissSiri;
    SBTransientOverlayViewController *_viewController;
}

@property (nonatomic, readonly, getter=isAnimated) _Bool animated;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) _Bool shouldDismissSiri;
@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewController:(id)arg1;
- (id)_copyWithClass:(Class)arg1;

@end
