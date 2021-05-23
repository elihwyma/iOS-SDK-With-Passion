/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@protocol OS_dispatch_queue;

@interface SSVMediaSocialAdminPermissionsCoordinator : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _refreshPeriod;
}

@property (nonatomic, readonly) _Bool isCurrentUserAdmin;
@property double refreshPeriod;

+ (id)sharedCoordinator;

- (id)init;
- (void)reset;
- (void)getAdminStatusWithOptions:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)_adminStatusForAccountID:(id)arg1;
- (_Bool)_statusIsFresh:(id)arg1;
- (void)_setAdminStatus:(id)arg1 forAccountID:(id)arg2;
- (void)getAdminStatusAndWaitWithOptions:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end
