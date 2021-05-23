/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVFMovieObserver : NSObject

{
    WeakPtr_1a409454 m_player;
    struct GenericTaskQueue<WebCore::Timer> m_taskQueue;
    int m_delayCallbacks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4;
- (void)disconnect;
- (id).cxx_construct;
- (id)initWithPlayer:(WeakPtr_1a409454 *)arg1;
- (void)didEnd:(id)arg1;
- (void)outputSequenceWasFlushed:(id)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_198678f7)arg4;
- (void)metadataLoaded;

@end
