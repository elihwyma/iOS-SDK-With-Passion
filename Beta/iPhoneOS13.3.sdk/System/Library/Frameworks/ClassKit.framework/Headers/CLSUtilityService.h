/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class CLSEndpointConnection;

@protocol OS_dispatch_queue;

@interface CLSUtilityService : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CLSEndpointConnection *_endpointConnection;
}

@property (retain, nonatomic) CLSEndpointConnection *endpointConnection;

+ (id)sharedInstance;
+ (Class)endpointClass;

- (id)initWithEndpoint:(id)arg1;
- (id)utilityServer:(CDUnknownBlockType)arg1;
- (void)syncFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)databasePathWithCompletion:(CDUnknownBlockType)arg1;
- (void)recreateDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)recreateDevelopmentDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)getDevModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDevMode:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncStatsWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncPushWithCompletion:(CDUnknownBlockType)arg1;
- (void)statusWithCompletion:(CDUnknownBlockType)arg1;
- (void)addAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authorizationStatusForContextAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
