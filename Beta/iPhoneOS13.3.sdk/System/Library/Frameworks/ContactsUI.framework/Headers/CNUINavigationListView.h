/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableView.h>

@class NSIndexPath, NSString, UIGestureRecognizer, UILongPressGestureRecognizer, UISelectionFeedbackGenerator, _CNUINavigationListViewPermissiveGestureRecognizerDelegate;

@protocol CNUINavigationListViewDataSource, CNUINavigationListViewDelegate;

__attribute__((visibility("hidden")))
@interface CNUINavigationListView : UITableView

{
    id <CNUINavigationListViewDataSource> _navigationListViewDataSource;
    id <CNUINavigationListViewDelegate> _navigationListViewDelegate;
    UILongPressGestureRecognizer *_selectionGestureRecognizer;
    UIGestureRecognizer *_additionalSelectionGestureRecognizer;
    UIGestureRecognizer *_pressGestureRecognizer;
    NSIndexPath *_trackedElementIndexPath;
    UISelectionFeedbackGenerator *_retargetBehavior;
    _CNUINavigationListViewPermissiveGestureRecognizerDelegate *_selectionGestureRecognizerDelegate;
    struct CGPoint _gestureStartLocation;
    struct CGPoint _gestureStartLocationInWindow;
}

@property (retain, nonatomic) UILongPressGestureRecognizer *selectionGestureRecognizer;
@property (retain, nonatomic) UIGestureRecognizer *additionalSelectionGestureRecognizer;
@property (retain, nonatomic) UIGestureRecognizer *pressGestureRecognizer;
@property (retain, nonatomic) NSIndexPath *trackedElementIndexPath;
@property (nonatomic) struct CGPoint gestureStartLocation;
@property (nonatomic) struct CGPoint gestureStartLocationInWindow;
@property (retain, nonatomic) UISelectionFeedbackGenerator *retargetBehavior;
@property (retain, nonatomic) _CNUINavigationListViewPermissiveGestureRecognizerDelegate *selectionGestureRecognizerDelegate;
@property (weak, nonatomic) id <CNUINavigationListViewDataSource> navigationListViewDataSource;
@property (weak, nonatomic) id <CNUINavigationListViewDelegate> navigationListViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)disableHeaderAccessibilityElements;

- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)willMoveToWindow:(id)arg1;
- (id)dequeueNavigationListViewCell;
- (id)dequeueDetailNavigationListViewCell;
- (id)disclosureNavigationListViewCellForRowAtIndexPath:(id)arg1;
- (id)elementAtLocation:(struct CGPoint)arg1;
- (void)handleSelectionGestureRecognizerUpdate:(id)arg1;
- (void)handlePressSelection;
- (void)handlePanGestureRecognizerUpdate:(id)arg1;
- (void)stopTrackingElementAtIndexPath:(id)arg1;
- (void)startTrackingElementAtIndexPath:(id)arg1;
- (_Bool)location:(struct CGPoint)arg1 isInAccessoryControlTouchArea:(id)arg2;
- (void)updateCellAccessoryControlState:(id)arg1 withTrackedLocation:(struct CGPoint)arg2;
- (void)notifyDelegateWithSelectionEventAtPoint:(struct CGPoint)arg1 trackedElementIndexPath:(id)arg2;
- (void)notifyDelegateWithSelectionEventAtIndexPath:(id)arg1;
- (void)startTrackingSelectionFromGestureRecognizer:(id)arg1;
- (void)clearAdditionalSelectionGestureRecognizer;

@end
