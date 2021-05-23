/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOApplicationAuditToken, GEOPowerAssertion, GEOReportedProgress, NSArray, NSMapTable, NSMutableArray, NSProgress, NSString, NSURL;

@protocol OS_dispatch_queue, OS_os_log;

@interface GEOResourceLoader : NSObject <Swift>

{
    NSString *_directory;
    NSString *_additionalDirectoryToConsider;
    NSMutableArray *_resourcesToLoad;
    CDUnknownBlockType _completionHandler;
    unsigned long long _numberOfDownloadsInProgress;
    long long _numberOfCopiesInProgress;
    _Bool _canceled;
    _Bool _requiresWiFi;
    NSURL *_baseURL;
    NSURL *_proxyURL;
    unsigned long long _maxConcurrentLoads;
    NSArray *_resourceInfos;
    NSMutableArray *_loadedResources;
    GEOApplicationAuditToken *_auditToken;
    _Bool _allowResumingPartialDownloads;
    NSMapTable *_inProgressResourceDownloads;
    GEOPowerAssertion *_powerAssertion;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
    NSURL *_authProxyURL;
    NSObject<OS_os_log> *_log;
    unsigned long long _signpostID;
    _Bool _preferDirectNetworking;
}

@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) _Bool requiresWiFi;
@property (nonatomic) _Bool preferDirectNetworking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSProgress *progress;

+ (Class)resourceLoadOperationClass;

- (id)init;
- (void)cancel;
- (void)_cleanup;
- (id)initWithTargetDirectory:(id)arg1 baseURL:(id)arg2 proxyURL:(id)arg3 resources:(id)arg4 maximumConcurrentLoads:(unsigned long long)arg5 additionalDirectoryToConsider:(id)arg6 log:(id)arg7 signpostID:(unsigned long long)arg8;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)_loadResourcesFromDisk;
- (void)_loadNextResourceFromNetwork;
- (_Bool)_establishHardLinkIfPossibleForResource:(id)arg1 toResource:(id)arg2 error:(id *)arg3;
- (_Bool)_copyResource:(id)arg1 fromPath:(id)arg2 allowCreatingHardLink:(_Bool)arg3 error:(id *)arg4;
- (void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 checksum:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;

@end
