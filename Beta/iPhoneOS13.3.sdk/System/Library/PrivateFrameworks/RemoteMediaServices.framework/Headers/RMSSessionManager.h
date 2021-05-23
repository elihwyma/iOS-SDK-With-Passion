/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, RMSSessionManagerDelegate;

__attribute__((visibility("hidden")))
@interface RMSSessionManager : NSObject

{
    NSMutableDictionary *_sessions;
    NSObject<OS_dispatch_queue> *_sessionManagerQueue;
    id <RMSSessionManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <RMSSessionManagerDelegate> delegate;

- (id)init;
- (id)sessionWithIdentifier:(int)arg1;
- (id)persistedSessionIdentifiers;
- (void)refreshSessionWithIdentifier:(int)arg1;
- (void)beginSession:(id)arg1 timeout:(int)arg2 shouldTakePowerAssertion:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)endSessionWithIdentifier:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)identifierForSession:(id)arg1;
- (int)_uniqueSessionIdentifier;
- (void)_updatePersistedSessionIdentifiers;
- (void)_scheduleSessionExpirationWithIdentifier:(int)arg1 timeout:(int)arg2;

@end
