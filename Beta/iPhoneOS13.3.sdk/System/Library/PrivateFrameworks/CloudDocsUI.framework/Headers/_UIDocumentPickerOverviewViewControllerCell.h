/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerOverviewViewControllerCell : UITableViewCell

{
    UIImageView *_iconView;
    UIImageView *_newlyAddedView;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *newlyAddedView;
@property (nonatomic) _Bool showNewlyAdded;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_dotImage;

@end
