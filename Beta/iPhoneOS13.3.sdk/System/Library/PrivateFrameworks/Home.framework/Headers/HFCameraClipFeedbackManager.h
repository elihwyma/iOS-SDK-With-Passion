/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, HMCameraClipFetchVideoAssetContextOperation, HMCameraProfile, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSOperationQueue, NSString, NSTimer, NSURL, NSURLSession, NSURLSessionDataTask;

@protocol HFCameraClipFeedbackObserving;

@interface HFCameraClipFeedbackManager : NSObject

{
    _Bool _isEligibleToAddFailedClipsToPendingQueue;
    _Bool _disableCertificatePinning;
    CDUnknownBlockType _sessionCompletionHandler;
    id <HFCameraClipFeedbackObserving> _delegate;
    NSString *_backgroundURLSessionIdentifier;
    NSMutableOrderedSet *_pendingClipIdentifiers;
    NSMutableSet *_uploadedClipIdentifiers;
    NSMutableSet *_failedClipIdentifiers;
    NSMutableDictionary *_submittedClipIdentifiers;
    NSURLSession *_backgroundSession;
    NSURLSessionDataTask *_signedURLTask;
    NSOperationQueue *_backgroundSessionQueue;
    NSTimer *_networkingTimeout;
    HMCameraClipFetchVideoAssetContextOperation *_videoDownloadOperation;
    BKSProcessAssertion *_uploadsInProgressAssertion;
    HMCameraProfile *_currentCameraProfile;
    unsigned long long _environment;
    unsigned long long _apiVersion;
    NSString *_currentApiKey;
    NSString *_currentWrappedApiKey;
    NSURL *_currentUploadURL;
}

@property (retain, nonatomic) NSString *backgroundURLSessionIdentifier;
@property (retain, nonatomic) NSMutableOrderedSet *pendingClipIdentifiers;
@property (retain, nonatomic) NSMutableSet *uploadedClipIdentifiers;
@property (retain, nonatomic) NSMutableSet *failedClipIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *submittedClipIdentifiers;
@property (retain, nonatomic) NSURLSession *backgroundSession;
@property (retain, nonatomic) NSURLSessionDataTask *signedURLTask;
@property (retain, nonatomic) NSOperationQueue *backgroundSessionQueue;
@property (nonatomic) _Bool isEligibleToAddFailedClipsToPendingQueue;
@property (retain, nonatomic) NSTimer *networkingTimeout;
@property (retain, nonatomic) HMCameraClipFetchVideoAssetContextOperation *videoDownloadOperation;
@property (retain, nonatomic) BKSProcessAssertion *uploadsInProgressAssertion;
@property (retain, nonatomic) HMCameraProfile *currentCameraProfile;
@property (nonatomic) unsigned long long environment;
@property (nonatomic) unsigned long long apiVersion;
@property (nonatomic) _Bool disableCertificatePinning;
@property (retain, nonatomic) NSString *currentApiKey;
@property (retain, nonatomic) NSString *currentWrappedApiKey;
@property (retain, nonatomic) NSURL *currentUploadURL;
@property (copy, nonatomic) CDUnknownBlockType sessionCompletionHandler;
@property (weak, nonatomic) id <HFCameraClipFeedbackObserving> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (id)dateFormatter;
+ (id)dateStringFromDate:(id)arg1;
+ (id)backgroundURLSessionIdentifier;
+ (id)feedbackRequestURLForClipUUIDString:(id)arg1;
+ (id)_appendDateStringToString:(id)arg1;
+ (id)submissionKeyForCameraClip:(id)arg1 fromCameraProfile:(id)arg2;
+ (id)_cameraProfileFromKey:(id)arg1;
+ (id)_prefixStringWithoutDate:(id)arg1;

- (id)init;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)willResignActive;
- (void)_invalidateAssertion;
- (void)resumeServiceForURLSessionIdentifier:(id)arg1;
- (_Bool)_needsToPurgeClipsOlderThanThirtyDays;
- (void)purgeStaleSubmittedClips;
- (void)prepareServiceForActivityWhileBackgrounded;
- (void)_updatePreviousClipIdentifiers:(id)arg1 forKey:(id)arg2;
- (void)updateLastPurgeDate;
- (void)_cleanUpLocalFilesForIdentifier:(id)arg1;
- (void)_reloadFailedIdentifiersToPendingQueue:(id)arg1;
- (id)_identifierFromString:(id)arg1;
- (id)nextSubmissionKeyToProcess;
- (void)addFailedIdentifiersToPendingQueueIfEligible;
- (void)_cleanUpCurrentCameraProfileIfNeeded;
- (void)cancelSignedURLRequest;
- (id)_cameraClipKeyFromSubmissionKey:(id)arg1;
- (id)_appendDateStringToString:(id)arg1;
- (void)_addIdentifierToPendingClipIdentifiers:(id)arg1;
- (_Bool)didPreviouslySubmitCameraClip:(id)arg1;
- (void)_addSubmissionKeyToUploadService:(id)arg1;
- (void)_cacheFeedbackService;
- (void)submitNextPendingCameraClip;
- (void)uploadStrippedAudioMovieFileAtURL:(id)arg1 toLocation:(id)arg2;
- (void)_failAttemptToUploadCurrentIdentifier;
- (id)_encryptRecording:(id)arg1 usingKey:(id)arg2;
- (id)feedbackServiceURL;
- (id)feedbackServiceHostName;
- (id)_previousFailureIdentifierForIdentifier:(id)arg1;
- (_Bool)_canBypassCertificatePinning;
- (_Bool)_canChallengeBypassCertificatePinning:(id)arg1;
- (void)_removePendingIdentifier:(id)arg1;
- (void)_removeFailureIdentifier:(id)arg1;
- (void)_finalizeHandlingOfIdentifier:(id)arg1;
- (void)_beginNextSubmissionProcessForIdentifier:(id)arg1;
- (id)_cameraProfileKeyFromSubmissionKey:(id)arg1;
- (void)stripAudioFromFileForCameraClipIdentifier:(id)arg1 sendToUploadLocation:(id)arg2;
- (void)invalidateVideoDownloadOperation;
- (void)_prepareQueuesForResumptionOfService;
- (_Bool)_isValidSubmissionKey:(id)arg1;
- (void)_removeFileAtLocation:(id)arg1;
- (_Bool)serviceNeedsToContinueInBackground;
- (void)submitCameraClip:(id)arg1 fromCameraProfile:(id)arg2;
- (void)submitClipsFromCameraProfile:(id)arg1;
- (void)restartFeedbackServiceIfNeeded;

@end
