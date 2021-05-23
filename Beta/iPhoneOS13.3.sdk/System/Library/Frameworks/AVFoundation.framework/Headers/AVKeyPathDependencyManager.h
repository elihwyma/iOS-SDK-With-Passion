/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakObservableCallbackCancellationHelper, AVWeakReference, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject

{
    AVWeakReference *_weakReferenceToDependencyHost;
    AVWeakObservableCallbackCancellationHelper *_callbackCancellationHelper;
    NSMutableSet *_keyPathDependencies;
}

- (void)dealloc;
- (id)initWithDependencyHost:(id)arg1;
- (void)dependencyHostIsFullyInitialized;
- (void)addCallbackToCancel:(id)arg1;
- (void)cancelAllCallbacks;
- (void)valueForKey:(id)arg1 dependsOnValueAtKeyPath:(id)arg2;

@end
