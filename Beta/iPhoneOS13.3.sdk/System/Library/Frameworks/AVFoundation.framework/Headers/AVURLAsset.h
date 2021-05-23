/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAsset.h>

@class AVAssetResourceLoader, AVURLAssetInternal, NSString, NSURL;

@interface AVURLAsset : AVAsset

{
    AVURLAssetInternal *_URLAsset;
}

@property (nonatomic, readonly) _Bool shouldMatchDataInCacheByURLPathComponentOnly;
@property (nonatomic, readonly) _Bool shouldMatchDataInCacheByURLWithoutQueryComponent;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) AVAssetResourceLoader *resourceLoader;
@property (nonatomic, readonly) _Bool mayRequireContentKeysForMediaDataProcessing;
@property (copy, nonatomic, readonly) NSURL *URL;

+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;
+ (id)audiovisualTypes;
+ (_Bool)isPlayableExtendedMIMEType:(id)arg1;
+ (id)audiovisualMIMETypes;
+ (id)_figFileMIMETypes;
+ (id)_figStreamingMIMETypes;
+ (id)_figStreamingUTIs;
+ (id)_figFileUTIs;
+ (id)_figFilePathExtensions;
+ (id)_fileUTTypes;
+ (id)_streamingUTTypes;
+ (id)_UTTypes;
+ (id)_figMIMETypes;
+ (id)_avfValidationPlist;
+ (id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)arg1;
+ (id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 assetLoggingIdentifier:(id)arg2 figAssetCreationFlags:(unsigned long long *)arg3 error:(id *)arg4;
+ (id)_figHFSFileTypes;
+ (id)instanceIdentifierMapTable;
+ (id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1;
+ (void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2;
+ (id)userInfoObjectForURLAsset:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (unsigned long long)downloadToken;
- (id)resolvedURL;
- (id)assetCache;
- (id)_instanceIdentifier;
- (id)tracks;
- (void)expire;
- (void)cancelLoading;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (id)lyrics;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (id)_absoluteURL;
- (unsigned long long)referenceRestrictions;
- (void)_tracksDidChange;
- (_Bool)_hasResourceLoaderDelegate;
- (Class)_classForFigAssetInspectorLoader;
- (void)_setAssetInspectorLoader:(id)arg1;
- (id)_resourceLoaderWithRemoteHandlerContext:(id)arg1;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;
- (void)_removeUserInfoObject;
- (Class)_classForAssetTracks;
- (void)_ensureAssetDownloadCache;
- (id)creationOptions;
- (id)_managedAssetCache;
- (id)identifyingTagClass;
- (id)identifyingTag;
- (id)originalNetworkContentURL;
- (id)SHA1Digest;
- (id)downloadDestinationURL;
- (_Bool)_shouldOptimizeAccessForLinearMoviePlayback;
- (void)_setUserInfoObject:(id)arg1;
- (int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(_Bool *)arg2;
- (id)contentKeySession;
- (_Bool)_attachedToExternalContentKeySession;
- (id)_installHandlerForNSURLSessionConfiguration:(id)arg1 queue:(id)arg2;

@end
