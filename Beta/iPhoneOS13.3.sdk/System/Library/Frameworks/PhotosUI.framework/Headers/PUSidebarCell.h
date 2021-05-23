/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface PUSidebarCell : UITableViewCell

{
    UIImageView *_inlineDisclosureImageView;
    _Bool _inlineDisclosureExpanded;
}

@property (nonatomic) _Bool inlineDisclosureEnabled;
@property (nonatomic) _Bool inlineDisclosureExpanded;

- (void)layoutSubviews;

@end
