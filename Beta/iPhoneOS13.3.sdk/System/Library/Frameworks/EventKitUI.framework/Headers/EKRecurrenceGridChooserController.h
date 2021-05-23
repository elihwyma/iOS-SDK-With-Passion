/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKRecurrenceChooserController.h>

@class EKUIDividedGridViewTableViewCell, NSString;

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController

{
    EKUIDividedGridViewTableViewCell *_tableViewCell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForDisplay;
- (id)tableViewCell;
- (void)refreshCells;
- (id)allCells;
- (id)cellLabels;
- (long long)gridViewType;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;
- (id)cellForRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (_Bool)drawBackgroundForRow:(long long)arg1;
- (void)dividedGridViewControllerDidLayout:(id)arg1;
- (void)dividedGridViewController:(id)arg1 didSelectCell:(id)arg2 atIndex:(long long)arg3;

@end
