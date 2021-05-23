/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class AVURLAsset, NSData, NSDate, NSDictionary, NSError, NSString, NSURL, NSURLRequest, NSURLResponse, NSUUID, __CFN_TaskMetrics;

@protocol SZExtractor;

@interface __NSCFURLSessionTaskInfo : NSObject

{
    _Bool _resumedAndWaitingForEarliestBeginDate;
    _Bool _respondedToWillBeginDelayedRequestCallback;
    _Bool _hasStarted;
    _Bool _expectingResumeCallback;
    _Bool _establishedConnection;
    _Bool _disablesRetry;
    _Bool _shouldCancelOnDisconnect;
    _Bool _discretionary;
    _Bool _mayBeDemotedToDiscretionary;
    _Bool __hasSZExtractor;
    _Bool __doesSZExtractorConsumeExtractedData;
    _Bool _startedUserInitiated;
    _Bool _initializedWithAVAsset;
    unsigned int _qos;
    unsigned long long _identifier;
    unsigned long long _taskKind;
    double _creationTime;
    long long _state;
    unsigned long long _suspendCount;
    NSString *_taskDescription;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSDate *_earliestBeginDate;
    long long _countOfBytesClientExpectsToSend;
    long long _countOfBytesClientExpectsToReceive;
    NSError *_error;
    NSURL *_fileURL;
    NSURL *_downloadFileURL;
    NSString *_bundleID;
    NSString *_sessionID;
    unsigned long long _retryCount;
    unsigned long long _lowThroughputTimerRetryCount;
    long long _basePriority;
    long long _discretionaryOverride;
    NSString *_personaUniqueString;
    NSUUID *_uniqueIdentifier;
    NSString *_storagePartitionIdentifier;
    long long _bytesPerSecondLimit;
    unsigned long long _expectedProgressTarget;
    double _loadingPriority;
    NSString *_pathToDownloadTaskFile;
    double _timeoutIntervalForResource;
    id <SZExtractor> __extractor;
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSURL *_destinationURL;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    NSDictionary *_options;
    AVURLAsset *_AVURLAsset;
    NSURL *_AVAssetURL;
    NSURL *_temporaryDestinationURL;
    NSDictionary *_resolvedMediaSelectionPlist;
    NSString *_avAssetDownloadChildDownloadSessionIdentifier;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    NSDictionary *__backgroundTrailers;
    NSDictionary *_additionalProperties;
    __CFN_TaskMetrics *_taskMetrics;
}

@property unsigned long long identifier;
@property unsigned long long taskKind;
@property double creationTime;
@property long long state;
@property unsigned long long suspendCount;
@property (copy) NSString *taskDescription;
@property (copy) NSURLRequest *originalRequest;
@property (copy) NSURLRequest *currentRequest;
@property (copy) NSURLResponse *response;
@property (copy) NSDate *earliestBeginDate;
@property long long countOfBytesClientExpectsToSend;
@property long long countOfBytesClientExpectsToReceive;
@property _Bool resumedAndWaitingForEarliestBeginDate;
@property _Bool respondedToWillBeginDelayedRequestCallback;
@property (copy) NSError *error;
@property (copy) NSURL *fileURL;
@property (copy) NSURL *downloadFileURL;
@property (copy) NSString *bundleID;
@property (copy) NSString *sessionID;
@property _Bool hasStarted;
@property _Bool expectingResumeCallback;
@property _Bool establishedConnection;
@property unsigned long long retryCount;
@property unsigned long long lowThroughputTimerRetryCount;
@property _Bool disablesRetry;
@property _Bool shouldCancelOnDisconnect;
@property long long basePriority;
@property (getter=isDiscretionary) _Bool discretionary;
@property long long discretionaryOverride;
@property unsigned int qos;
@property (copy) NSString *personaUniqueString;
@property (copy) NSUUID *uniqueIdentifier;
@property (copy) NSString *storagePartitionIdentifier;
@property long long bytesPerSecondLimit;
@property unsigned long long expectedProgressTarget;
@property double loadingPriority;
@property _Bool mayBeDemotedToDiscretionary;
@property (copy) NSString *pathToDownloadTaskFile;
@property double timeoutIntervalForResource;
@property (retain, nonatomic) id <SZExtractor> _extractor;
@property (nonatomic) _Bool _hasSZExtractor;
@property (nonatomic) _Bool _doesSZExtractorConsumeExtractedData;
@property _Bool startedUserInitiated;
@property unsigned long long AVAssetDownloadToken;
@property (copy) NSURL *URL;
@property (copy) NSURL *destinationURL;
@property (copy) NSString *assetTitle;
@property (copy) NSData *assetArtworkData;
@property (copy) NSDictionary *options;
@property (retain) AVURLAsset *AVURLAsset;
@property (copy) NSURL *AVAssetURL;
@property _Bool initializedWithAVAsset;
@property (copy) NSURL *temporaryDestinationURL;
@property (copy) NSDictionary *resolvedMediaSelectionPlist;
@property (copy) NSString *avAssetDownloadChildDownloadSessionIdentifier;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesExpectedToReceive;
@property (retain) NSDictionary *_backgroundTrailers;
@property (copy) NSDictionary *additionalProperties;
@property (retain) __CFN_TaskMetrics *taskMetrics;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_loggableDescription;
- (id)initWithTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;
- (void)_logTaskUUIDMapping;
- (id)initWithDataTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;
- (id)initWithUploadTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;
- (id)initWithDownloadTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;
- (id)initWithAVAssetDownloadURL:(id)arg1 destinationURL:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 taskIdentifier:(unsigned long long)arg6 uniqueIdentifier:(id)arg7 bundleID:(id)arg8 sessionID:(id)arg9;
- (id)initWithAVAggregateAssetDownloadChildDownloadSessionIdentifier:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 taskIdentifier:(unsigned long long)arg5 uniqueIdentifier:(id)arg6 bundleID:(id)arg7 sessionID:(id)arg8;

@end
