/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVOperation.h>

@class AVAssetWriterFigAssetWriterNotificationHandler, NSString;

__attribute__((visibility("hidden")))
@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation

{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (_Bool)isAsynchronous;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;
- (void)didEnterTerminalState;

@end
