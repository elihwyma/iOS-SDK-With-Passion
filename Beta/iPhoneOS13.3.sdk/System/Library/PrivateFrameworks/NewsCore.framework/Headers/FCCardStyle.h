/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCColor, FCColorGradient, NSString;

@interface FCCardStyle : NSObject

{
    FCColor *_titleForegroundColor;
    FCColor *_eyebrowForegroundColor;
    FCColor *_cardBackgroundColor;
    FCColor *_cardForegroundColor;
    FCColorGradient *_sauceGradient;
    FCColor *_ctaBackgroundColor;
    FCColor *_ctaForegroundColor;
}

@property (copy, nonatomic) FCColor *titleForegroundColor;
@property (copy, nonatomic) FCColor *eyebrowForegroundColor;
@property (copy, nonatomic) FCColor *cardBackgroundColor;
@property (copy, nonatomic) FCColor *cardForegroundColor;
@property (copy, nonatomic) FCColorGradient *sauceGradient;
@property (copy, nonatomic) FCColor *ctaBackgroundColor;
@property (copy, nonatomic) FCColor *ctaForegroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)styleWithPBCardStyle:(id)arg1;
+ (id)styleWithConfigDict:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitleForegroundColor:(id)arg1 eyebrowForegroundColor:(id)arg2 cardBackgroundColor:(id)arg3 cardForegroundColor:(id)arg4 sauceGradient:(id)arg5 ctaBackgroundColor:(id)arg6 ctaForegroundColor:(id)arg7;
- (id)pbCardStyle;

@end
