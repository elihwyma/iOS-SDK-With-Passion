/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSVPlayActivityEventItemIDs : NSObject

{
    long long _equivalencySourceAdamID;
    unsigned long long _cloudID;
    NSString *_lyricsID;
    long long _purchasedAdamID;
    long long _radioAdamID;
    long long _subscriptionAdamID;
    long long _tvShowPurchasedAdamID;
    long long _tvShowSubscriptionAdamID;
}

@property (nonatomic, readonly) unsigned long long cloudID;
@property (copy, nonatomic, readonly) NSString *lyricsID;
@property (nonatomic, readonly) long long purchasedAdamID;
@property (nonatomic, readonly) long long radioAdamID;
@property (nonatomic, readonly) long long equivalencySourceAdamID;
@property (nonatomic, readonly) long long subscriptionAdamID;
@property (nonatomic, readonly) long long tvShowPurchasedAdamID;
@property (nonatomic, readonly) long long tvShowSubscriptionAdamID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_copyWithClass:(Class)arg1;

@end
