/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewController.h>

@class HUCalendarScrubberDataSource, NSString;

@protocol HUCalendarScrubberViewDelegate;

@interface HUCalendarScrubberViewController : UICollectionViewController

{
    HUCalendarScrubberDataSource *_dataSource;
    id <HUCalendarScrubberViewDelegate> _scrubberDelegate;
    long long _currentSection;
    CDUnknownBlockType _scrollCompletionBlock;
    double _lastBoundsWidth;
}

@property (nonatomic) long long currentSection;
@property (retain, nonatomic) HUCalendarScrubberDataSource *dataSource;
@property (copy, nonatomic) CDUnknownBlockType scrollCompletionBlock;
@property (nonatomic) double lastBoundsWidth;
@property (weak, nonatomic) id <HUCalendarScrubberViewDelegate> scrubberDelegate;
@property (nonatomic, readonly) unsigned long long nextSection;
@property (nonatomic, readonly) unsigned long long previousSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)scrubberDataSourceDidReload:(id)arg1;
- (void)jumpToSection:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
