/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface AVProxyKVOObserver : NSObject

{
    id _retainedObservedObject;
    id _unsafeUnretainedObservedObject;
    _Bool _canHandleChanges;
    _Bool _includeInitialValue;
    _Bool _includeChanges;
    NSString *_token;
    NSSet *_keyPaths;
    CDUnknownBlockType _changesBlock;
}

@property (nonatomic, readonly) NSString *token;
@property (nonatomic, readonly) _Bool includeInitialValue;
@property (nonatomic, readonly) _Bool includeChanges;
@property (nonatomic, readonly) NSSet *keyPaths;
@property (nonatomic, readonly) CDUnknownBlockType changesBlock;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (void)startObserving:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithObservedObject:(id)arg1 observer:(id)arg2 keyPaths:(id)arg3 retainingObservedObject:(_Bool)arg4 includeInitialValue:(_Bool)arg5 includeChanges:(_Bool)arg6 changesBlock:(CDUnknownBlockType)arg7;
- (void)_handleValueChangeForKeyPath:(id)arg1 ofObject:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 context:(void *)arg5;

@end
