/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVOperation.h>

@class AVAssetWriterInputPassDescription;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation

{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    int _trackID;
    AVAssetWriterInputPassDescription *_nextPassDescription;
}

@property (nonatomic, readonly) AVAssetWriterInputPassDescription *descriptionForNextPass;

- (id)init;
- (void)dealloc;
- (void)start;
- (_Bool)isAsynchronous;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 trackID:(int)arg2;
- (void)_notifyWhetherMorePassesAreNeeded:(_Bool)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3;

@end
