/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface AFMultiUserConnection : NSObject

{
    NSXPCConnection *_connection;
}

- (id)init;
- (void)dealloc;
- (void)_clearConnection;
- (void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getConformingSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getConformingSharedUserIds:(CDUnknownBlockType)arg1;
- (id)_multiUserServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)getSharedUserProfileLimitWithCompletion:(CDUnknownBlockType)arg1;

@end
