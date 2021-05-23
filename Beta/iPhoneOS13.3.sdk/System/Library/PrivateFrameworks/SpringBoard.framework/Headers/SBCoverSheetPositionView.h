/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIView;

@interface SBCoverSheetPositionView : SBFTouchPassThroughView

{
    UIView *_contentView;
    double _progress;
}

@property (nonatomic) double progress;
@property (nonatomic, readonly) UIView *contentView;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)positionContentForTouchAtLocation:(struct CGPoint)arg1 withTransformMode:(long long)arg2 forPresentationValue:(_Bool)arg3;
- (void)_createContentView;
- (double)_progressFromContenViewFrame:(struct CGRect)arg1;
- (struct CGPoint)_simulatedTouchLocationForProgress;
- (struct CGRect)positionContentForTouchAtLocation:(struct CGPoint)arg1;
- (struct CGAffineTransform)_transformForLocation:(struct CGPoint)arg1 transformMode:(long long)arg2;
- (double)_progressForTouchLocation:(struct CGPoint)arg1;

@end
