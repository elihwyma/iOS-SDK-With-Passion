/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

#import <ContactsUI/Swift-Protocol.h>

@class CNContact, CNMeCardSharingOnboardingAvatarCarouselItem, CNMeCardSharingOnboardingAvatarCarouselLayout, CNSharingProfileLogger, NSArray, NSString, PRMonogramColor, UICollectionView;

@protocol AVTAvatarRecord, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselViewController : UIViewController <Swift>

{
    id <CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> _delegate;
    PRMonogramColor *_monogramColor;
    NSArray *_items;
    UICollectionView *_collectionView;
    CNMeCardSharingOnboardingAvatarCarouselLayout *_layout;
    id <AVTAvatarRecord> _avatarRecord;
    CNContact *_contact;
    CNMeCardSharingOnboardingAvatarCarouselItem *_photoPickerItem;
    CNMeCardSharingOnboardingAvatarCarouselItem *_animojiItem;
    CNMeCardSharingOnboardingAvatarCarouselItem *_photoItem;
    CNMeCardSharingOnboardingAvatarCarouselItem *_monogramItem;
    CNSharingProfileLogger *_logger;
}

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselLayout *layout;
@property (retain, nonatomic) id <AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoPickerItem;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *animojiItem;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoItem;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *monogramItem;
@property (nonatomic, readonly) CNSharingProfileLogger *logger;
@property (weak, nonatomic) id <CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> delegate;
@property (nonatomic, readonly) CNMeCardSharingOnboardingAvatarCarouselItem *selectedItem;
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)buildItems;
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3;
- (id)itemsForNoAnimojiAndNoPhoto;
- (id)standardItems;
- (void)reloadForUpdatedContactPhoto;
- (void)reloadForUpdatedMonogram;
- (id)contactImageItemWithContact:(id)arg1;
- (id)monogramImageItemWithContact:(id)arg1;
- (id)animojiItemWithRecord:(id)arg1;
- (void)notifyDelegateOfUpdateToCenterMostItem;
- (void)scrollToItemAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;

@end
