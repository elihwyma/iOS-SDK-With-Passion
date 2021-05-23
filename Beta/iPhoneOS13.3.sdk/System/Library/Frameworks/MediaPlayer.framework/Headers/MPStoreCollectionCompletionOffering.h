/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaQuery, MPStoreOfferMediaItemCollection, NSArray;

@interface MPStoreCollectionCompletionOffering : NSObject

{
    MPMediaQuery *_localItemsQuery;
    long long _preferredStoreOfferVariant;
    MPStoreOfferMediaItemCollection *_offeredCollection;
    MPStoreOfferMediaItemCollection *_mergedCollection;
}

@property (nonatomic, readonly) long long preferredStoreOfferVariant;
@property (nonatomic, readonly) MPStoreOfferMediaItemCollection *offeredCollection;
@property (nonatomic, readonly) MPStoreOfferMediaItemCollection *mergedCollection;
@property (nonatomic, readonly) MPStoreOfferMediaItemCollection *itemsWithCompletionsCollection;
@property (nonatomic, readonly) NSArray *localItems;

- (id)initWithOfferedCollection:(id)arg1 localItemsQuery:(id)arg2 preferredStoreOfferVariant:(long long)arg3;

@end
