/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@protocol PUAlbumListTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface PUAlbumListTableViewCell : UITableViewCell

{
    id <PUAlbumListTableViewCellDelegate> _stateChangeDelegate;
}

@property (weak, nonatomic) id <PUAlbumListTableViewCellDelegate> stateChangeDelegate;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;

@end
