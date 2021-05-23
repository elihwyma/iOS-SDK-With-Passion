/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSVPlayActivityEventItemIDs.h>

@class NSString;

@interface SSVMutablePlayActivityEventItemIDs : SSVPlayActivityEventItemIDs

@property (nonatomic) unsigned long long cloudID;
@property (copy, nonatomic) NSString *lyricsID;
@property (nonatomic) long long purchasedAdamID;
@property (nonatomic) long long radioAdamID;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic) long long subscriptionAdamID;
@property (nonatomic) long long tvShowPurchasedAdamID;
@property (nonatomic) long long tvShowSubscriptionAdamID;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
