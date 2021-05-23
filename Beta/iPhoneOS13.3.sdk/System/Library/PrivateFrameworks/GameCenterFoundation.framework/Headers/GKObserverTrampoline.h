/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface GKObserverTrampoline : NSObject

{
    id _observee;
    NSString *_keyPath;
    CDUnknownBlockType _block;
    int _cancellationPredicate;
    unsigned long long _options;
}

@property (readonly) id token;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObserving;
- (void)cancelObservation;
- (id)initObservingObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;

@end
