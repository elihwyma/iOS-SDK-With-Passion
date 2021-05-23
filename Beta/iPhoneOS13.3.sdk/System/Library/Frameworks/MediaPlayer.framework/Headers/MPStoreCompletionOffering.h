/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPMediaQuery, MPStoreCollectionCompletionOffering, MPStoreCompletionOfferResponse, MPStoreOfferMediaItemCollection, NSURL;

@interface MPStoreCompletionOffering : NSObject <Swift>

{
    long long _preferredStoreOfferVariant;
    MPStoreCompletionOfferResponse *_storeOfferResponse;
    MPMediaQuery *_localItemsQuery;
    MPStoreCollectionCompletionOffering *_collectionWithCompletionItemsOffering;
    long long _presentationStyle;
    NSURL *_storeURL;
}

@property (nonatomic) long long preferredStoreOfferVariant;
@property (nonatomic, readonly) long long presentationStyle;
@property (copy, nonatomic, readonly) NSURL *storeURL;
@property (nonatomic, readonly) MPStoreOfferMediaItemCollection *collectionWithCompletionItems;

+ (void)setDefaultOfferVariant:(long long)arg1;
+ (long long)defaultOfferVariant;
+ (id)offeringWithResponse:(id)arg1 localItemsQuery:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponse:(id)arg1 localItemsQuery:(id)arg2;
- (id)copyByInvalidatingCalculatedContent;
- (void)_loadOfferingData;

@end
