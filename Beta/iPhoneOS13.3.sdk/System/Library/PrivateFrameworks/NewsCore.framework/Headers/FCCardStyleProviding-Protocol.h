/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class FCColor, FCColorGradient;

@protocol FCCardStyleProviding <Swift>

@property (copy, nonatomic, readonly) FCColor *titleForegroundColor;
@property (copy, nonatomic, readonly) FCColor *eyebrowForegroundColor;
@property (copy, nonatomic, readonly) FCColor *cardBackgroundColor;
@property (copy, nonatomic, readonly) FCColor *cardForegroundColor;
@property (copy, nonatomic, readonly) FCColorGradient *sauceGradient;
@property (copy, nonatomic, readonly) FCColor *ctaBackgroundColor;
@property (copy, nonatomic, readonly) FCColor *ctaForegroundColor;

@end
