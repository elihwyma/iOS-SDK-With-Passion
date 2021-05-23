/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWIrisStillImageMovieMetadataCache, BWLimitedGMErrorLogger, NSMutableArray;

@protocol OS_dispatch_queue;

@interface BWIrisMovieGenerator : NSObject

{
    _Bool _sourceIsFrontFacingCamera;
    _Bool _sampleReferenceMoviesEnabled;
    CDStruct_1b6d18a9 _masterMovieDuration;
    struct OpaqueCMByteStream *_byteStream;
    struct OpaqueFigFormatReader *_masterMovieReader;
    _Bool _masterMovieParsingComplete;
    _Bool _vitalInputStreamHasBeenForcedOff;
    int _streamForcedOffErrorCode;
    long long _masterMovieAudioExtractionID;
    CDStruct_1b6d18a9 _actualMovieStartTime;
    struct OpaqueFigSimpleMutex *_movieInfoAndCallbacksMutex;
    NSMutableArray *_movieInfoAndCallbacks;
    int _numberOfPendingReferenceMovies;
    NSObject<OS_dispatch_queue> *_movieGenerationQueue;
    _Bool _suspended;
    BWIrisStillImageMovieMetadataCache *_irisStillImageMovieMetadataCache;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}

@property _Bool suspended;
@property (readonly) int numberOfPendingReferenceMovies;
@property (nonatomic) CDStruct_1b6d18a9 actualMovieStartTime;
@property _Bool vitalInputStreamHasBeenForcedOff;
@property int streamForcedOffErrorCode;

+ (void)initialize;
+ (_Bool)_addStillImageTimeMetadataTrackToAssetWriter:(struct OpaqueFigAssetWriter *)arg1 forTrackTimeScale:(int)arg2 yieldingTrackID:(int *)arg3;

- (void)dealloc;
- (_Bool)flush;
- (id)initWithReadableByteStream:(struct OpaqueCMByteStream *)arg1 metadataByteStream:(struct OpaqueCMByteStream *)arg2 forFrontFacingCamera:(_Bool)arg3 sampleReferenceMoviesEnabled:(_Bool)arg4 movieGenerationQueue:(id)arg5 irisStillImageMovieMetadataCache:(id)arg6;
- (_Bool)_generateIrisMovies:(_Bool)arg1;
- (void)_cancelAllPendingIrisMoviesWithError:(int)arg1;
- (int)_doIrisMovieParsing:(_Bool)arg1;
- (void)_findIrisShortestTrackDuration:(CDStruct_1b6d18a9 *)arg1 audioTrackDuration:(CDStruct_1b6d18a9 *)arg2 flush:(_Bool)arg3;
- (id)_completedMovieInfoAndCallbacksForShortestTrackDuration:(CDStruct_1b6d18a9)arg1 audioTrackDuration:(CDStruct_1b6d18a9)arg2 flush:(_Bool)arg3;
- (_Bool)_generateCompletedIrisMovies:(id)arg1;
- (CDStruct_1b6d18a9)_determineMasterMovieStartTimeForInfo:(id)arg1;
- (int)_generateRefMovieForInfo:(id)arg1 movieLevelMetadata:(id)arg2 generateMetadataMovie:(_Bool)arg3;
- (int)_getAdjustedRefMovieStartTime:(CDStruct_1b6d18a9)arg1 adjustedRefMovieStartTimeOut:(CDStruct_1b6d18a9 *)arg2;
- (int)_getAdjustedRefMovieEndTime:(CDStruct_1b6d18a9)arg1 adjustedRefMovieEndTimeOut:(CDStruct_1b6d18a9 *)arg2;
- (id)initWithReadableByteStream:(struct OpaqueCMByteStream *)arg1 forFrontFacingCamera:(_Bool)arg2 sampleReferenceMoviesEnabled:(_Bool)arg3 movieGenerationQueue:(id)arg4 irisStillImageMovieMetadataCache:(id)arg5;
- (void)writeMovieWithInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)parseAdditionalFragments;
- (_Bool)flushAsync;
- (void)updateOverCaptureQualityScoresForMoviesEndingBefore:(CDStruct_1b6d18a9)arg1 fromMetadataRingBuffer:(id)arg2;

@end
