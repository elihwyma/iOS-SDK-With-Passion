/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <VisionKit/VNDocumentCameraViewController.h>

@class BKSAccelerometer, DCDocumentCameraRemoteViewController, DCDocumentCameraViewServiceSession, NSString;

@protocol DCDocumentCameraViewServiceViewController;

__attribute__((visibility("hidden")))
@interface VNDocumentCameraViewController_ViewService : VNDocumentCameraViewController

{
    DCDocumentCameraViewServiceSession *_viewServiceSession;
    BKSAccelerometer *_accelerometer;
}

@property (nonatomic, readonly, getter=viewServiceViewController) id <DCDocumentCameraViewServiceViewController> viewServiceViewController;
@property (nonatomic, readonly, getter=remoteViewController) DCDocumentCameraRemoteViewController *remoteViewController;
@property (retain, nonatomic) DCDocumentCameraViewServiceSession *viewServiceSession;
@property (retain, nonatomic) BKSAccelerometer *accelerometer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)dismiss;
- (void)viewDidLoad;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)didCancel:(id)arg1;
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;
- (void)didFinishWithDocumentInfoCollection:(id)arg1;
- (id)castedChildViewController;

@end
