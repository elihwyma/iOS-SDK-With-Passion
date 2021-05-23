/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMTranscoderTelemetry : NSObject

{
    unsigned char _signpostId;
}

- (id)init;
- (long long)_telemetryImageTypeForUTI:(id)arg1;
- (void)_emitSignpostTranscodeRange:(long long)arg1 begin:(_Bool)arg2;
- (void)_emitSignpostPreviewGenerationRange:(long long)arg1 begin:(_Bool)arg2;
- (void)emitTranscodeBeginFromUTI:(id)arg1;
- (void)emitTranscodeEndFromUTI:(id)arg1;
- (void)emitPreviewGenerationBeginFromUTI:(id)arg1;
- (void)emitPreviewGenerationEndFromUTI:(id)arg1;
- (void)emitSignpostNoTranscodeFromUTI:(id)arg1;
- (void)emitSignpostTranscodeStepForDestinationUTI:(id)arg1;
- (void)emitSignpostTranscodeFinalForDestinationUTI:(id)arg1;
- (void)emitSignpostTranscodeSkipSourceUTI:(id)arg1;

@end
