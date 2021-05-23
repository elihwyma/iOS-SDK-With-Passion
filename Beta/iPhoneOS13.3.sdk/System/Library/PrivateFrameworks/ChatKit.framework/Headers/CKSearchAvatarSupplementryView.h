/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionReusableView.h>

@class CKAvatarView, CKSpotlightQueryResult, CNContact, NSString;

@interface CKSearchAvatarSupplementryView : UICollectionReusableView

{
    unsigned long long _parentContentType;
    CKSpotlightQueryResult *_associatedResult;
    CNContact *_contact;
    CKAvatarView *_avatarView;
    struct UIEdgeInsets marginInsets;
}

@property (retain, nonatomic) CKAvatarView *avatarView;
@property (nonatomic) unsigned long long parentContentType;
@property (retain, nonatomic) CKSpotlightQueryResult *associatedResult;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets marginInsets;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;
+ (double)desiredZPosition;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateVisibilityIfNeeded;
- (void)_parentPreviewDidChange:(id)arg1;

@end
