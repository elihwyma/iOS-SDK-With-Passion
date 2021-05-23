/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCAssetHandle, FCColor, FCHeadlineTemplate, FCTagBanner, FCTextInfo, NSArray, NSString;

@protocol FCFeedTheming <Swift>

@property (nonatomic, readonly) long long feedType;
@property (nonatomic, readonly) _Bool isWhite;
@property (nonatomic, readonly) _Bool isDark;
@property (nonatomic, readonly) FCTagBanner *defaultBannerImage;
@property (nonatomic, readonly) FCTagBanner *bannerImageForWhiteBackground;
@property (nonatomic, readonly) FCTagBanner *bannerImageForThemeBackground;
@property (nonatomic, readonly) FCTagBanner *bannerImageForMask;
@property (nonatomic, readonly) FCTagBanner *compactBannerImage;
@property (nonatomic, readonly) double bannerImageScale;
@property (nonatomic, readonly) double bannerImageBaselineOffsetPercentage;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) FCTextInfo *headlineTitleTextInfo;
@property (copy, nonatomic, readonly) FCTextInfo *headlineExcerptTextInfo;
@property (copy, nonatomic, readonly) FCTextInfo *headlineBylineTextInfo;
@property (nonatomic, readonly) FCColor *backgroundColor;
@property (nonatomic, readonly) FCColor *darkStyleBackgroundColor;
@property (nonatomic, readonly) FCColor *foregroundColor;
@property (nonatomic, readonly) FCColor *darkStyleForegroundColor;
@property (nonatomic, readonly) FCAssetHandle *logoImageAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageAssetHandle;
@property (nonatomic, readonly) FCAssetHandle *nameImageCompactAssetHandle;
@property (nonatomic, readonly) struct CGSize nameImageSize;
@property (nonatomic, readonly) struct FCEdgeInsets nameImageInsets;
@property (nonatomic, readonly) FCAssetHandle *nameImageForDarkBackgroundAssetHandle;
@property (nonatomic, readonly) struct CGSize nameImageForDarkBackgroundSize;
@property (nonatomic, readonly) struct FCEdgeInsets nameImageForDarkBackgroundInsets;
@property (nonatomic, readonly) FCAssetHandle *nameImageMaskAssetHandle;
@property (nonatomic, readonly) struct CGSize nameImageMaskSize;
@property (nonatomic, readonly) struct FCEdgeInsets nameImageMaskInsets;
@property (nonatomic, readonly) NSArray *loadableFonts;
@property (nonatomic, readonly) FCHeadlineTemplate *defaultHeadlineTemplate;
@property (nonatomic, readonly) _Bool allowCustomBottomStyle;

@end
