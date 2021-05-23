/*
 Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

#import <Foundation/NSObject.h>

@class IDSService, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CMSM_IDSClient : NSObject

{
    IDSService *pIdsService;
    NSObject<OS_dispatch_queue> *idsDispatchQueue;
    NSString *_lastSentRemotePlayingInfoQueryGUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (_Bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;
- (void)updateLastSentRemotePlayingInfoQueryGUID:(id)arg1;

@end
