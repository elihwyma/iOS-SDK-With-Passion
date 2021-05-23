/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPStoreOffer : NSObject

{
    NSDictionary *_offerDictionary;
    MPStoreOffer *_regularPriceOffer;
    NSDictionary *_mediaAssetDictionary;
    unsigned long long _entityPersistentID;
    long long _entityType;
    NSString *_entityTitle;
    long long _passType;
}

@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly) unsigned long long entityPersistentID;
@property (copy, nonatomic, readonly) NSString *entityTitle;
@property (nonatomic, readonly) long long buyType;
@property (nonatomic, readonly) long long passType;
@property (copy, nonatomic, readonly) NSString *buyParameters;
@property (copy, nonatomic, readonly) NSString *displayTitle;
@property (copy, nonatomic, readonly) NSString *actionDisplayTitle;
@property (nonatomic, readonly) _Bool requiresConfirmation;
@property (copy, nonatomic, readonly) NSString *displayPrice;
@property (nonatomic, readonly) float price;
@property (copy, nonatomic, readonly) NSString *regularPriceDisplayPrice;
@property (nonatomic, readonly) unsigned long long downloadSize;
@property (copy, nonatomic, readonly) NSURL *previewURL;
@property (nonatomic, readonly) double previewDuration;

+ (long long)buyTypeForOfferDictionary:(id)arg1 regularPriceOffer:(id)arg2;
+ (id)offerVariantResponseKeyForOfferVariant:(long long)arg1;
+ (void)getBuyOfferDictionary:(id *)arg1 regularPriceOfferDictionary:(id *)arg2 inOfferDictionaries:(id)arg3 variantString:(id)arg4;
+ (void)getBuyOfferDictionary:(id *)arg1 regularPriceOfferDictionary:(id *)arg2 inOfferDictionaries:(id)arg3 variant:(long long)arg4;
+ (long long)bestOfferVariantInOfferDictionaries:(id)arg1 withPreferredVariant:(long long)arg2;
+ (id)_priceForOfferDictionary:(id)arg1;

- (id)initWithStoreOfferDictionary:(id)arg1 regularPriceOfferDictionary:(id)arg2 passType:(long long)arg3 entityType:(long long)arg4 persistentID:(unsigned long long)arg5 title:(id)arg6;
- (_Bool)_isBuy;
- (id)buyURL;
- (id)storeOfferDictionary;

@end
