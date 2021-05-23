/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol FBSServiceFacilityClientHandle;

@interface SBButtonConsumerClient : NSObject

{
    _Bool _entitledToConsumeButtonsInBackground;
    _Bool _application;
    _Bool _runningVisible;
    _Bool _suspended;
    id <FBSServiceFacilityClientHandle> _systemServiceClient;
    NSMutableSet *_registrations;
}

@property (retain, nonatomic) id <FBSServiceFacilityClientHandle> systemServiceClient;
@property (nonatomic, getter=isEntitledToConsumeButtonsInBackground) _Bool entitledToConsumeButtonsInBackground;
@property (nonatomic, getter=isApplication) _Bool application;
@property (nonatomic, getter=isRunningVisible) _Bool runningVisible;
@property (nonatomic, getter=isSuspended) _Bool suspended;
@property (nonatomic, readonly) _Bool canReceiveEvents;
@property (retain, nonatomic) NSMutableSet *registrations;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
