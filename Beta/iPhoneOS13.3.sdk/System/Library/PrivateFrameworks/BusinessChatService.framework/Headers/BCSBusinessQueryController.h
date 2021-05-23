/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class BCSBusinessItemController, BCSConfigController, BCSIconController;

@interface BCSBusinessQueryController : NSObject

{
    BCSBusinessItemController *_bizItemController;
    BCSIconController *_iconController;
    BCSConfigController *_configController;
}

@property (retain, nonatomic) BCSBusinessItemController *bizItemController;
@property (retain, nonatomic) BCSIconController *iconController;
@property (retain, nonatomic) BCSConfigController *configController;

- (id)init;
- (void)fetchBusinessItemWithBizID:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchBusinessItemWithPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchIsBusinessPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1 forClientBundleID:(id)arg2;
- (void)fetchSquareIconDataForBusinessItem:(id)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_deleteInMemoryCache;
- (long long)_shardStartIndexForPhoneHash:(long long)arg1 shardCount:(long long)arg2;
- (CDStruct_912cb5d2)_businessItemBucketRangeFromPhoneHash:(long long)arg1 bucketCount:(long long)arg2;
- (id)_matchingBusinessItemInBusinessItemBucket:(id)arg1 forPhoneHash:(long long)arg2;
- (_Bool)_deleteDiskCache;

@end
