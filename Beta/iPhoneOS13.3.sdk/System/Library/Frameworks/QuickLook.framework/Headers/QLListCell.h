/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UITableViewCell.h>

@class NSLayoutConstraint, NSString, QLItem, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QLListCell : UITableViewCell

{
    NSLayoutConstraint *_leftConstraint;
    UILabel *_title;
    UILabel *_subtitle;
    UIImageView *_thumbnailView;
    long long _loadingID;
    QLItem *_item;
    NSString *_folderName;
    long long _fileDepthLevel;
    NSString *_subtitleString;
    UIImage *_thumbnail;
    unsigned long long _row;
}

@property (retain, nonatomic) QLItem *item;
@property (retain, nonatomic) NSString *folderName;
@property (nonatomic) long long fileDepthLevel;
@property (copy, nonatomic) NSString *subtitleString;
@property (retain, nonatomic) UIImage *thumbnail;
@property unsigned long long row;

+ (id)listCell;

- (void)prepareForReuse;
- (void)awakeFromNib;
- (id)_folderImage;

@end
