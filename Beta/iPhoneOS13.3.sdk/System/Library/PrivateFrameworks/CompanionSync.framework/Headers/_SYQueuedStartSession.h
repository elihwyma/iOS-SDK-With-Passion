/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class SYStartSyncSession;

@interface _SYQueuedStartSession : NSObject

{
    SYStartSyncSession *_request;
    CDUnknownBlockType _completion;
}

@property (nonatomic, readonly) SYStartSyncSession *request;
@property (nonatomic, readonly) CDUnknownBlockType completion;

- (id)initWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
