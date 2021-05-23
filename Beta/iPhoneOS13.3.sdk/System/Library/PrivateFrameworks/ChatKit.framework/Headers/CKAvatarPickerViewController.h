/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKAvatarPickerLayout, CKAvatarTitleCollectionReusableView, CKConversation, CNContactStore, NSMapTable, NSString, UICollectionView;

@interface CKAvatarPickerViewController : UIViewController <Swift>

{
    CKAvatarTitleCollectionReusableView *_titleView;
    long long _indicatorType;
    UICollectionView *_collectionView;
    CKAvatarPickerLayout *_layout;
    CKConversation *_conversation;
    CNContactStore *_suggestionsEnabledContactStore;
    NSMapTable *_visibleTitleViews;
    long long _style;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CKAvatarPickerLayout *layout;
@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) CNContactStore *suggestionsEnabledContactStore;
@property (retain, nonatomic) CKAvatarTitleCollectionReusableView *titleView;
@property (retain, nonatomic) NSMapTable *visibleTitleViews;
@property (nonatomic) long long style;
@property (nonatomic, readonly) struct CGRect titleViewFrame;
@property (nonatomic) long long indicatorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)hasTitle;
- (void)_setTitle:(id)arg1 animated:(_Bool)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (void)_animateOutTitleView;
- (void)_animateInTitleView;
- (void)updateContentsForConversation:(id)arg1;
- (void)_chatPropertiesChanged:(id)arg1;
- (void)setAvatarPickerActive:(_Bool)arg1;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)arg1;
- (void)_handleAddressBookChange:(id)arg1;
- (void)_handleConversationRecipientsDidChange:(id)arg1;
- (void)_handleGroupNameChange:(id)arg1;
- (void)_handleConversationIsFilteredChange:(id)arg1;
- (_Bool)_shouldUseBanner;
- (id)avatarDisplayName;
- (id)_titleSupplementaryViewAtIndexPath:(id)arg1;
- (id)_cutoutSupplementaryViewAtIndexPath:(id)arg1;
- (_Bool)chatIsReportedAsSpam;
- (int)chatWasDetectedAsSMSSpam;
- (_Bool)avatarPickerLayoutShouldShowTitle:(id)arg1;

@end
