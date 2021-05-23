/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class HUItemTableSectionHeaderFooterView, NSString;

@interface HUSectionHeaderFooterCell : UITableViewCell

{
    HUItemTableSectionHeaderFooterView *_headerFooterView;
}

@property (nonatomic, readonly) HUItemTableSectionHeaderFooterView *headerFooterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool prefersSeparatorsHidden;

- (void)prepareForReuse;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
