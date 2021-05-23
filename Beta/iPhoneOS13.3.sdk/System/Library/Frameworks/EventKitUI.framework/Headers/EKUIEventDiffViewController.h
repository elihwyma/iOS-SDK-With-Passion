/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventViewController.h>

@class EKEvent, NSMutableArray;

@protocol EKEditItemViewControllerDelegate;

@interface EKUIEventDiffViewController : EKEventViewController

{
    NSMutableArray *_items;
    id <EKEditItemViewControllerDelegate> _editDelegate;
    EKEvent *_originalEvent;
}

@property (retain) EKEvent *originalEvent;
@property (weak, nonatomic) id <EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) _Bool presentModally;
@property (nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) _Bool useCustomBackButton;

- (id)title;
- (id)_items;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)apply;
- (void)editButtonPressed;
- (id)_statusButtons;
- (_Bool)shouldShowEditButtonInline;
- (id)initWithOriginalEvent:(id)arg1 newEvent:(id)arg2;
- (void)_updateNavBarAnimated:(_Bool)arg1;

@end
