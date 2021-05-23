/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionView.h>

@class HUScrollGestureRecognitionResolver;

@interface HUQuickControlCollectionView : UICollectionView

{
    HUScrollGestureRecognitionResolver *_scrollGestureResolver;
}

@property (nonatomic, readonly) HUScrollGestureRecognitionResolver *scrollGestureResolver;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;

@end
