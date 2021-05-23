/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICStoreDialogResponse, ICURLBag, NSArray, NSData, NSDate, NSDictionary, NSError, NSString;

@interface ICMediaRedownloadResponse : NSObject

{
    NSDate *_requestDate;
    ICURLBag *_urlBag;
    NSDictionary *_responseDictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly) _Bool authorized;
@property (nonatomic, readonly) _Bool shouldCancelPurchaseBatch;
@property (copy, nonatomic, readonly) ICStoreDialogResponse *dialog;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) unsigned int downloadQueueItemCount;
@property (copy, nonatomic, readonly) NSString *jingleAction;
@property (copy, nonatomic, readonly) NSArray *items;
@property (copy, nonatomic, readonly) NSData *subscriptionKeyBagData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSError *serverError;

- (id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3;

@end
