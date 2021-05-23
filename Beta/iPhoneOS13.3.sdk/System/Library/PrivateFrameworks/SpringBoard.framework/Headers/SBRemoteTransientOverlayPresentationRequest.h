/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class SBSRemoteAlertPresentationTarget, SBTransientOverlayViewController;

@interface SBRemoteTransientOverlayPresentationRequest : NSObject <Swift>

{
    _Bool _animated;
    _Bool _isScreenshotMarkup;
    _Bool _shouldDismissSiri;
    SBTransientOverlayViewController *_viewController;
    SBSRemoteAlertPresentationTarget *_presentationTarget;
}

@property (nonatomic, readonly) SBTransientOverlayViewController *viewController;
@property (nonatomic, getter=isAnimated) _Bool animated;
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget;
@property (nonatomic) _Bool isScreenshotMarkup;
@property (nonatomic) _Bool shouldDismissSiri;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewController:(id)arg1;

@end
