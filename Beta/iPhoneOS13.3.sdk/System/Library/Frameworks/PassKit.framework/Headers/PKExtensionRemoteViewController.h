/*
 Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@protocol PKExtensionRemoteViewControllerDelegate;

@interface PKExtensionRemoteViewController : _UIRemoteViewController

{
    id <PKExtensionRemoteViewControllerDelegate> _delegate;
}

@property (nonatomic) id <PKExtensionRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end
