/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerManagementViewControllerCell : UITableViewCell

{
    UIImageView *_newlyAddedView;
}

@property (retain, nonatomic) UIImageView *newlyAddedView;
@property (nonatomic) _Bool showNewlyAdded;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_dotImage;

@end
