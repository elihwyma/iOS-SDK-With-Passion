/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface GEOXPCActivity : NSObject

{
    NSString *_name;
    _Bool _isRepeating;
    _Bool _shouldLaunchDaemon;
    CDUnknownBlockType _handler;
    NSObject<OS_xpc_object> *_activity;
}

+ (void)checkInActivity:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)cancelActivity:(id)arg1;
+ (id)registerActivity:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)updateActivities:(CDUnknownBlockType)arg1;
+ (void)clearActivity:(id)arg1;
+ (void)addActivity:(id)arg1 shouldLaunchDaemon:(_Bool)arg2 repeating:(_Bool)arg3;
+ (void)resetActivities;

- (void)dealloc;
- (void)cancelActivity;
- (void)finishActivity;
- (_Bool)shouldDeferActivity;
- (void)deferActivity;
- (id)initWithName:(id)arg1 criteria:(id)arg2 shouldLaunchDaemon:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_handleRunActivity:(id)arg1;

@end
