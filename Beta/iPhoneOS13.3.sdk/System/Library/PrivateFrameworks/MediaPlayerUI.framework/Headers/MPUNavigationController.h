/*
 Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

#import <UIKit/UINavigationController.h>

@interface MPUNavigationController : UINavigationController

{
    _Bool _supportsStandardInterfaceOrientations;
    CDUnknownBlockType _overrideSupportedInterfaceOrientationsHandler;
}

@property (copy, nonatomic) CDUnknownBlockType overrideSupportedInterfaceOrientationsHandler;
@property (nonatomic) _Bool supportsStandardInterfaceOrientations;

- (unsigned long long)supportedInterfaceOrientations;

@end
