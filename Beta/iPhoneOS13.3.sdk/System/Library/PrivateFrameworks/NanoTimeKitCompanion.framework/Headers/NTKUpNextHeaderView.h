/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UICollectionReusableView.h>

@class CLKTextProvider, NTKColoringLabel;

@interface NTKUpNextHeaderView : UICollectionReusableView

{
    NTKColoringLabel *_label;
    CLKTextProvider *_textProvider;
}

@property (copy, nonatomic) CLKTextProvider *textProvider;

- (id)initWithFrame:(struct CGRect)arg1;

@end
