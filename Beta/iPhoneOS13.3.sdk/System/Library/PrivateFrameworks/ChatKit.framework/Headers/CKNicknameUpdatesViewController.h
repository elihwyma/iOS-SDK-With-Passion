/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKNicknameUpdatesCollectionView, NSArray, NSString, UICollectionViewCompositionalLayout, _UICollectionViewDiffableDataSource;

@protocol CKNicknameUpdatesViewControllerDelegate;

@interface CKNicknameUpdatesViewController : UIViewController <Swift>

{
    id <CKNicknameUpdatesViewControllerDelegate> _delegate;
    NSArray *_nicknameUpdates;
    CKNicknameUpdatesCollectionView *_collectionView;
    _UICollectionViewDiffableDataSource *_dataSource;
    UICollectionViewCompositionalLayout *_collectionViewLayout;
}

@property (retain, nonatomic) NSArray *nicknameUpdates;
@property (retain, nonatomic) CKNicknameUpdatesCollectionView *collectionView;
@property (retain, nonatomic) _UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout;
@property (nonatomic) id <CKNicknameUpdatesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)_doneButtonTapped:(id)arg1;
- (void)updateCell:(id)arg1 updateButtonTappedForBannerView:(id)arg2;
- (void)updateCell:(id)arg1 ignoreButtonTappedForBannerView:(id)arg2;
- (id)layoutSectionForSection:(long long)arg1 withEnvironment:(id)arg2;
- (id)cellForItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 withIdentifier:(id)arg3;
- (void)_nicknameStateChanged:(id)arg1;

@end
