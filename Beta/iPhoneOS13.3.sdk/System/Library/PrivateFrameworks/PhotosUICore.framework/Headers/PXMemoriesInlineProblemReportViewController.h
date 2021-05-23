/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PHMemory, UIActivityIndicatorView, UILabel;

@interface PXMemoriesInlineProblemReportViewController : UIViewController

{
    _Bool _didDismissMailWindow;
    PHMemory *_memory;
    NSArray *_features;
    UILabel *_reportCaptureInProgressLabel;
    UIActivityIndicatorView *_reportCaptureInProgressActivityIndicator;
}

@property (retain, nonatomic) PHMemory *memory;
@property (retain, nonatomic) NSArray *features;
@property (retain, nonatomic) UILabel *reportCaptureInProgressLabel;
@property (retain, nonatomic) UIActivityIndicatorView *reportCaptureInProgressActivityIndicator;
@property (nonatomic) _Bool didDismissMailWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)initWithMemory:(id)arg1 features:(id)arg2;
- (void)_showMailComposeWindow;

@end
