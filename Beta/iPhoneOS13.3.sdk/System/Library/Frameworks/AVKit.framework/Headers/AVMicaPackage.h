/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class CALayer, CAStateController, NSString;

__attribute__((visibility("hidden")))
@interface AVMicaPackage : NSObject

{
    NSString *_state;
    NSString *_packageName;
    CAStateController *_stateController;
    long long _layoutDirection;
    CALayer *_rootLayer;
    struct CGSize _targetSize;
    struct CGSize _unscaledSize;
}

@property (nonatomic, readonly) CAStateController *stateController;
@property (nonatomic) struct CGSize unscaledSize;
@property (nonatomic) long long layoutDirection;
@property (retain, nonatomic) CALayer *rootLayer;
@property (copy, nonatomic, readonly) NSString *state;
@property (nonatomic) struct CGSize targetSize;
@property (nonatomic, readonly) NSString *packageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)classSubstitions;
+ (void)asynchronouslyPrepareMicaPackageWithName:(id)arg1 layoutDirection:(long long)arg2 completion:(CDUnknownBlockType)arg3;

- (void)_setState:(id)arg1;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (id)initWithPackageName:(id)arg1 layoutDirection:(long long)arg2;
- (void)setState:(id)arg1 color:(struct CGColor *)arg2;
- (void)removeCompositingFiltersWithName:(id)arg1;
- (id)_recursivelyFindSublayerWithName:(id)arg1 rootLayer:(id)arg2;
- (void)_recursivelySetFillColor:(struct CGColor *)arg1 rootLayer:(id)arg2;
- (void)_recursivelyRemoveCompositingFiltersWithName:(id)arg1 rootLayer:(id)arg2;
- (void)transitionToStateWithName:(id)arg1;
- (void)transitionToStateWithName:(id)arg1 onLayer:(id)arg2;
- (id)availableStates;
- (id)availableStatesOnLayer:(id)arg1;
- (id)sublayerWithName:(id)arg1;
- (void)_loadRootLayerIfNeeded;

@end
