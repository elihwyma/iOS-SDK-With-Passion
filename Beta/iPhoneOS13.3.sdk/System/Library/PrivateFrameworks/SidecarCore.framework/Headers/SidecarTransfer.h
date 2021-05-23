/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <Foundation/NSObject.h>

@class SidecarSession;

@protocol SidecarTransferDelegate;

__attribute__((visibility("hidden")))
@interface SidecarTransfer : NSObject

{
    id <SidecarTransferDelegate> _delegate;
    struct os_unfair_lock_s _lock;
    long long _requestID;
    SidecarSession *_session;
    _Atomic int _suspendCount;
    long long _transferID;
}

@property (weak, nonatomic) id <SidecarTransferDelegate> delegate;
@property (nonatomic, readonly) long long requestID;
@property (nonatomic, readonly) SidecarSession *session;
@property (nonatomic, readonly) long long transferID;

- (id)initWithSession:(id)arg1 requestID:(long long)arg2 transferID:(long long)arg3;
- (id)dataForType:(id)arg1;
- (CDUnknownBlockType)_resumeMessage:(id)arg1;

@end
