/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableDictionary, NSString, UITableViewController, UITextView;

@protocol PXFeedbackFormDelegate;

@interface PXFeedbackFormUIViewController : UIViewController

{
    _Bool _userLikedIt;
    _Bool _wantsCustomFeedbackSection;
    _Bool _wantsPositiveFeedbackSection;
    NSArray *_positiveFeedbackKeys;
    NSMutableDictionary *_positiveFeedbackValues;
    NSArray *_negativeFeedbackKeys;
    NSMutableDictionary *_negativeFeedbackValues;
    UITextView *_customFeedbackTextView;
    UITableViewController *_tableViewController;
    id <PXFeedbackFormDelegate> _delegate;
}

@property (retain, nonatomic) UITableViewController *tableViewController;
@property (retain, nonatomic) id <PXFeedbackFormDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelFeedback:(id)arg1;
- (void)finishWithSuccess:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1 positiveKeys:(id)arg2 negativeKeys:(id)arg3 wantsCustomFeedbackSection:(_Bool)arg4;
- (void)sendFeedback:(id)arg1;
- (void)_handleDoneButtonWasPressedOnCustomFeedbackView;
- (_Bool)_isSelectedRow:(id)arg1 inSection:(long long)arg2;
- (void)_setSelectionStateForKey:(id)arg1 inSection:(long long)arg2 to:(_Bool)arg3;
- (id)_feedbackKeyForIndexPath:(id)arg1;
- (void)_markCell:(id)arg1 asSelected:(_Bool)arg2;
- (long long)_feedbackFormSectionForSectionIndex:(long long)arg1;

@end
