/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UICollectionView.h>

@protocol PMiOSScrubberCollectionViewDelegate;

@interface PMiOSScrubberCollectionView : UICollectionView

{
    id <PMiOSScrubberCollectionViewDelegate> _collectionViewDelegate;
}

@property (weak, nonatomic) id <PMiOSScrubberCollectionViewDelegate> collectionViewDelegate;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
