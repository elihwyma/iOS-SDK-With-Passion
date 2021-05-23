/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKImageProvider, NSString, UIColor, UIImageView, UILabel;

@protocol CLKMonochromeFilterProvider;

@interface NTKPeopleComplicationImageView : UIView

{
    UILabel *_nameLabel;
    UIImageView *_profileImageView;
    UIView *_ringView;
    double _monochromeTintAmount;
    _Bool _usesLegibility;
    CLKImageProvider *_imageProvider;
    UIColor *_color;
    UIColor *_overrideColor;
    id <CLKMonochromeFilterProvider> _filterProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) _Bool usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (nonatomic, readonly) UIColor *contentColor;
@property (retain, nonatomic) CLKImageProvider *imageProvider;
@property (weak, nonatomic) id <CLKMonochromeFilterProvider> filterProvider;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;

@end
