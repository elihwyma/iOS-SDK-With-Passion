/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSNumber, NSString;

@interface VUIStoreAcquisitionProperties : NSObject <Swift>

{
    _Bool _ignoresForcedPasswordRestriction;
    NSString *_buyParams;
    NSString *_urlBagKey;
    NSString *_userAgent;
    NSNumber *_dsid;
    NSString *_strongToken;
}

@property (copy, nonatomic) NSString *buyParams;
@property (copy, nonatomic) NSString *urlBagKey;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *strongToken;
@property (nonatomic) _Bool ignoresForcedPasswordRestriction;

+ (id)metricsAugumentedBuyParamsWithBuyParams:(id)arg1;
+ (id)acquisitionPropertiesWithBuyParams:(id)arg1 urlbagKey:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
