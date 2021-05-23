/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVKVODispatcher, AVTwoPartKeyPath, AVWeakReference, NSString;

@protocol AVCallbackCancellation, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVKeyPathDependency : NSObject

{
    NSObject<OS_dispatch_queue> *_subObjectRegistrationQueue;
    AVKVODispatcher *_KVODispatcher;
    AVWeakReference *_weakReferenceToObject;
    NSString *_dependentKey;
    AVTwoPartKeyPath *_dependencyKeyPath;
    id <AVCallbackCancellation> _leafPropertyChangeNotifier;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (void)initializationIsCompleteForObject:(id)arg1;
- (id)initWithObject:(id)arg1 thatHasPropertyWithKey:(id)arg2 whoseValueDependsOnValueAtKeyPath:(id)arg3;
- (void)_reactToTopLevelPropertyChange:(id)arg1;
- (void)_startObservingSecondLevelPropertyOnNewCurrentValueForTopLevelDependencyProperty:(id)arg1;
- (void)_reactToSecondLevelPropertyChange:(id)arg1;

@end
