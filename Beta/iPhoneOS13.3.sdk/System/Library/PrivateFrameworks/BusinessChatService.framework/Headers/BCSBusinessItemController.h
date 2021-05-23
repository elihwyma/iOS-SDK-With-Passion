/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class BCSBusinessItemPersistentStore;

@interface BCSBusinessItemController : NSObject

{
    BCSBusinessItemPersistentStore *_businessItemPersistentStore;
}

@property (nonatomic, readonly) BCSBusinessItemPersistentStore *businessItemPersistentStore;

- (id)init;
- (void)fetchBusinessItemsWithBusinessItemBucket:(CDStruct_912cb5d2)arg1 forClientBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)chatSuggestVisibilityForBusinessItem:(id)arg1;
- (void)fetchBusinessItemWithBizID:(id)arg1 TTL:(double)arg2 forClientBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)deleteBusinessItemFromPersistentStore;
- (_Bool)deleteBusinessItemIfExpiredWithBusinessItemObject:(id)arg1;

@end
