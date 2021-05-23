/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewCell.h>

@protocol PXNavigationListItem;

@interface PXNavigationListCell : UITableViewCell

{
    _Bool _enabled;
    id <PXNavigationListItem> _listItem;
}

@property (retain, nonatomic) id <PXNavigationListItem> listItem;
@property (nonatomic) _Bool enabled;

+ (id)cellFont;
+ (id)_symbolConfigurationForFont:(id)arg1;

- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateFonts;
- (void)_updateCellStyle;
- (id)_currentCellColor;

@end
