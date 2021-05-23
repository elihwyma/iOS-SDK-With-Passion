/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAVSampleBufferErrorListener : NSObject

{
    WeakPtr_1d7f609b _parent;
    struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0, WTF::CrashOnOverflow, 16> _layers;
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0, WTF::CrashOnOverflow, 16> _renderers;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithParent:(WeakPtr_1d7f609b *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id).cxx_construct;
- (void)layerFailedToDecode:(id)arg1;
- (void)beginObservingLayer:(id)arg1;
- (void)stopObservingLayer:(id)arg1;
- (void)beginObservingRenderer:(id)arg1;
- (void)stopObservingRenderer:(id)arg1;

@end
