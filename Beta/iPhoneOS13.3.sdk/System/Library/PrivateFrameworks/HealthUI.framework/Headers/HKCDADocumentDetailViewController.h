/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIViewController.h>

@class HKBarButtonItemControl, HKCDADocumentReportViewController, HKLargePlainTextViewController, UIBarButtonItem, UIStackView, _HKReportSegmentControl;

@interface HKCDADocumentDetailViewController : UIViewController

{
    UIStackView *_stackView;
    _HKReportSegmentControl *_reportSegmentControl;
    HKCDADocumentReportViewController *_formattedReportController;
    HKLargePlainTextViewController *_plainTextReportController;
    UIBarButtonItem *_searchButton;
    HKBarButtonItemControl *_searchInSegmentControl;
}

@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) _HKReportSegmentControl *reportSegmentControl;
@property (nonatomic, readonly) HKCDADocumentReportViewController *formattedReportController;
@property (nonatomic, readonly) HKLargePlainTextViewController *plainTextReportController;
@property (nonatomic, readonly) UIBarButtonItem *searchButton;
@property (nonatomic, readonly) HKBarButtonItemControl *searchInSegmentControl;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithReportData:(id)arg1;
- (void)searchButtonAction:(id)arg1;
- (void)changeReportDisplayed:(id)arg1;
- (void)_replaceLastArrangedViewWith:(id)arg1;

@end
