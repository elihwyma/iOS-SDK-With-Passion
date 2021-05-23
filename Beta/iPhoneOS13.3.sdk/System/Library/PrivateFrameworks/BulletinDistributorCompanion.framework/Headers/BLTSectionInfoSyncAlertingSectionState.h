/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface BLTSectionInfoSyncAlertingSectionState : NSObject

{
    unsigned long long _state;
    CDUnknownBlockType _clientCompletion;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) CDUnknownBlockType clientCompletion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (id)description;

@end
