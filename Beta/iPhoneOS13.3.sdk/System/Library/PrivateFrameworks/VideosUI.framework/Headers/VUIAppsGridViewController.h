/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UILabel;

@interface VUIAppsGridViewController : UIViewController <Swift>

{
    UILabel *_titleLabel;
    UICollectionViewFlowLayout *_layout;
    UICollectionView *_collectionView;
    NSArray *_apps;
}

@property (copy, nonatomic) NSArray *apps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setTitle:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (Class)_collectionViewClass;

@end
