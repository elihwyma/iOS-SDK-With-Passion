/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/Swift-Protocol.h>

@class VKSceneConfiguration, VKScreenCanvas;

@protocol VKInteractiveMap;

@protocol VKNavigationCameraController <Swift>

@property (nonatomic) VKScreenCanvas<VKInteractiveMap> *screenCanvas;
@property (nonatomic) VKSceneConfiguration *sceneConfiguration;
@property (nonatomic) double zoomScale;

- (unsigned short)stop;
- (unsigned short)startWithPounce:startLocation:startCourse:pounceCompletionHandler: /* Error: Ran out of types for this method. */;

@end
