/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, TPSDiscoverabilityContentControllerDelegate;

@interface TPSDiscoverabilityContentController : NSObject

{
    NSObject<OS_dispatch_queue> *_sessionQueue;
    id <TPSDiscoverabilityContentControllerDelegate> _delegate;
    NSMutableDictionary *_identifierToURLSessionItemMap;
}

@property (retain, nonatomic) NSMutableDictionary *identifierToURLSessionItemMap;
@property (weak, nonatomic) id <TPSDiscoverabilityContentControllerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)contentWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDeliveryInfo;
- (id)sessionItemForIdentifier:(id)arg1;
- (void)updateIdentifier:(id)arg1 sessionItem:(id)arg2;
- (void)_cacheAssetsForTipDictionary:(id)arg1;

@end
