/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@interface _SBLegacyRemoteAlertContentHostViewController : _UIRemoteViewController

{
    id _delegate;
    NSString *_serviceClassName;
    _Bool _serviceHasSetPreferredContentSize;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *serviceClassName;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)description;
- (_Bool)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_getPreferredContentSizeWithReplyBlock:(CDUnknownBlockType)arg1;

@end
