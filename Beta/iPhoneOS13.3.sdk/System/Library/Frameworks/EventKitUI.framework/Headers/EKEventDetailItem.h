/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKEvent, EKEventStore, EKUIRecurrenceAlertController, NSString, UIViewController;

@protocol EKEditItemViewControllerProtocol, EKEventDetailItemDelegate;

__attribute__((visibility("hidden")))
@interface EKEventDetailItem : NSObject

{
    EKEventStore *_store;
    EKEvent *_event;
    EKEvent *_lastEventUpdated;
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    _Bool _allowsEditing;
    _Bool _shouldIndent;
    int _cellPosition;
    id <EKEventDetailItemDelegate> _delegate;
    UIViewController *_viewControllerToPresentFrom;
}

@property (weak, nonatomic) id <EKEventDetailItemDelegate> delegate;
@property (nonatomic) _Bool allowsEditing;
@property (nonatomic) int cellPosition;
@property (nonatomic) _Bool shouldIndent;
@property (retain, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UIViewController *viewControllerToPresentFrom;
@property (nonatomic, readonly) _Bool requiresLayoutForSubitemCount;
@property (nonatomic, readonly) unsigned long long maximumNumberOfSubItems;
@property (nonatomic, readonly) _Bool detailItemVisibilityChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)notifySubitemDidSave:(unsigned long long)arg1;
- (void)notifyDidStartEditing;
- (void)notifyDidEndEditing;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (id)editItemEventToDetach;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)refreshCopiedEvents;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2;
- (_Bool)isPrivateEvent;
- (_Bool)isReadOnlyDelegateCalendar;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)layoutCellsForWidth:(double)arg1 position:(int)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2;
- (void)eventViewController:(id)arg1 tableViewDidScroll:(id)arg2;
- (void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned long long)arg2;

@end
