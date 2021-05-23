/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVKeyPathDependencyManager, AVTwoPartKeyPath, NSString;

__attribute__((visibility("hidden")))
@interface AVKeyPathFlattener : NSObject

{
    AVKeyPathDependencyManager *_dependencyManager;
    AVTwoPartKeyPath *_dependencyKeyPath;
    NSObject *_observedObject;
}

@property (nonatomic, readonly) id dependentProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)observedObject;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (id)initForObservingValueAtKeyPath:(id)arg1 onObject:(id)arg2;
- (id)topLevelDependencyProperty;

@end
