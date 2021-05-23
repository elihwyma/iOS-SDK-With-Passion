/*
 Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

#import <Foundation/NSObject.h>

@class IDSService, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CMSM_IDSServer : NSObject

{
    IDSService *pIdsService;
    NSObject<OS_dispatch_queue> *idsDispatchQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end
