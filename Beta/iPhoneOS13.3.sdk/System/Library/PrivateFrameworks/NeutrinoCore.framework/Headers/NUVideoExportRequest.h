/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@class NSArray, NSDictionary, NSProgress, NUColorSpace;

@interface NUVideoExportRequest

{
    _Bool _bypassOutputSettingsIfNoComposition;
    _Bool _requiresVideoComposition;
    NSDictionary *_outputSettings;
    NSArray *_metadata;
    NSProgress *_progress;
    double _bitRateMultiplicationFactor;
    NUColorSpace *_cachedColorSpace;
}

@property (retain) NUColorSpace *cachedColorSpace;
@property (retain) NSProgress *progress;
@property (readonly) NUColorSpace *colorSpace;
@property (nonatomic) _Bool requiresVideoComposition;
@property (copy) NSDictionary *outputSettings;
@property (copy) NSArray *metadata;
@property (nonatomic) double bitRateMultiplicationFactor;
@property (nonatomic) _Bool bypassOutputSettingsIfNoComposition;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (void)submitWithProgress:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
