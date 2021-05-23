/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class GKStaticRenderContentView;

@interface GKDetachedContentView : UIView

{
    GKStaticRenderContentView *_renderView;
}

@property (nonatomic) GKStaticRenderContentView *renderView;

@end
