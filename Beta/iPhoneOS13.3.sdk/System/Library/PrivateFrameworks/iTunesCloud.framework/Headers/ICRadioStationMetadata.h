/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICStoreArtworkInfo, NSDictionary, NSString;

@interface ICRadioStationMetadata : NSObject

{
    NSDictionary *_responseDictionary;
}

@property (copy, nonatomic, readonly) ICStoreArtworkInfo *artworkInfo;
@property (copy, nonatomic, readonly) NSString *coreSeedName;
@property (copy, nonatomic, readonly) NSString *descriptionText;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *stationHash;
@property (nonatomic, readonly) long long stationID;
@property (copy, nonatomic, readonly) NSString *stationStringID;
@property (copy, nonatomic, readonly) NSString *attributionLabel;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long subtype;
@property (nonatomic, readonly) _Bool allowsItemLiking;
@property (nonatomic, readonly) _Bool allowsSharing;
@property (nonatomic, readonly, getter=isSubscriptionRequired) _Bool subscriptionRequired;

- (id)initWithResponseDictionary:(id)arg1;

@end
