/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetReaderOutputInternal, AVWeakReference, NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject

{
    AVAssetReaderOutputInternal *_internal;
}

@property (nonatomic, readonly, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;
@property (nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;
@property (nonatomic, readonly, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;
@property (nonatomic, readonly, getter=_trimsSampleDurations) _Bool trimsSampleDurations;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic) _Bool alwaysCopiesSampleData;

+ (void)initialize;
+ (id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)arg1 withFormatDescription:(id)arg2;

- (id)init;
- (void)dealloc;
- (long long)_status;
- (_Bool)_isFinished;
- (id)_asset;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (id)_errorForOSStatus:(int)arg1;
- (void)_attachToWeakReferenceToAssetReader:(id)arg1;
- (_Bool)_prepareForReadingReturningError:(id *)arg1;
- (void)_cancelReading;
- (struct OpaqueFigAssetReader *)_figAssetReader;
- (_Bool)supportsRandomAccess;
- (id)currentTimeRanges;
- (_Bool)maximizePowerEfficiency;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader *)arg1;
- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;
- (void)_markAsFinished;
- (void)markConfigurationAsFinal;
- (_Bool)_updateTimeRangesOnFigAssetReaderReturningError:(id *)arg1;
- (void)setMaximizePowerEfficiency:(_Bool)arg1;
- (void)setSupportsRandomAccess:(_Bool)arg1;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1;
- (void)resetForReadingTimeRanges:(id)arg1;
- (void)_figAssetReaderDecodeError;
- (void)_figAssetReaderFailed;
- (void)_figAssetReaderServerConnectionDied;

@end
