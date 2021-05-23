/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@interface MPCAudioSpectrumObserver : NSObject

{
    struct _MPCAudioSpectrumAnalyzerBandInternal *_bands;
    unsigned long long _bandsStorageSize;
    long long _numberOfBands;
    CDUnknownBlockType _onUpdate;
}

@property (nonatomic, readonly) long long numberOfBands;
@property (copy, nonatomic) CDUnknownBlockType onUpdate;

+ (id)defaultObserver;

- (void)dealloc;
- (void)beginReport;
- (void)finishReport;
- (long long)addAnalysisBand:(struct MPCAudioSpectrumAnalyzerBand)arg1;
- (void)_resizeBandStorage;
- (float)averagePowerOfBandAtIndex:(long long)arg1 band:(out struct MPCAudioSpectrumAnalyzerBand *)arg2;

@end
