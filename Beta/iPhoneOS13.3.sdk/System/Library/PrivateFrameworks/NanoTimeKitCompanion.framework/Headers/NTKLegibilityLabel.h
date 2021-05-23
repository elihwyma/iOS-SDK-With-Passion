/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UILabel.h>

@class NSString, UIColor;

@interface NTKLegibilityLabel : UILabel

{
    double _sBlur;
    UIColor *_sColor;
    _Bool _legibilityEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool legibilityEnabled;
@property (nonatomic) double shadowBlur;
@property (retain, nonatomic) UIColor *shadowColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)_contentInsetsFromFonts;
- (void)_updateShadow;

@end
