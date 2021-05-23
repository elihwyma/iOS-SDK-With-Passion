/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKEvent, EKEventStore, EKEventViewController, EKICSPreviewModel, NSString, UIViewController;

@protocol EKICSPreviewControllerDelegate;

@interface EKICSPreviewController : NSObject

{
    EKICSPreviewModel *_model;
    EKEventStore *_eventStore;
    EKEventViewController *_currentImport;
    UIViewController *_contentViewController;
    _Bool _importing;
    _Bool _hasCustomCancelButton;
    long long _cancelButtonType;
    EKEvent *_eventFromUID;
    _Bool _allowsImport;
    _Bool _allowsEditing;
    _Bool _allowsSubitems;
    _Bool _allowsInvalidProperties;
    _Bool _allowsToDos;
    int _eventUID;
    id <EKICSPreviewControllerDelegate> _previewDelegate;
    unsigned long long _actionsState;
}

@property (weak, nonatomic) id <EKICSPreviewControllerDelegate> previewDelegate;
@property (nonatomic) _Bool allowsImport;
@property (nonatomic) _Bool allowsEditing;
@property (nonatomic) _Bool allowsSubitems;
@property (nonatomic) unsigned long long actionsState;
@property (nonatomic) _Bool allowsInvalidProperties;
@property (nonatomic) _Bool allowsToDos;
@property (nonatomic, readonly) _Bool isImporting;
@property (nonatomic, readonly) int eventUID;
@property (nonatomic, readonly) unsigned long long totalEventCount;
@property (nonatomic, readonly) unsigned long long unimportedEventCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)viewController;
- (void)icsPreviewListControllerDidRequestImportAll:(id)arg1;
- (void)icsPreviewListController:(id)arg1 didSelectEvent:(id)arg2;
- (void)importAllIntoCalendar:(id)arg1;
- (void)calendarChooserDidFinish:(id)arg1;
- (void)calendarChooserDidCancel:(id)arg1;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;
- (void)_databaseChanged:(id)arg1;
- (_Bool)_anyCalendarsSupportingImport;
- (id)detailViewForEvent:(id)arg1 eventInRealStore:(_Bool)arg2 isUpdate:(_Bool)arg3;
- (void)_createCancelButtonWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)importAllRequested:(id)arg1;
- (id)_defaultCalendarForImport;
- (_Bool)_calendarSupportsImport:(id)arg1;
- (void)_enumerateSupportedCalendarsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)_countOfCalendarsSupportingImport;
- (_Bool)_shouldShowCalendarChooser;
- (void)presentCalendarChooserForController:(id)arg1;
- (void)importEventFromController:(id)arg1 intoCalendar:(id)arg2;
- (void)_updateCancelButton;
- (void)handleDidImportEvent:(id)arg1 fromController:(id)arg2 intoCalendar:(id)arg3;
- (void)handleImportEventError;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventViewControllerDidRequestAddToCalendar:(id)arg1;
- (_Bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (_Bool)eventViewControllerShouldDismissSelf:(id)arg1;
- (id)initWithURL:(id)arg1 eventStore:(id)arg2;
- (id)initWithData:(id)arg1 eventStore:(id)arg2;
- (id)initWithEventUID:(int)arg1 eventStore:(id)arg2;
- (id)singleExistingEventUniqueID;
- (id)popoverContentController;
- (void)setCancelButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)removeCancelButton;

@end
