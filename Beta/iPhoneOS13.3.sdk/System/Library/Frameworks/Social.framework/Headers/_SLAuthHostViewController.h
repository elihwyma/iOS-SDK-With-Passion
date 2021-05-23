/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/_UIRemoteViewController.h>

@interface _SLAuthHostViewController : _UIRemoteViewController

{
    CDUnknownBlockType _viewServiceTerminationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType viewServiceTerminationBlock;

- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
