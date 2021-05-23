/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIImage.h>

@class NSBundle, NSString, UIColor;

@interface OBImage : UIImage

{
    NSBundle *_bundle;
    NSString *_name;
    long long _style;
    UIColor *_tintColor;
}

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIColor *tintColor;

+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_imageNamed:(id)arg1 inBundle:(id)arg2 convertToMatchInterfaceStyle:(_Bool)arg3;
+ (long long)rootInterfaceStyle;
+ (id)_imageNameForUIInterfaceStyle:(long long)arg1 originalName:(id)arg2;

- (id)_flatImageWithColor:(id)arg1;
- (id)_obFlatImageWithColor:(id)arg1;
- (id)imageForUserInterfaceStyle:(long long)arg1;

@end
