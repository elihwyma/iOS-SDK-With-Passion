/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EKEventAttachmentDetailItem : EKEventDetailItem

{
    NSArray *_cellControllers;
    _Bool _visibilityChanged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (void)_cleanUpCellControllers;
- (void)_setUpCellControllers;
- (_Bool)detailItemVisibilityChanged;

@end
