//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDStaticSyncServerInterface-Protocol.h>

@interface HDStaticSyncServer : HDSubserver <HDStaticSyncServerInterface>
{
}

- (id)remote_runStaticSyncImportWithOptions:(NSUInteger)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (id)remote_runStaticSyncExportWithOptions:(NSUInteger)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 batchSize:(NSUInteger)arg4 completion:(id /* CDUnknownBlockType */)arg5;

@end

