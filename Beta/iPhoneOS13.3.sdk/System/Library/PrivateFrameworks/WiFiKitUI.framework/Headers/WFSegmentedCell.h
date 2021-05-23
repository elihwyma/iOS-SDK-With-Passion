/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewCell.h>

@class UISegmentedControl;

@interface WFSegmentedCell : UITableViewCell

{
    UISegmentedControl *_segmentedControl;
    CDUnknownBlockType _handler;
}

@property (weak, nonatomic) UISegmentedControl *segmentedControl;
@property (copy) CDUnknownBlockType handler;

- (void)addSubview:(id)arg1;
- (void)awakeFromNib;
- (void)_segmentedControlDidChange:(id)arg1;

@end
