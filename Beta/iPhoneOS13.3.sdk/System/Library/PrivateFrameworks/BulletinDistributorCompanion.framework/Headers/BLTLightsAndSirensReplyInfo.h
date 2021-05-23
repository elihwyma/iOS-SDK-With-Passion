/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface BLTLightsAndSirensReplyInfo : NSObject

{
    _Bool _replySent;
    _Bool _didLogAggd;
    CDUnknownBlockType _reply;
    unsigned long long _didPlayLightsAndSirens;
    NSDate *_bulletinPublicationDate;
    NSDate *_creation;
    NSString *_publisherMatchID;
    NSString *_sectionID;
}

@property (nonatomic, readonly) _Bool replySent;
@property (copy, nonatomic) CDUnknownBlockType reply;
@property (nonatomic) unsigned long long didPlayLightsAndSirens;
@property (retain, nonatomic) NSDate *bulletinPublicationDate;
@property (nonatomic) _Bool didLogAggd;
@property (nonatomic, readonly) NSDate *creation;
@property (copy, nonatomic) NSString *publisherMatchID;
@property (copy, nonatomic) NSString *sectionID;

- (id)init;
- (_Bool)hasExpired;
- (_Bool)sendReply;

@end
