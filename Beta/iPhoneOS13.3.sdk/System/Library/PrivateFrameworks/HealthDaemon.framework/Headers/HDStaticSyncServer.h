/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSubserver.h>

@class NSString;

@interface HDStaticSyncServer : HDSubserver

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)remote_runStaticSyncExportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 batchSize:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)remote_runStaticSyncImportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
