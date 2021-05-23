/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface FCPurchaseLookupFetchOperationResult : NSObject

{
    NSDictionary *_channelIDsByPurchaseID;
    NSDictionary *_bundleChannelIDsByPurchaseID;
}

@property (copy, nonatomic) NSDictionary *channelIDsByPurchaseID;
@property (copy, nonatomic) NSDictionary *bundleChannelIDsByPurchaseID;

- (id)initWithChannelIDsByPurchaseID:(id)arg1 bundleChannelIDsByPurchaseID:(id)arg2;

@end
