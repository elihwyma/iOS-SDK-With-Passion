/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class EKEventMapDetailItem;

@interface EKEventMapCell : UITableViewCell

{
    _Bool _currentlyLoading;
    _Bool _mapViewSetup;
    EKEventMapDetailItem *_detailItem;
}

@property (weak, nonatomic) EKEventMapDetailItem *detailItem;
@property (nonatomic) _Bool currentlyLoading;
@property (nonatomic) _Bool mapViewSetup;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)_drawContentInRect:(struct CGRect)arg1 selected:(_Bool)arg2;
- (void)_drawSeparatorInRect:(struct CGRect)arg1;

@end
