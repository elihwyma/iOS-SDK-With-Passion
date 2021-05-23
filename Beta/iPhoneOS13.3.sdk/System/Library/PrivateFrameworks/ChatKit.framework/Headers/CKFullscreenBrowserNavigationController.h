/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UINavigationController.h>

@class NSString;

@interface CKFullscreenBrowserNavigationController : UINavigationController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)wantsWindowedPresentation;
- (_Bool)preserveModalPresentationStyle;
- (_Bool)constrainToPresentingVCBounds;
- (_Bool)forceWindowedPresentation;

@end
