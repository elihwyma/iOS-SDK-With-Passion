/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKLabel, NSString;

@interface GKMoreExistSectionFooterView : UICollectionReusableView

{
    GKLabel *_label;
}

@property (retain, nonatomic) GKLabel *label;
@property (retain, nonatomic) NSString *text;

+ (_Bool)requiresConstraintBasedLayout;
+ (double)defaultHeight;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
