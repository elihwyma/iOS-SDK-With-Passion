/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTAudioClip, JTMediaItem, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, PVTransformAnimation, UIImage;

@protocol JTClipDelegate;

@interface JTClip : NSObject

{
    _Bool _audioEnabled;
    _Bool _isPastedClip;
    _Bool _isTrimClip;
    _Bool _originalSelfieAudioEnabled;
    int _audioInitialStartOffset;
    int _provisionalAudioInitialStartOffset;
    int _presentationTime;
    int _duration;
    int _mediaStartOffset;
    int _transformInitialStartOffset;
    float _audioVolume;
    NSArray *_transcription;
    NSDate *_transcriptionRunDate;
    NSDate *_transcriptionEditDate;
    NSString *_transcriptionFormattedString;
    PVTransformAnimation *_transformAnimation;
    NSMutableDictionary *_audioAnalysis;
    id <JTClipDelegate> _delegate;
    JTMediaItem *_mediaItem;
    UIImage *_thumbnail;
    JTAudioClip *_audioClip;
    NSString *_uuid;
    NSMutableArray *_effects;
    NSMutableArray *_filters;
    NSMutableArray *_liveTitles;
    NSMutableArray *_overlays;
    NSMutableArray *_sketches;
    NSMutableArray *_arSelfies;
    NSMutableArray *_animojis;
}

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) JTMediaItem *mediaItem;
@property (retain, nonatomic) NSMutableArray *effects;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *liveTitles;
@property (retain, nonatomic) NSMutableArray *overlays;
@property (retain, nonatomic) NSMutableArray *sketches;
@property (retain, nonatomic) NSMutableArray *arSelfies;
@property (retain, nonatomic) NSMutableArray *animojis;
@property (retain, nonatomic) JTAudioClip *audioClip;
@property (weak, nonatomic) id <JTClipDelegate> delegate;
@property (nonatomic) int presentationTime;
@property (nonatomic, readonly) int presentationEndTime;
@property (nonatomic) int duration;
@property (nonatomic) int mediaStartOffset;
@property (nonatomic, readonly) int mediaType;
@property (nonatomic, readonly) struct CGSize mediaSize;
@property (nonatomic) _Bool isPastedClip;
@property (retain, nonatomic) UIImage *thumbnail;
@property (nonatomic, readonly) NSArray *transcription;
@property (retain, nonatomic) NSDate *transcriptionRunDate;
@property (retain, nonatomic) NSDate *transcriptionEditDate;
@property (retain, nonatomic) NSString *transcriptionFormattedString;
@property (nonatomic) _Bool isTrimClip;
@property (retain, nonatomic) PVTransformAnimation *transformAnimation;
@property (nonatomic) int transformInitialStartOffset;
@property (nonatomic) _Bool audioEnabled;
@property (nonatomic) _Bool originalSelfieAudioEnabled;
@property (nonatomic) float audioVolume;
@property (retain, nonatomic) NSMutableDictionary *audioAnalysis;
@property (nonatomic) int audioInitialStartOffset;
@property (nonatomic) int provisionalAudioInitialStartOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultClip;
+ (void)createVideoClipWithLocalURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)defaultClipWithLocalAsset:(id)arg1;
+ (void)createStillClipWithLocalURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)createVideoClipWithAssetIdentifier:(id)arg1 progressHandlerBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)createVideoClipWithLocalURL:(id)arg1 effectStack:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)createStillClipWithAssetIdentifier:(id)arg1 progressHandlerBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)createStillClipPreviewWithLocalURL:(id)arg1 effectStack:(id)arg2 maximumPreviewDimension:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)createStillClipWithImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)createCaptureClip;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isVideo;
- (_Bool)isCamera;
- (_Bool)isAssetLoaded;
- (id)initWithMediaItem:(id)arg1;
- (void)addEffect:(id)arg1;
- (void)removeAllEffects;
- (id)stringForMediaType:(int)arg1;
- (id)clipType;
- (void)addEffectStack:(id)arg1;
- (_Bool)isAssetMissing;
- (_Bool)isAssetInTrash;
- (_Bool)needsDerivativeMedia;
- (_Bool)isStill;
- (_Bool)hasProjectLocalAsset;
- (void)generateThumbnail;
- (void)clipHasChanged;
- (_Bool)_addEffect:(id)arg1;
- (_Bool)_removeAllEffectsOfType:(int)arg1 notifyDelegate:(_Bool)arg2;
- (id)_effectsOfType:(int)arg1;
- (void)clipHasAnUpdatedThumbnail;
- (void)thumbnailWithTargetSize:(struct CGSize)arg1 requestedTime:(int)arg2 includeEffects:(_Bool)arg3 includeTransform:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)effectsOfType:(int)arg1;
- (id)removeStyleTranferOnUnsupportedDevice:(id)arg1;
- (void)thumbnailWithTargetSize:(struct CGSize)arg1 requestedTime:(int)arg2 includeFilters:(_Bool)arg3 includeOverlays:(_Bool)arg4 includeTransform:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)clipWillLoad;
- (void)clipDidLoadWithError:(id)arg1;
- (void)mediaItemWillLoad:(id)arg1;
- (void)mediaItemDidLoad:(id)arg1 error:(id)arg2;
- (void)mediaItem:(id)arg1 hasAnUpdatedThumbnail:(id)arg2;
- (id)filtersForClip;
- (id)transformInfoOfClip;
- (_Bool)isICPLAsset;
- (_Bool)isAssetLocal;
- (_Bool)isAssetUnavailable;
- (_Bool)isStillFromCamera;
- (_Bool)isValidForProject;
- (_Bool)canSaveClipToCameraRoll;
- (id)projectLocalAssetURL;
- (void)setProjectLocalAssetURL:(id)arg1;
- (void)transformHasChanged;
- (void)effectHasChanged:(id)arg1;
- (void)removeEffect:(id)arg1;
- (_Bool)removeAllEffectsOfType:(int)arg1;
- (void)removeAllFiltersWithoutGeneratingAThumbnail;
- (id)effectStack;
- (id)effectStackExcludingType:(int)arg1;
- (_Bool)hasEffectOfType:(int)arg1;
- (void)thumbnailsWithTargetSize:(struct CGSize)arg1 requestedTimes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)thumbnailWithTargetSize:(struct CGSize)arg1 requestedTime:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clipAudioHasChanged;

@end
