/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebCoreAudioCaptureSourceIOSListener : NSObject

{
    struct CoreAudioCaptureSourceFactoryIOS *_callback;
}

- (void)invalidate;
- (id)initWithCallback:(struct CoreAudioCaptureSourceFactoryIOS *)arg1;
- (void)handleInterruption:(id)arg1;
- (void)sessionMediaServicesWereReset:(id)arg1;

@end
