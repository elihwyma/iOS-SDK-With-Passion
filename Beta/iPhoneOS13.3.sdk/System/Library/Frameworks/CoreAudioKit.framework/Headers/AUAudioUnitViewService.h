/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <UIKit/UIViewController.h>

@class AURemoteExtensionContext, NSString;

@interface AUAudioUnitViewService : UIViewController

{
    AURemoteExtensionContext *_extensionContext;
}

@property AURemoteExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)exportedInterface;
- (void)loadView;
- (void)connectToContextWithSessionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_connectChildView:(CDUnknownBlockType)arg1;
- (id)remoteViewControllerInterface;

@end
