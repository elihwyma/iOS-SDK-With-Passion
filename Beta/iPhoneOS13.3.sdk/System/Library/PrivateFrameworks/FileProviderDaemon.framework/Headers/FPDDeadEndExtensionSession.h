/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPDDeadEndExtensionSession : NSObject

{
    _Bool hasFileProviderPresenceTCCAccess;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasFileProviderPresenceTCCAccess;

- (void)invalidate;
- (void)start;
- (void)dumpStateTo:(id)arg1;
- (id)newFileProviderProxyWithPID:(int)arg1;
- (id)newFileProviderProxyWithoutPID;
- (id)newFileProviderProxyWithoutPIDWithTimeout:(_Bool)arg1;
- (void)asyncUnregisterLifetimeExtensionForObject:(id)arg1;
- (void)registerLifetimeExtensionForObject:(id)arg1;
- (void)unregisterLifetimeExtensionForObject:(id)arg1;
- (id)newFileProviderProxyWithTimeout:(_Bool)arg1 pid:(int)arg2;
- (id)existingFileProviderProxyWithTimeout:(_Bool)arg1 pid:(int)arg2;
- (void)updatePresenceTCCWithAuditToken:(CDStruct_6ad76789)arg1;

@end
