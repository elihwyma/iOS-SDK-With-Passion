/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIImageView.h>

@interface GKComposeHeaderFieldBackgroundView : UIImageView

{
    unsigned int _location;
}

@property (nonatomic) unsigned int location;

- (id)init;
- (void)layoutSubviews;
- (void)resetBackgroundImage;

@end
