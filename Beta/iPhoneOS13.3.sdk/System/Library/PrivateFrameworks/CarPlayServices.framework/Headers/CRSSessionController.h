/*
 Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, NSString, RBSProcessHandle;

@interface CRSSessionController : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _lock_invalidated;
    RBSProcessHandle *_process;
    BSServiceConnection *_connection;
}

@property (retain, nonatomic) RBSProcessHandle *process;
@property (retain, nonatomic) BSServiceConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;

@end
