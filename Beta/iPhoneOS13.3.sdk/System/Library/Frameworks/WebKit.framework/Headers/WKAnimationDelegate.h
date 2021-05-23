/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKAnimationDelegate : NSObject

{
    unsigned long long _layerID;
    struct RemoteLayerTreeHost *_layerTreeHost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (id)initWithLayerID:(unsigned long long)arg1 layerTreeHost:(struct RemoteLayerTreeHost *)arg2;

@end
