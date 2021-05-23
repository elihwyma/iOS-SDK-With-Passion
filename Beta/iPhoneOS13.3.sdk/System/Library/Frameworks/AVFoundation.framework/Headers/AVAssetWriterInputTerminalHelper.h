/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetWriterInputHelper.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper

{
    long long _terminalStatus;
    _Bool _didRequestMediaDataOnce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)status;
- (_Bool)isReadyForMoreMediaData;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)markAsFinished;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 terminalStatus:(long long)arg2;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;
- (_Bool)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)markCurrentPassAsFinished;
- (void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1;
- (_Bool)mediaDataRequesterShouldRequestMediaData;

@end
