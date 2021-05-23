/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection

{
    NSUUID *_uuid;
    _Bool _isUsingTokenService;
}

+ (void)initialize;
+ (id)homeDirectoryURL;
+ (id)defaultConnection;
+ (id)defaultConnectionIfExists;
+ (id)secondaryConnectionIfExists;
+ (id)mobileDocumentsURL;
+ (id)secondaryConnection;
+ (id)syncedDesktopURL;
+ (id)syncedDocumentsURL;
+ (id)syncedRootURLs;
+ (id)cloudDocsAppSupportURL;
+ (id)cloudDocsCachesURL;
+ (id)t_connectionForUUID:(id)arg1;
+ (void)t_setDefaultConnection:(id)arg1;
+ (void)t_setMobileDocumentsURL:(id)arg1;
+ (void)invalidateCachedURLProperties;

- (id)initUsingUserLocalDaemonTokenService;
- (struct BRXPCSyncProxy *)newSyncTokenProxy;
- (struct BRXPCSyncProxy *)newSyncProxy;
- (void)_setupAndResume;
- (id)initUsingUserLocalDaemon;

@end
