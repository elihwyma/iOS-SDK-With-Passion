/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class CNAvatarView;

__attribute__((visibility("hidden")))
@interface CKSharedContactsCollectionViewCell : CKSharedContentsCollectionViewCell

{
    CNAvatarView *_avatarView;
}

@property (retain, nonatomic) CNAvatarView *avatarView;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)configureWithContact:(id)arg1;

@end
