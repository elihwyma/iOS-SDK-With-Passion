/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

#import <WorkflowUI/Swift-Protocol.h>

@class INIntent, NSArray, NSString, UICollectionView, UIViewController, WFAction;

@protocol WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate;

@interface WFActionDrawerSiriSuggestionsCollectionViewManager : NSObject <Swift>

{
    _Bool _configuredForDailyRoutines;
    id <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> _delegate;
    long long _cellType;
    UIViewController *_containingViewController;
    NSArray *_donations;
    UICollectionView *_collectionView;
    NSArray *_actions;
    WFAction *_genericAction;
    INIntent *_genericIntent;
    NSString *_genericActionParameterTitle;
}

@property (copy, nonatomic) NSArray *donations;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) WFAction *genericAction;
@property (retain, nonatomic) INIntent *genericIntent;
@property (copy, nonatomic) NSString *genericActionParameterTitle;
@property (weak, nonatomic) id <WFActionDrawerSiriSuggestionsCollectionViewManagerDelegate> delegate;
@property (weak, nonatomic) UIViewController *containingViewController;
@property (nonatomic) _Bool configuredForDailyRoutines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (id)initWithCollectionView:(id)arg1 cellType:(long long)arg2 donations:(id)arg3 actions:(id)arg4;
- (void)showMusicPicker;
- (void)showPodcastPicker;
- (void)_configureCell:(id)arg1 withDonation:(id)arg2 cellType:(long long)arg3;
- (void)_configureCell:(id)arg1 withGenericIntent:(id)arg2 cellType:(long long)arg3 genericParameterTitle:(id)arg4;

@end
