/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <UIKit/UICollectionView.h>

@class UILayoutGuide;

@interface REUpNextCollectionView : UICollectionView

{
    UILayoutGuide *_contentSizeLayoutGuide;
}

@property (nonatomic, readonly) UILayoutGuide *contentSizeLayoutGuide;

@end
