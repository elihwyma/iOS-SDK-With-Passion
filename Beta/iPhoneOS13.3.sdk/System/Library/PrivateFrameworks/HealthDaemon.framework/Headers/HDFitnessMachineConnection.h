/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@protocol HKFitnessMachineConnectionClientInterface;

@interface HDFitnessMachineConnection : NSObject

{
    NSUUID *_uuid;
    id <HKFitnessMachineConnectionClientInterface> _client;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) id <HKFitnessMachineConnectionClientInterface> client;

- (id)initWithUUID:(id)arg1 client:(id)arg2;

@end
