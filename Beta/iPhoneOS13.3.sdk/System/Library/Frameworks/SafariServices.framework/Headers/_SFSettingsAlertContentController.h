/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, NSMutableIndexSet, NSString, UIControl, UIScrollView, UISelectionFeedbackGenerator, UIStackView, UIView, _SFSettingsAlertItem;

__attribute__((visibility("hidden")))
@interface _SFSettingsAlertContentController : UIViewController

{
    NSMutableArray *_items;
    NSMutableIndexSet *_groupStartIndices;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    NSArray *_focusedItemConstraints;
    NSArray *_stackViewTopBottomConstraints;
    UIView *_lastViewForAlignment;
    UIControl *_controlHighlightedForPan;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    _SFSettingsAlertItem *_focusedItem;
}

@property (nonatomic, readonly) NSArray *items;
@property (retain, nonatomic) _SFSettingsAlertItem *focusedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addItem:(id)arg1;
- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_alertController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updatePreferredContentSize;
- (void)addDivider;
- (void)_updateSeparators;
- (void)_addGroupSeparatorIfNeededBeforeItemAtIndex:(unsigned long long)arg1;
- (void)_addViewForItem:(id)arg1;
- (void)_panRecognized:(id)arg1;
- (void)_updateFocusedItemConstraints;
- (id)_createViewForItem:(id)arg1;
- (void)_alignButtonImageView:(id)arg1;
- (void)_tappedItemView:(id)arg1;
- (void)_stepperValueChanged:(id)arg1;

@end
