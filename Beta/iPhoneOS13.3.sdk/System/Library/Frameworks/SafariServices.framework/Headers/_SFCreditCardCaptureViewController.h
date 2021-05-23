/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UINavigationController.h>

@class CRCameraReader, NSString, WBSCreditCardData;

@protocol _SFCreditCardCaptureViewControllerDelegate;

@interface _SFCreditCardCaptureViewController : UINavigationController

{
    CRCameraReader *_reader;
    WBSCreditCardData *_receivedCardData;
}

@property (weak, nonatomic) id <_SFCreditCardCaptureViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canCapture;

- (id)init;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_cancel:(id)arg1;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;

@end
