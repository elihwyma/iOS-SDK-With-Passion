/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class NTKColoringLabel, REAccessoryDescription;

@interface NTKUpNextAccessoryView : UIView

{
    REAccessoryDescription *_accessoryDescription;
    NTKColoringLabel *_label;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTextColor:(id)arg1;
- (id)viewForLastBaselineLayout;
- (void)configureWithDescription:(id)arg1;

@end
