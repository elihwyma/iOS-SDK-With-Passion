/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class NSString, PMScrubberProvider, PMiOSScrubberCollectionView, UIView;

@interface PMiOSScrubberViewController : UIViewController

{
    PMScrubberProvider *_provider;
    PMiOSScrubberCollectionView *_collectionView;
    UIView *_playhead;
}

@property (weak, nonatomic) PMiOSScrubberCollectionView *collectionView;
@property (weak, nonatomic) UIView *playhead;
@property (retain, nonatomic) PMScrubberProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (double)itemWidth;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)touchesBegan;
- (void)touchesEnded;
- (void)playbackProgressDidChange:(double)arg1 provider:(id)arg2;
- (void)resultUpdated:(id)arg1;
- (void)setContentInsetWithSize:(struct CGSize)arg1;
- (void)updateScrollWithProgress:(double)arg1;
- (struct CGPoint)scrollViewPlayheadPosition;
- (double)scrollViewProgress;

@end
