/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _AUParameterTreeObserver : NSObject

{
    CDUnknownBlockType _callback;
}

@property (copy, nonatomic) CDUnknownBlockType callback;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
