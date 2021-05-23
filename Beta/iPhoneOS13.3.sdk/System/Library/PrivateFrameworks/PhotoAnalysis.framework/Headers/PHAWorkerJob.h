/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class PHPhotoLibrary;

@protocol PHAWorkerJobDelegate;

@interface PHAWorkerJob : NSObject

{
    _Bool _didTimeout;
    _Bool _disableReactionCheck;
    _Bool _producedAssetMetadataChanges;
    _Bool _isGraphUpdateJob;
    _Bool _ignoreFurtherResults;
    _Bool _treatMissingResultsAsFailures;
    _Bool _isReactionJob;
    short _workerType;
    unsigned long long _scenario;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _countOfFailedStarts;
    id <PHAWorkerJobDelegate> _delegate;
    double _lastReportTimeAsInterval;
}

@property (nonatomic) _Bool ignoreFurtherResults;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long countOfFailedStarts;
@property (weak, nonatomic) id <PHAWorkerJobDelegate> delegate;
@property double lastReportTimeAsInterval;
@property (readonly) double intervalSinceLastReport;
@property (nonatomic) _Bool treatMissingResultsAsFailures;
@property (nonatomic, setter=setIsReactionJob:) _Bool isReactionJob;
@property (nonatomic, readonly) unsigned long long scenario;
@property (nonatomic, readonly) short workerType;
@property (nonatomic) _Bool didTimeout;
@property (nonatomic) _Bool disableReactionCheck;
@property _Bool producedAssetMetadataChanges;
@property _Bool isGraphUpdateJob;
@property (nonatomic, readonly) _Bool finished;
@property (nonatomic, readonly) float completionScore;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finish;
- (void)prepare;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (id)statusAsDictionary;
- (_Bool)isEqualToWorkerJob:(id)arg1;
- (void)stopAcceptingResults;
- (void)extendTimeout;
- (void)extendTimeoutOrUpdateStopIfNeeded:(_Bool *)arg1;

@end
