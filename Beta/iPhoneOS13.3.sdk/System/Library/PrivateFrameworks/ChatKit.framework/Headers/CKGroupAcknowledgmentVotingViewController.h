/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIViewController.h>

#import <ChatKit/Swift-Protocol.h>

@class CKAcknowledgmentVotingViewAnimator, CKAggregateAcknowledgmentChatItem, CKGroupAcknowledgmentVotingLayout, NSArray, NSString, UIButton, UICollectionView, UITapGestureRecognizer, _CKAcknowledgmentVoteCountView;

@interface CKGroupAcknowledgmentVotingViewController : UIViewController <Swift>

{
    NSArray *_tallies;
    CKAggregateAcknowledgmentChatItem *_chatItem;
    UICollectionView *_collectionView;
    CKGroupAcknowledgmentVotingLayout *_layout;
    CKAcknowledgmentVotingViewAnimator *_animator;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIButton *_collapseButton;
    _CKAcknowledgmentVoteCountView *_currentlyExpandedVoteCountView;
    NSArray *_sortedAnimatorModelItems;
}

@property (retain, nonatomic) NSArray *tallies;
@property (retain, nonatomic) CKAggregateAcknowledgmentChatItem *chatItem;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CKGroupAcknowledgmentVotingLayout *layout;
@property (retain, nonatomic) CKAcknowledgmentVotingViewAnimator *animator;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIButton *collapseButton;
@property (retain, nonatomic) _CKAcknowledgmentVoteCountView *currentlyExpandedVoteCountView;
@property (copy, nonatomic) NSArray *sortedAnimatorModelItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)tapGestureRecognized:(id)arg1;
- (void)_setupTallies;
- (void)_handleCollapseButton:(id)arg1;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)arg1;
- (id)_ackIconSupplementaryViewAtIndexPath:(id)arg1;
- (id)_voteCountSupplementaryViewAtIndexPath:(id)arg1;
- (void)_collapseCollectionView;
- (void)_animateToLayout:(unsigned long long)arg1 aroundSection:(long long)arg2;
- (void)_layoutCollapseButton;
- (void)_layoutCurrentlyExpandedVoteCountView;
- (void)_expandCollectionViewExpandedViewAroundSection:(long long)arg1;
- (void)acknowledgmentVotingViewAnimatorDidFinishAnimation:(id)arg1;
- (id)initWithMessagePartChatItem:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withGestureRecognizer:(id)arg2;

@end
