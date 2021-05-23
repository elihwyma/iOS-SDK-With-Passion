/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_log, OS_xpc_object;

@interface ATXXPCActivity : NSObject

{
    NSObject<OS_xpc_object> *_activity;
    NSString *_name;
    NSObject<OS_os_log> *_handle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)shouldDefer;
- (_Bool)didDefer;
- (id)initWithActivity:(id)arg1 name:(id)arg2;
- (id)initWithActivity:(id)arg1 name:(id)arg2 logHandle:(id)arg3;

@end
