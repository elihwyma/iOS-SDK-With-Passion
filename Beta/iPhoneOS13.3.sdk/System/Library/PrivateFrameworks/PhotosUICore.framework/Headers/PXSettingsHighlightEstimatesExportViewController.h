/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, UITextView;

@interface PXSettingsHighlightEstimatesExportViewController : UIViewController

{
    _Bool _exportHighlightEstimatesOnViewDidAppear;
    UITextView *_textView;
    NSDictionary *_highlightEstimatesDictionary;
}

@property _Bool exportHighlightEstimatesOnViewDidAppear;
@property (retain) UITextView *textView;
@property (retain) NSDictionary *highlightEstimatesDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_fetchHighlightEstimatesDictionary;
- (void)_sendEmail:(id)arg1;

@end
