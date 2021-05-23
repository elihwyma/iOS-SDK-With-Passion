/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface EKEventDetailTwoValueCell : EKEventDetailCell

{
    int _style;
    UILabel *_titleView;
    UILabel *_valueView;
    UILabel *_value2View;
    int _twoValueCellStyle;
}

@property (nonatomic, readonly) unsigned int visibleItems;

- (_Bool)update;
- (void)layoutSubviews;
- (id)titleView;
- (id)valueView;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (id)value2View;
- (double)_layoutForWidth:(double)arg1;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 platformStyle:(int)arg3;
- (int)twoValueCellStyle;

@end
