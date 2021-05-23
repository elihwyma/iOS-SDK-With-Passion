/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <UIKit/UIView.h>

@interface AEExplorerGroupingView : UIView

{
    UIView *_sceneView;
}

@property (retain, nonatomic) UIView *sceneView;

- (void)layoutSubviews;

@end
