/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BLTPingHandlerHolder : NSObject

{
    id _pingHandler;
    _Bool _forBulletin;
    _Bool _forNotification;
    NSString *_sectionID;
    unsigned long long _ackType;
}

@property (copy, nonatomic) NSString *sectionID;
@property (nonatomic) _Bool forBulletin;
@property (nonatomic) _Bool forNotification;
@property (nonatomic) unsigned long long ackType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canAck;
@property (nonatomic, readonly) _Bool canAckOnLocalConnection;

- (id)init;
- (void)pingWithBulletin:(id)arg1 ack:(CDUnknownBlockType)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(CDUnknownBlockType)arg3;
- (id)initWithPingHandler:(id)arg1;
- (void)_performPingWithAckableForwardBlock:(CDUnknownBlockType)arg1 ackableNoParametersBlock:(CDUnknownBlockType)arg2 noAckBlock:(CDUnknownBlockType)arg3 clientAck:(CDUnknownBlockType)arg4;

@end
