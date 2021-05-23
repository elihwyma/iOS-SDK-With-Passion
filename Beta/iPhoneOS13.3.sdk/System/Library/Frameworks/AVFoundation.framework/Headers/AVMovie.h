/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAsset.h>

@class AVMediaDataStorage, AVMovieInternal, NSArray, NSData, NSURL;

@interface AVMovie : AVAsset

{
    AVMovieInternal *_movie;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) AVMediaDataStorage *defaultMediaDataStorage;
@property (nonatomic, readonly) NSArray *tracks;
@property (nonatomic, readonly) _Bool canContainMovieFragments;
@property (nonatomic, readonly) _Bool containsMovieFragments;

+ (void)initialize;
+ (_Bool)expectsPropertyRevisedNotifications;
+ (id)movieTypes;
+ (id)movieWithURL:(id)arg1 options:(id)arg2;
+ (id)movieWithData:(id)arg1 options:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (_Bool)hasProtectedContent;
- (id)tracksWithMediaType:(id)arg1;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (id)trackWithTrackID:(int)arg1;
- (id)trackReferences;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (id)_absoluteURL;
- (unsigned long long)referenceRestrictions;
- (id)_initializationOptions;
- (Class)_classForMovieTracks;
- (struct OpaqueFigMutableMovie *)_figMutableMovie;
- (void)_startListeningToLoaderNotifications;
- (id)_initWithFormatReader:(struct OpaqueFigFormatReader *)arg1 URL:(id)arg2 data:(id)arg3 options:(id)arg4;
- (void)_stopListeningToLoaderNotifications;
- (id)_initWithFigAsset:(struct OpaqueFigAsset *)arg1;
- (id)_initWithFigError:(int)arg1 userInfo:(id)arg2;
- (struct OpaqueFigMutableMovie *)_figMutableMovieFromFormatReader:(struct OpaqueFigFormatReader *)arg1;
- (struct OpaqueFigMutableMovie *)_mutableMovieForFileType:(id)arg1;
- (id)movieHeaderWithFileType:(id)arg1 error:(id *)arg2;
- (_Bool)writeMovieHeaderToURL:(id)arg1 fileType:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)isCompatibleWithFileType:(id)arg1;

@end
