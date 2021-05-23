/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@protocol ARViewerHostProtocol;

@interface _ARViewerRemoteViewController : _UIRemoteViewController

{
    id <ARViewerHostProtocol> _arviewerDelegate;
}

@property (retain) id <ARViewerHostProtocol> arviewerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (oneway void)setStatusBarOrientation:(long long)arg1;
- (oneway void)isIgnoringInteractionEvents:(CDUnknownBlockType)arg1;
- (oneway void)statusBarOrientation:(CDUnknownBlockType)arg1;

@end
