/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CAFilter, NSString, UIBlurEffect, UIColor, UIFont, UIImageSymbolConfiguration;

@interface PXUINoBackgroundBadgeTheme : NSObject

{
    UIImageSymbolConfiguration *_imageConfiguration;
    double _imageAlpha;
    UIColor *_imageTintColor;
    CAFilter *_imageCompositingFilter;
    UIFont *_labelFont;
    double _labelAlpha;
    UIColor *_labelTextColor;
    CAFilter *_labelCompositingFilter;
    Class _backgroundViewClass;
    double _backgroundCornerRadius;
    double _backgroundBorderWidth;
    double _backgroundAlpha;
    UIColor *_backgroundColor;
    UIColor *_backgroundBorderColor;
    UIBlurEffect *_backgroundBlurEffect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIImageSymbolConfiguration *imageConfiguration;
@property (nonatomic, readonly) double imageAlpha;
@property (nonatomic, readonly) UIColor *imageTintColor;
@property (nonatomic, readonly) CAFilter *imageCompositingFilter;
@property (nonatomic, readonly) UIFont *labelFont;
@property (nonatomic, readonly) double labelAlpha;
@property (nonatomic, readonly) UIColor *labelTextColor;
@property (nonatomic, readonly) CAFilter *labelCompositingFilter;
@property (nonatomic, readonly) Class backgroundViewClass;
@property (nonatomic, readonly) double backgroundCornerRadius;
@property (nonatomic, readonly) double backgroundBorderWidth;
@property (nonatomic, readonly) double backgroundAlpha;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *backgroundBorderColor;
@property (nonatomic, readonly) UIBlurEffect *backgroundBlurEffect;

+ (id)sharedBadgeTheme;

- (id)init;

@end
