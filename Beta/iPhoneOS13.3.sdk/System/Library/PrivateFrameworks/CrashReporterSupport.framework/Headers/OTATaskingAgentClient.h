/*
 Image: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OTATaskingAgent;

@interface OTATaskingAgentClient : NSObject

{
    NSXPCConnection *_connection;
    id <OTATaskingAgent> _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (id)init;
- (id)crashreporterKey;
- (id)awdKey;
- (unsigned int)uidForUser:(id)arg1;
- (_Bool)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void *)arg4;
- (_Bool)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3;

@end
