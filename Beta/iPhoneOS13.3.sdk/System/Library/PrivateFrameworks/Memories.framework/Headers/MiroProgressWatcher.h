/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@interface MiroProgressWatcher : NSObject

{
    float _progress;
    CDUnknownBlockType _progressHandler;
    id _observedObject;
}

@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (nonatomic) float progress;
@property (retain, nonatomic) id observedObject;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithObservedObject:(id)arg1;

@end
