/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICStoreDialogResponse, ICURLBag, NSArray, NSData, NSDate, NSDictionary, NSError, NSString;

@interface ICMusicSubscriptionPlaybackResponse : NSObject

{
    NSDictionary *_responseDictionary;
    NSDate *_requestDate;
    ICURLBag *_urlBag;
}

@property (copy, nonatomic, readonly) NSData *leaseInfoData;
@property (copy, nonatomic, readonly) NSData *subscriptionKeyBagData;
@property (copy, nonatomic, readonly) NSDate *leaseExpirationDate;
@property (copy, nonatomic, readonly) ICStoreDialogResponse *dialog;
@property (copy, nonatomic, readonly) NSString *householdID;
@property (copy, nonatomic, readonly) NSArray *items;
@property (copy, nonatomic, readonly) NSError *serverError;
@property (copy, nonatomic, readonly) NSDictionary *metricsDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)itemWithStoreAdamID:(long long)arg1;
- (id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3;

@end
