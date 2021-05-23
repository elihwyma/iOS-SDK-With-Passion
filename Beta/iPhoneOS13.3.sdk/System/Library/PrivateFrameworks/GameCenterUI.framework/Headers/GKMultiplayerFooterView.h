/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKMultiplayerActivityView, GKMultiplayerBubbleView;

@interface GKMultiplayerFooterView : UICollectionReusableView

{
    GKMultiplayerActivityView *_activityView;
    GKMultiplayerBubbleView *_bubbleView;
}

@property (retain, nonatomic) GKMultiplayerActivityView *activityView;
@property (retain, nonatomic) GKMultiplayerBubbleView *bubbleView;

+ (id)footerView;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)floatInBubbles;
- (void)setBubblesHidden:(_Bool)arg1;
- (void)removeAllAnimationsFromBubbles;
- (void)scatterOutBubblesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setStatusFooterHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBubbleFooterHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showFooterStatus:(id)arg1;
- (void)configureForMatchRequest:(id)arg1;

@end
