/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIAlertController.h>

@class NSString, SFSearchResult, UIViewController;

@protocol SFFeedbackListener;

@interface SearchUIGradingFeedbackViewController : UIAlertController

{
    SFSearchResult *_result;
    UIViewController *_viewControllerForPresenting;
    id <SFFeedbackListener> _feedbackDelegate;
}

@property (retain, nonatomic) SFSearchResult *result;
@property (retain, nonatomic) UIViewController *viewControllerForPresenting;
@property (weak, nonatomic) id <SFFeedbackListener> feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)addActionForGrade:(unsigned long long)arg1 title:(id)arg2;
- (id)initWithResult:(id)arg1 feedbackDelegate:(id)arg2;

@end
