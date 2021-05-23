/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@protocol _MKKVOProxyDelegate;

__attribute__((visibility("hidden")))
@interface _MKKVOProxy : NSObject

{
    id <_MKKVOProxyDelegate> _delegate;
}

@property (weak, nonatomic) id <_MKKVOProxyDelegate> delegate;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithDelegate:(id)arg1;
- (void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserverForObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2;

@end
