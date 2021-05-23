/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, GEOReportedProgress, GEOSearchAttributionManifest, GEOSearchAttributionManifestVersionMigrator, NSProgress, NSString, NSURL, NSURLSession, NSURLSessionDataTask;

@protocol GEORequestCounterTicket, NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOSearchAttributionManifestVersionMigrationTask : NSObject

{
    GEOSearchAttributionManifestVersionMigrator *_migrator;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _running;
    NSURL *_newSearchAttributionManifestURL;
    GEOActiveTileGroup *_oldTileGroup;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_downloadTask;
    id <GEORequestCounterTicket> _requestCounterTicket;
    GEOSearchAttributionManifest *_attributionManifest;
    id <NSObject> _transaction;
    GEOActiveTileGroupMigrationTaskOptions *_options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) long long estimatedWeight;
@property (retain, nonatomic) id <NSObject> transaction;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)populateTileGroup:(id)arg1;
- (void)removeOldData:(id)arg1;
- (id)initWithMigrator:(id)arg1 newSearchAttributionManifestURL:(id)arg2 oldTileGroup:(id)arg3;
- (void)_completeWithError:(id)arg1;
- (void)_handleResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;

@end
