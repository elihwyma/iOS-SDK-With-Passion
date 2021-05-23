/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEODataRequest, GEODataSession, GEODataSessionTask, NSData, NSString, NSURL;

@protocol GEOSimpleTileRequesterOperationDelegate, OS_dispatch_queue, OS_os_activity;

__attribute__((visibility("hidden")))
@interface _GEOSimpleTileRequesterOperation : NSObject

{
    GEODataRequest *_request;
    NSData *_data;
    GEODataSessionTask *_task;
    NSString *_responseEtag;
    struct _GEOTileKey _key;
    NSString *_editionHeader;
    _GEOSimpleTileRequesterOperation *_baseTile;
    _GEOSimpleTileRequesterOperation *_localizationTile;
    id <GEOSimpleTileRequesterOperationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_activity> *_activity;
    NSObject<OS_os_activity> *_parentTileActivity;
    double _timeout;
    double _startTime;
    double _endTime;
    GEODataSession *_dataSession;
    unsigned long long _signpostID;
    int _attempts;
    int _checksumMethod;
    unsigned int _tileEdition;
    _Atomic unsigned int _priority;
    _Bool _finished;
    _Bool _existingCachedDataCurrent;
    _Bool _shouldReportAnalytics;
    NSString *_requestingBundleId;
    double _tileLoaderCreateTime;
    _Bool _shouldDownloadToDisk;
    _Bool _isRunning;
}

@property (nonatomic, readonly) GEODataRequest *request;
@property (nonatomic) unsigned long long signpostID;
@property (retain, nonatomic) NSObject<OS_os_activity> *activity;
@property (retain, nonatomic) NSObject<OS_os_activity> *parentTileActivity;
@property (nonatomic, readonly) NSURL *URL;
@property unsigned int priority;
@property (nonatomic) _Bool shouldDownloadToDisk;
@property (nonatomic) _Bool shouldReportAnalytics;
@property (retain, nonatomic) NSString *requestingBundleId;
@property (nonatomic) double tileLoaderCreateTime;
@property (retain, nonatomic) NSData *data;
@property (nonatomic, readonly) NSURL *downloadedFileURL;
@property (retain, nonatomic) NSString *responseEtag;
@property (retain, nonatomic) GEODataSessionTask *task;
@property (nonatomic, readonly) _Bool responseIsCacheable;
@property (retain, nonatomic) NSString *editionHeader;
@property (retain, nonatomic) _GEOSimpleTileRequesterOperation *baseTile;
@property (retain, nonatomic) _GEOSimpleTileRequesterOperation *localizationTile;
@property (retain, nonatomic) GEODataSession *dataSession;
@property (nonatomic, readonly) long long responseSource;
@property (nonatomic) struct _GEOTileKey key;
@property (nonatomic) unsigned int tileEdition;
@property (nonatomic, readonly) unsigned long long contentLength;
@property (nonatomic, readonly) _Bool finished;
@property (nonatomic) double timeout;
@property (nonatomic, readonly) int httpResponseStatusCode;
@property (nonatomic, readonly, getter=isExistingCachedDataCurrent) _Bool existingCachedDataCurrent;
@property (weak, nonatomic, readonly) id <GEOSimpleTileRequesterOperationDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)start;
- (double)elapsed;
- (double)startTime;
- (id)initWithRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (void)clearAllRelatedOperations;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
- (const struct _GEOTileKey *)keyPtr;
- (void)_recordAnalyticsWithError:(id)arg1;
- (void)taskFailed:(id)arg1 withError:(id)arg2;
- (_Bool)validateTileIntegrityForTask:(id)arg1;

@end
