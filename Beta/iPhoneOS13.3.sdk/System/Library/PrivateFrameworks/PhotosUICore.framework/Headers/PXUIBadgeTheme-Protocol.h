/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class CAFilter, UIBlurEffect, UIColor, UIFont, UIImageSymbolConfiguration;

@protocol PXUIBadgeTheme <Swift>

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

@end
