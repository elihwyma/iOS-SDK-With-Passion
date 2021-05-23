/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewController.h>

@class NSMapTable, NSString;

@interface HUCollectionViewController : UICollectionViewController

{
    NSMapTable *_installedChildViewControllersKeyedByCell;
}

@property (retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCollectionViewLayout:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)didUpdateRequiredHeightForCell:(id)arg1;

@end
