/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCColor, FCMultiResolutionImage, NSURL;

@interface FCPaywallVisualSpecConfiguration : NSObject <Swift>

{
    FCMultiResolutionImage *_multiResolutionImage;
    FCMultiResolutionImage *_darkStyleMultiResolutionImage;
    NSURL *_videoURL;
    long long _videoWidth;
    long long _videoHeight;
    double _gradientPercentHeight;
    long long _textTopPadding;
    FCColor *_backgroundColor;
    FCColor *_darkStyleBackgroundColor;
    FCColor *_mastheadTextColor;
    FCColor *_largeTextColor;
    FCColor *_smallTextColor;
}

@property (retain, nonatomic) FCMultiResolutionImage *multiResolutionImage;
@property (retain, nonatomic) FCMultiResolutionImage *darkStyleMultiResolutionImage;
@property (retain, nonatomic) NSURL *videoURL;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videoHeight;
@property (retain, nonatomic) FCColor *backgroundColor;
@property (retain, nonatomic) FCColor *darkStyleBackgroundColor;
@property (retain, nonatomic) FCColor *mastheadTextColor;
@property (retain, nonatomic) FCColor *largeTextColor;
@property (retain, nonatomic) FCColor *smallTextColor;
@property (nonatomic) double gradientPercentHeight;
@property (nonatomic) long long textTopPadding;

+ (id)defaultPaywallVisualSpecConfiguration;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationSmall;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationMedium;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationLarge;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithMultiResolutionImage:(id)arg1 darkStyleMultiResolutionImage:(id)arg2 videoURL:(id)arg3 videoWidth:(long long)arg4 videoHeight:(long long)arg5 gradientPercentHeight:(double)arg6 textTopPadding:(long long)arg7 backgroundColor:(id)arg8 darkStyleBackgroundColor:(id)arg9 mastheadTextColor:(id)arg10 largeTextColor:(id)arg11 smallTextColor:(id)arg12;

@end
