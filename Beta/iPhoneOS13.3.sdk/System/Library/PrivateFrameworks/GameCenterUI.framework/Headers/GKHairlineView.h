/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@interface GKHairlineView : UIView

{
    long long _alignment;
}

@property (nonatomic) long long alignment;

+ (id)hairlineViewForAlignment:(long long)arg1;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;

@end
