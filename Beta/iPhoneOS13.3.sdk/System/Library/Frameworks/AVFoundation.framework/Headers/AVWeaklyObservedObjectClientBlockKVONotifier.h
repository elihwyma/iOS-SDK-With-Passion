/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCallbackContextRegistry, AVWeakReference, NSString;

@protocol AVWeakObservable;

__attribute__((visibility("hidden")))
@interface AVWeaklyObservedObjectClientBlockKVONotifier : NSObject

{
    AVCallbackContextRegistry *_callbackContextRegistry;
    void *_callbackContextToken;
    NSObject *_observer;
    AVWeakReference *_weakReferenceToObject;
    NSObject<AVWeakObservable> *_unsafeUnretainedObject;
    NSString *_keyPath;
    unsigned long long _options;
    CDUnknownBlockType _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)cancelCallbacks;
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;
- (void)callbackDidFireWithChangeDictionary:(id)arg1;

@end
