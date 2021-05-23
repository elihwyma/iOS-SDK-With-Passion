/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSArray, NSString;

@protocol AVPlayerItemLegibleOutputDependencyFactory, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemLegibleOutputInternal : NSObject

{
    id <AVPlayerItemLegibleOutputDependencyFactory> dependencyFactory;
    NSArray *nativeRepresentationSubtypes;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVWeakReference *weakReferenceToHost;
    _Bool suppressesPlayerRendering;
    double advanceInterval;
    NSString *textStylingResolution;
}

@end
