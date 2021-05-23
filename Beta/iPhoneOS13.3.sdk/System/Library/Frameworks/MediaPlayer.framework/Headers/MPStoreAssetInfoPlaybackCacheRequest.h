/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@interface MPStoreAssetInfoPlaybackCacheRequest : NSObject <Swift>

{
    unsigned long long _accountID;
    unsigned long long _delegatedAccountID;
    long long _requestType;
    NSString *_redownloadParameters;
    NSString *_cloudUniversalLibraryID;
    long long _storeSubscriptionAdamID;
    unsigned long long _storeCloudID;
    long long _storePurchasedAdamID;
    long long _storeRadioAdamID;
}

@property (nonatomic) unsigned long long accountID;
@property (nonatomic) unsigned long long delegatedAccountID;
@property (nonatomic) long long requestType;
@property (copy, nonatomic) NSString *redownloadParameters;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeRadioAdamID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
