/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventEditItem.h>

@class UITableViewCell, UIView;

@interface EKEventDeleteButtonEditItem : EKEventEditItem

{
    UITableViewCell *_cell;
    id _deleteButtonTarget;
    SEL _deleteButtonAction;
}

@property (nonatomic, readonly) UIView *sourceViewForPopover;

- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2;

@end
