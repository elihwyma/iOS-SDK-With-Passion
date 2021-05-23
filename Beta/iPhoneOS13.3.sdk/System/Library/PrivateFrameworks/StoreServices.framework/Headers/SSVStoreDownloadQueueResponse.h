/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary, NSError, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString;

@protocol OS_dispatch_queue;

@interface SSVStoreDownloadQueueResponse : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableOrderedSet *_downloads;
    NSError *_error;
    NSDictionary *_itemErrors;
    NSData *_keybag;
    NSArray *_rangesToLoad;
    _Bool _shouldCancelPurchaseBatch;
    _Bool _triggeredQueueCheck;
    NSNumber *_userIdentifier;
    NSString *_storeCorrelationID;
    NSString *_clientIdentifier;
}

@property (readonly) NSOrderedSet *downloads;
@property NSString *storeCorrelationID;
@property (retain) NSError *error;
@property (readonly) NSData *keybag;
@property (readonly) NSArray *rangesToLoad;
@property _Bool shouldCancelPurchaseBatch;
@property _Bool triggeredQueueCheck;
@property (readonly) NSNumber *userIdentifier;
@property NSString *clientIdentifier;

- (id)init;
- (id)_initStoreDownloadQueueResponse;
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 preferredAssetFlavor:(id)arg3;
- (id)_errorWithFailureType:(id)arg1 customerMessage:(id)arg2;
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2;
- (id)initWithError:(id)arg1 userIdentifier:(id)arg2;
- (id)errorForItemIdentifier:(id)arg1;

@end
