/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AVAssetInspectorLoader : NSObject

{
    AVWeakReference *_weakReference;
}

@property (nonatomic, readonly, getter=_weakReference) AVWeakReference *weakReference;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly, getter=_formatReader) struct OpaqueFigFormatReader *formatReader;
@property (nonatomic, readonly, getter=_figAsset) struct OpaqueFigAsset *figAsset;
@property (nonatomic, readonly, getter=_playbackItem) struct OpaqueFigPlaybackItem *playbackItem;
@property (nonatomic, readonly, getter=_classForTrackInspectors) Class classForTrackInspectors;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) NSString *lyrics;
@property (nonatomic, readonly, getter=isPlayable) _Bool playable;
@property (nonatomic, readonly, getter=isExportable) _Bool exportable;
@property (nonatomic, readonly, getter=isReadable) _Bool readable;
@property (nonatomic, readonly, getter=isComposable) _Bool composable;
@property (nonatomic, readonly, getter=isCompatibleWithSavedPhotosAlbum) _Bool compatibleWithSavedPhotosAlbum;
@property (nonatomic, readonly) NSArray *figChapterGroupInfo;
@property (nonatomic, readonly) NSArray *figChapters;
@property (nonatomic, readonly) NSURL *resolvedURL;
@property (nonatomic, readonly) NSURL *originalNetworkContentURL;
@property (nonatomic, readonly) unsigned long long downloadToken;
@property (nonatomic, readonly) _Bool hasProtectedContent;
@property (nonatomic, readonly, getter=_isStreaming) _Bool streaming;
@property (nonatomic, readonly) long long firstFragmentSequenceNumber;
@property (nonatomic, readonly) long long fragmentCount;
@property (nonatomic, readonly, getter=isAssociatedWithFragmentMinder) _Bool associatedWithFragmentMinder;
@property (nonatomic, getter=_fragmentMindingInterval, setter=_setFragmentMindingInterval:) double fragmentMindingInterval;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelLoading;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (void)_serverHasDied;
- (id)assetInspector;
- (id)_createAVErrorForError:(id)arg1 andFigErrorCode:(int)arg2;

@end
