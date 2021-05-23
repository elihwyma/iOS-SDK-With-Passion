/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTEffectsPreviewGenerator, JTOverlayEffect, NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CFXOverlayPickerAnimatedPreviewWriter : NSObject

{
    struct CGImageDestination *_imageDestination;
    _Bool _isFirstAnimatedFrame;
    JTOverlayEffect *_overlay;
    NSString *_destinationPath;
    NSDictionary *_frameProperties;
    unsigned long long _currentFrameCount;
    unsigned long long _previewFrameRate;
    double _previewDuration;
    unsigned long long _previewStartFrameIndex;
    unsigned long long _targetFrameCount;
    JTEffectsPreviewGenerator *_previewGenerator;
    NSObject<OS_dispatch_queue> *_writerQueue;
    CDUnknownBlockType _completionBlock;
    struct CGSize _previewSizeInPixels;
    CDStruct_1b6d18a9 _currentRenderTime;
}

@property (retain, nonatomic) JTOverlayEffect *overlay;
@property (nonatomic, readonly) struct CGSize previewSizeInPixels;
@property (retain, nonatomic) NSString *destinationPath;
@property (retain, nonatomic) NSDictionary *frameProperties;
@property (nonatomic) unsigned long long currentFrameCount;
@property (nonatomic) unsigned long long previewFrameRate;
@property (nonatomic) double previewDuration;
@property (nonatomic) unsigned long long previewStartFrameIndex;
@property (nonatomic) unsigned long long targetFrameCount;
@property (nonatomic) CDStruct_1b6d18a9 currentRenderTime;
@property (retain, nonatomic) JTEffectsPreviewGenerator *previewGenerator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *writerQueue;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (nonatomic) _Bool isFirstAnimatedFrame;

- (id)initWithOverlayEffectId:(id)arg1 previewSizeInPixels:(struct CGSize)arg2 previewDuration:(double)arg3 previewFrameRate:(unsigned long long)arg4 previewStartFrameIndex:(unsigned long long)arg5;
- (void)writeAnimatedPreviewToPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)CFX_initializeEffectForPreviewing;
- (void)CFX_beginWriting;
- (void)CFX_finishWriting;
- (void)CFX_writeNextEffectFrame;

@end
