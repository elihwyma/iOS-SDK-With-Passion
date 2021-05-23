/*
 Image: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
 */

#import <UIKit/UIViewController.h>

@class NSString, SORemoteExtensionContext;

__attribute__((visibility("hidden")))
@interface SOExtensionViewService : UIViewController

{
    SORemoteExtensionContext *_extensionContext;
}

@property (weak) SORemoteExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)exportedInterface;
- (void)loadView;
- (id)remoteViewControllerInterface;
- (void)connectToContextWithSessionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_connectChildView;

@end
