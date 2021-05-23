/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface GKMultiplayerActivityView : UIView

{
    UILabel *_label;
}

@property (nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;

- (id)initWithFrame:(struct CGRect)arg1;

@end
