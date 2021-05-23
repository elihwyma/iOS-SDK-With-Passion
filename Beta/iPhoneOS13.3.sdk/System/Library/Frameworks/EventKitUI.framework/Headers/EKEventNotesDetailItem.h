/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

@protocol EKEventDetailNotesCellDelegate;

__attribute__((visibility("hidden")))
@interface EKEventNotesDetailItem : EKEventDetailItem

{
    UITableViewCell *_cell;
    UITableViewCell *_moreButtonCell;
    _Bool _cellNeedsUpdate;
    id <EKEventDetailNotesCellDelegate> _noteDelegate;
}

@property (weak, nonatomic) id <EKEventDetailNotesCellDelegate> noteDelegate;

- (void)reset;
- (void)setCellPosition:(int)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)_updateCellIfNeeded;
- (unsigned long long)numberOfSubitems;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)requiresLayoutForSubitemCount;
- (unsigned long long)maximumNumberOfSubItems;

@end
