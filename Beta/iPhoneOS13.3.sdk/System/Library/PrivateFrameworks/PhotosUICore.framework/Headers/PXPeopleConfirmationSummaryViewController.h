/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UILabel;

@protocol PXPeopleSummaryDelegate;

@interface PXPeopleConfirmationSummaryViewController : UIViewController

{
    id <PXPeopleSummaryDelegate> _delegate;
    NSLayoutConstraint *_labelSpacingConstraint;
    UILabel *_summaryLabel;
}

@property (retain) NSLayoutConstraint *labelSpacingConstraint;
@property (retain) UILabel *summaryLabel;
@property (weak) id <PXPeopleSummaryDelegate> delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateDynamicTypeSpacing;

@end
