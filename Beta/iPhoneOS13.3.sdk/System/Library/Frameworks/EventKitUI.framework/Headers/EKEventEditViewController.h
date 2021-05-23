/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UINavigationController.h>

@class EKEvent, EKEventEditor, EKEventStore, NSString, UIColor;

@protocol EKEventEditViewDelegate;

@interface EKEventEditViewController : UINavigationController

{
    EKEventStore *_store;
    EKEvent *_event;
    NSString *_eventId;
    _Bool _completedWithAction;
    int _transitionForModalViewPresentation;
    id <EKEventEditViewDelegate> _editViewDelegate;
    EKEventEditor *_editor;
    EKEventEditViewController *_strongSelf;
    NSString *_suggestionKey;
}

@property (retain, nonatomic) EKEventEditor *editor;
@property (retain, nonatomic) EKEventEditViewController *strongSelf;
@property (nonatomic) _Bool showAttachments;
@property (nonatomic) _Bool scrollToNotes;
@property (nonatomic) _Bool canHideDoneAndCancelButtons;
@property (retain, nonatomic) UIColor *editorBackgroundColor;
@property (nonatomic) int transitionForModalViewPresentation;
@property (nonatomic) double editorNavBarLeftContentInset;
@property (nonatomic) double editorNavBarRightContentInset;
@property (nonatomic) _Bool timeImplicitlySet;
@property (retain, nonatomic) NSString *suggestionKey;
@property (nonatomic, readonly) _Bool displayingRootView;
@property (weak, nonatomic) id <EKEventEditViewDelegate> editViewDelegate;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setDefaultDatesForEvent:(id)arg1;
+ (id)eventEditViewControllerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (id)_leftBarButtonItem;
- (_Bool)isModalInPresentation;
- (_Bool)hasUnsavedChanges;
- (void)_storeChanged:(id)arg1;
- (void)editor:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)refreshStartAndEndDates;
- (_Bool)saveWithSpan:(long long)arg1 animated:(_Bool)arg2;
- (void)cancelEditingWithDelegateNotification:(_Bool)arg1 forceCancel:(_Bool)arg2;
- (void)handleTapOutside;
- (void)completeAndSave;
- (_Bool)willPresentDialogOnSave;
- (id)_confirmDismissAlertExplanationText;
- (id)confirmDismissAlertController;
- (void)cancelEditing;
- (_Bool)editor:(id)arg1 shouldCompleteWithAction:(long long)arg2;
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (void)focusAndSelectTitle;
- (void)focusAndSelectStartDate;
- (void)focusTitle;
- (id)_eventEditorForTestingOnly;

@end
