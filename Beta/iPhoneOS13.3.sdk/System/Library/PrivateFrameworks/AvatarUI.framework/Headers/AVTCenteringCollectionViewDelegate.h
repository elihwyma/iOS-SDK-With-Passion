/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class NSIndexPath, NSString, UICollectionView, UICollectionViewLayoutAttributes, UISelectionFeedbackGenerator;

@protocol AVTUILogger, UICollectionViewDelegate;

@interface AVTCenteringCollectionViewDelegate : NSObject <Swift>

{
    UICollectionView *_collectionView;
    id <UICollectionViewDelegate> _delegate;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    NSIndexPath *_lastHapticOnScrollIndexPath;
    id <AVTUILogger> _logger;
    struct CGPoint _previousOffset;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (weak, nonatomic, readonly) id <UICollectionViewDelegate> delegate;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (nonatomic) struct CGPoint previousOffset;
@property (retain, nonatomic) NSIndexPath *lastHapticOnScrollIndexPath;
@property (retain, nonatomic) id <AVTUILogger> logger;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *centerItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2 environment:(id)arg3;

@end
