/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetInspector, NSMutableArray, NSURL;

__attribute__((visibility("hidden")))
@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader

{
    AVAssetInspector *_assetInspector;
    struct OpaqueFigFormatReader *_formatReader;
    struct OpaqueFigSimpleMutex *_loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    long long _status;
    int _basicInspectionFailureCode;
    NSURL *_URL;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (long long)_status;
- (id)URL;
- (CDStruct_1b6d18a9)duration;
- (_Bool)hasProtectedContent;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelLoading;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (_Bool)_isStreaming;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (id)lyrics;
- (void)_serverHasDied;
- (_Bool)isPlayable;
- (_Bool)isExportable;
- (_Bool)isReadable;
- (_Bool)isComposable;
- (struct OpaqueFigFormatReader *)_formatReader;
- (id)figChapterGroupInfo;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)assetInspector;
- (void)_setStatus:(long long)arg1 figErrorCode:(int)arg2;
- (struct OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)arg1;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (long long)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id *)arg2;
- (_Bool)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1;
- (_Bool)_inspectionRequiresAFormatReader;
- (_Bool)_updateStatusWhileMutexLocked:(long long)arg1 figErrorCode:(int)arg2;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (id)_loadValuesWhileMutexLockedForKeys:(id)arg1;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (_Bool)_providesAccurateTiming;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;

@end
