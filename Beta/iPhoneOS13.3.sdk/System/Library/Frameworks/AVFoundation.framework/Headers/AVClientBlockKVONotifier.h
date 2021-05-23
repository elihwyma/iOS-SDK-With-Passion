/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCallbackContextRegistry, NSString;

__attribute__((visibility("hidden")))
@interface AVClientBlockKVONotifier : NSObject

{
    AVCallbackContextRegistry *_callbackContextRegistry;
    void *_callbackContextToken;
    NSObject *_observer;
    NSObject *_object;
    NSString *_keyPath;
    unsigned long long _options;
    CDUnknownBlockType _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject *observedObject;

- (void)dealloc;
- (void)start;
- (void)cancelCallbacks;
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;
- (void)callbackDidFireWithChangeDictionary:(id)arg1;

@end
