/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewController.h>

@class UIBlurEffect;

@interface _SFPopoverSizingTableViewController : UITableViewController

{
    UIBlurEffect *_backgroundBlurEffect;
    _Bool _didUpdateTranslucentAppearanceAtLeastOnce;
    _Bool _didHaveTranslucentAppearance;
    _Bool _updatePreferredContentSizeAfterNextLayout;
    double _preferredContentWidth;
}

@property (nonatomic, readonly) long long minimumNumberOfRows;
@property (nonatomic, readonly) long long maximumNumberOfRows;
@property (nonatomic) double preferredContentWidth;
@property (nonatomic, readonly) _Bool hasTranslucentAppearance;

+ (void)initialize;
+ (id)tableViewCellForSizeEstimation;

- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)keyCommands;
- (id)_backgroundBlurEffect;
- (double)tableViewSpacingForExtraSeparators:(id)arg1;
- (void)updatePreferredContentSize;
- (void)_updateTranslucentAppearanceIfNeeded;
- (_Bool)_needsTranslucentAppearanceUpdate;
- (void)updateTranslucentAppearance;
- (id)backgroundColorUsingTranslucentAppearance:(_Bool)arg1;
- (void)cancelPopoverKeyPressed;

@end
