/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class CKAvatarView;

__attribute__((visibility("hidden")))
@interface CKAvatarCollectionViewCell : UICollectionViewCell

{
    CKAvatarView *_avatarView;
}

@property (retain, nonatomic) CKAvatarView *avatarView;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithEntity:(id)arg1;

@end
