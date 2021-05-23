/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <Foundation/NSObject.h>

@class IDSAccount, NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BCSIdentityService : NSObject

{
    IDSAccount *_businessChatAccount;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    NSMutableDictionary *_idStatusCompletionBlocks;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *idStatusCompletionBlocks;

+ (id)sharedInstance;

- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (void)refreshIDStatusForBizID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)businessChatAccount;
- (void)addIDSIDQueryControllerDelegate;
- (void)handleIDStatusCompletionBlocksForBizID:(id)arg1 idStatus:(long long)arg2;
- (void)warmBusinessChatAccountCache;

@end
