/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionViewCell.h>

@class CKAvatarView, CKConversation, NSString, UILabel;

@interface CKConversationSearchResultCell : UICollectionViewCell

{
    _Bool editing;
    CKAvatarView *_avatarView;
    UILabel *_nameLabel;
    CKConversation *_conversation;
    struct UIEdgeInsets marginInsets;
}

@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) CKConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets marginInsets;
@property (nonatomic, getter=isEditing) _Bool editing;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (void)_configureAvatarViewForConversation:(id)arg1;
- (void)_configureNameLabelForConversation:(id)arg1 searchText:(id)arg2;

@end
