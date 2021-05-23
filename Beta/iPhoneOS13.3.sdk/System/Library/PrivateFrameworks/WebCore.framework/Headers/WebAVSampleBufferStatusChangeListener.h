/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAVSampleBufferStatusChangeListener : NSObject

{
    struct MediaPlayerPrivateMediaStreamAVFObjC *_parent;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithParent:(struct MediaPlayerPrivateMediaStreamAVFObjC *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingLayers;
- (void)beginObservingLayers;

@end
