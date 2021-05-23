/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, CLKImageProvider, NSString, UIColor, UIImageView;

@interface NTKStaticSiriAnimationView : UIView

{
    CLKDevice *_device;
    UIImageView *_imageView;
    struct CGSize _complicationSize;
    _Bool _usesLegibility;
    UIColor *_color;
    CLKImageProvider *_imageProvider;
    UIColor *_overrideColor;
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

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;

@end
