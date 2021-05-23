/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, PXPeopleNamePickerResultsTableViewController, PXPeopleNamePickerTitleView;

@protocol PXPeopleNamePickerViewControllerDelegate;

@interface PXPeopleNamePickerViewController : UIViewController <Swift>

{
    PXPeopleNamePickerTitleView *_titleView;
    id <PXPeopleNamePickerViewControllerDelegate> _delegate;
    NSArray *_savedRightBarItems;
    double _yOffset;
    NSLayoutConstraint *_resultsViewBottomConstraint;
    PXPeopleNamePickerResultsTableViewController *_resultsController;
}

@property (retain, nonatomic) NSArray *savedRightBarItems;
@property (nonatomic) double yOffset;
@property (retain, nonatomic) NSLayoutConstraint *resultsViewBottomConstraint;
@property (retain, nonatomic) PXPeopleNamePickerResultsTableViewController *resultsController;
@property (nonatomic, readonly) PXPeopleNamePickerTitleView *titleView;
@property (weak, nonatomic) id <PXPeopleNamePickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_applicationDidEnterBackground;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)initWithPerson:(id)arg1;
- (void)adjustForAccessoryViewYOffset:(double)arg1;
- (void)endNamingSession;
- (double)_titleViewMaxWidthForEditing:(_Bool)arg1;
- (void)_showResultsView;
- (void)_hideResultsView;
- (void)_changePlaceholderTextOfTextField:(id)arg1 toColor:(id)arg2;

@end
