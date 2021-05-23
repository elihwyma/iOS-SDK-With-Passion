/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBTransientOverlayViewController;

@interface SBRemoteTransientOverlayDismissalRequest : NSObject

{
    _Bool _animated;
    _Bool _shouldInvalidatePresentation;
    CDUnknownBlockType _completionHandler;
    SBTransientOverlayViewController *_viewController;
}

@property (nonatomic, getter=isAnimated) _Bool animated;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool shouldInvalidatePresentation;
@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewController:(id)arg1;

@end
