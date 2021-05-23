/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class VEKProgress;

__attribute__((visibility("hidden")))
@interface VEKProgressWatcher : NSObject

{
    _Bool _progressIncludesDownload;
    CDUnknownBlockType _progressHandler;
    VEKProgress *_progress;
    id _observedObject;
}

@property (nonatomic) _Bool progressIncludesDownload;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (retain, nonatomic) VEKProgress *progress;
@property (weak, nonatomic) id observedObject;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithObservedObject:(id)arg1;

@end
