/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ICURLSessionManager : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_cachedSessions;
}

+ (id)defaultSession;
+ (id)highPrioritySession;
+ (id)sharedSessionManager;

- (id)init;
- (id)sessionWithIdentifier:(id)arg1 configuration:(id)arg2;
- (id)sessionWithQualityOfService:(long long)arg1;
- (id)_sessionIdentifierWithQualityOfService:(long long)arg1;
- (id)_newSessionWithQualityOfService:(long long)arg1;
- (id)sessionWithIdentifier:(id)arg1;
- (void)addSession:(id)arg1 withIdentifier:(id)arg2;
- (void)removeSessionWithIdentifier:(id)arg1;

@end
