/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBRemoteTransientOverlayViewController, SBSRemoteAlertPresentationTarget;

@interface SBDeviceApplicationRemoteTransientOverlayPresentationContext : NSObject

{
    SBRemoteTransientOverlayViewController *_remoteViewController;
    SBSRemoteAlertPresentationTarget *_presentationTarget;
}

@property (retain, nonatomic) SBRemoteTransientOverlayViewController *remoteViewController;
@property (retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget;

@end
