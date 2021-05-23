/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol CKDZoneGatekeeperWaiter, OS_os_activity;

__attribute__((visibility("hidden")))
@interface CKWaiterWrapper : NSObject

{
    id <CKDZoneGatekeeperWaiter> _waiter;
    NSArray *_zoneIDs;
    NSObject<OS_os_activity> *_activity;
    CDUnknownBlockType _completionHandler;
    NSString *_personaID;
}

@property (nonatomic, readonly) id <CKDZoneGatekeeperWaiter> waiter;
@property (nonatomic, readonly) NSArray *zoneIDs;
@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) NSString *personaID;

- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithWaiter:(id)arg1 zoneIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 activity:(id)arg4;
- (void)invokeCompletionHandler:(_Bool)arg1;

@end
