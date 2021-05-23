/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <UIKit/UIViewController.h>

@class NSString;

@protocol ARViewerVendorProtocol;

@interface _ARViewerViewController : UIViewController

{
    id <ARViewerVendorProtocol> _arviewerDelegate;
}

@property (retain) id <ARViewerVendorProtocol> arviewerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (oneway _Bool)isIgnoringInteractionEvents;
- (oneway void)setStatusBarOrientation:(long long)arg1;
- (oneway long long)statusBarOrientation;

@end
