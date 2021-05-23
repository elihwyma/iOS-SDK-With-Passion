/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImage;

@protocol PXDisplayCollection;

__attribute__((visibility("hidden")))
@interface PUImportAddToAlbumsPickerCell : UITableViewCell

{
    _Bool _isPerformingUpdate;
    _Bool _showingSelectionMark;
    unsigned long long _type;
    id <PXDisplayCollection> _collection;
    UIImage *_thumbail;
    UIButton *_checkMarkButton;
}

@property (weak, nonatomic) UIButton *checkMarkButton;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) id <PXDisplayCollection> collection;
@property (nonatomic, readonly) UIImage *thumbail;

- (void)setType:(unsigned long long)arg1;
- (void)prepareForReuse;
- (_Bool)isSelectable;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)didAddSubview:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setThumbnail:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (void)setCollection:(id)arg1;
- (void)_configureCell;

@end
