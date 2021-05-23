/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface BLTLightsAndSirensReplyInfoCache : NSObject

{
    NSMutableDictionary *_localReplyInfo;
    NSDate *_timeToCheck;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *localReplyInfo;
@property (retain, nonatomic) NSDate *timeToCheck;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedReplyCache;

- (id)init;
- (void)_checkCache;
- (_Bool)_isTimeToCheck;
- (void)cacheReply:(CDUnknownBlockType)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3 publicationDate:(id)arg4 replyToken:(id)arg5;
- (id)cacheDidPlayLightsAndSirens:(unsigned long long)arg1 withReplyToken:(id)arg2;
- (void)purgeReplyInfo:(id)arg1 withReplyToken:(id)arg2;
- (void)_setNextTimeToCheck;
- (id)_firstReplyInfoWithNoReplyWithReplyToken:(id)arg1;
- (void)_addReplyInfo:(id)arg1 forReplyToken:(id)arg2;
- (id)_firstReplyInfoWithNoDidPlayStateWithReplyToken:(id)arg1;

@end
