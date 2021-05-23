/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class NSString, _RWIRelayConnectionToApplication;

__attribute__((visibility("hidden")))
@interface _RWIApplicationInfo : NSObject

{
    int _hostApplicationPID;
    _Bool _proxy;
    _Bool _hasRemoteDebugSession;
    _Bool _hasUpdatedFromListing;
    int _pid;
    NSString *_bundleId;
    NSString *_name;
    _RWIRelayConnectionToApplication *_connection;
    NSString *_debuggerConnectionIdentifier;
    unsigned long long _debuggerAvailability;
    long long _automationAvailability;
}

@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isProxy) _Bool proxy;
@property (nonatomic) _RWIRelayConnectionToApplication *connection;
@property (copy, nonatomic) NSString *debuggerConnectionIdentifier;
@property (nonatomic) unsigned long long debuggerAvailability;
@property (nonatomic, readonly) long long automationAvailability;
@property (nonatomic, readonly) _Bool hasRemoteDebugSession;
@property (nonatomic, readonly) _Bool hasUpdatedFromListing;

+ (id)identifierForPID:(int)arg1;

- (id)dictionaryRepresentation;
- (id)initWithPID:(int)arg1 bundleId:(id)arg2 name:(id)arg3 isProxy:(_Bool)arg4 connection:(id)arg5 debuggerAvailability:(unsigned long long)arg6;
- (_Bool)updateFromListing:(id)arg1;
- (void)setHostApplicationPID:(int)arg1;

@end
