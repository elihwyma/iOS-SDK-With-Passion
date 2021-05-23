/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIViewController.h>

@class CRCameraReader, NSString, SUCreditCardReaderInfoView, SUCreditCardReaderOutput;

@interface SUCreditCardReaderViewController : UIViewController

{
    CRCameraReader *cameraController;
    SUCreditCardReaderInfoView *captureInfoView;
    SUCreditCardReaderOutput *pendingOutput;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)cameraSupported;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_cancelButtonPressed;
- (void)didReceiveMemoryWarning;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)_returnCameraOutput:(id)arg1 error:(id)arg2;

@end
