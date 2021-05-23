/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class BRCAccountSession, BRCItemGlobalID, BRCNotificationPipe, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCDataOrDocsScopeGatherer : NSObject

{
    BRCNotificationPipe *_pipe;
    CDUnknownBlockType _gatherReply;
    NSMutableArray *_gatheringAppLibraries;
    unsigned long long _gatheringRankMin;
    unsigned long long _gatheringRankMax;
    unsigned long long _lastSentRank;
    NSString *_gatheringNamePrefix;
    BRCAccountSession *_session;
    _Bool _includesDeadItems;
    BRCItemGlobalID *_gatheredChildrenItemGlobalID;
}

@property (retain, nonatomic) BRCItemGlobalID *gatheredChildrenItemGlobalID;

- (void)invalidate;
- (void)done;
- (void)gatherWithBatchSize:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_popGatherReply;
- (id)initWithNotificationPipe:(id)arg1 appLibraries:(id)arg2 startingRank:(unsigned long long)arg3 maxRank:(unsigned long long)arg4 withDeadItems:(_Bool)arg5 gatherReply:(CDUnknownBlockType)arg6;

@end
