/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@class NSMutableArray;

@interface TKKeyPathObserver : NSObject

{
    CDUnknownBlockType _block;
    NSMutableArray *_observations;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)stopObserving;
- (void)observe:(id)arg1 keyPath:(id)arg2;

@end
