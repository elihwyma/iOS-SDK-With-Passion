/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class PUPhotoCommentEntryView;

__attribute__((visibility("hidden")))
@interface PUPhotoPostCommentTextEntryCell : UITableViewCell

{
    PUPhotoCommentEntryView *_textEntryView;
}

@property (retain, nonatomic) PUPhotoCommentEntryView *textEntryView;

+ (void)preferredContentSizeDidChange;
+ (double)heightForWidth:(double)arg1;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
