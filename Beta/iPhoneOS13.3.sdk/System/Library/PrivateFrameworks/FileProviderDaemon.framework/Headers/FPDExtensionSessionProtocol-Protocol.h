/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <FileProviderDaemon/Swift-Protocol.h>

@protocol FPDExtensionSessionProtocol <Swift>

@property (nonatomic) _Bool hasFileProviderPresenceTCCAccess;

- (unsigned short)invalidate;
- (unsigned short)start;
- (unsigned short)dumpStateTo: /* Error: Ran out of types for this method. */;
- (unsigned short)newFileProviderProxyWithPID: /* Error: Ran out of types for this method. */;
- (unsigned short)newFileProviderProxyWithoutPID;
- (unsigned short)newFileProviderProxyWithoutPIDWithTimeout: /* Error: Ran out of types for this method. */;
- (unsigned short)asyncUnregisterLifetimeExtensionForObject: /* Error: Ran out of types for this method. */;
- (unsigned short)registerLifetimeExtensionForObject: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterLifetimeExtensionForObject: /* Error: Ran out of types for this method. */;
- (unsigned short)newFileProviderProxyWithTimeout:pid: /* Error: Ran out of types for this method. */;
- (unsigned short)existingFileProviderProxyWithTimeout:pid: /* Error: Ran out of types for this method. */;
- (unsigned short)updatePresenceTCCWithAuditToken: /* Error: Ran out of types for this method. */;

@end
