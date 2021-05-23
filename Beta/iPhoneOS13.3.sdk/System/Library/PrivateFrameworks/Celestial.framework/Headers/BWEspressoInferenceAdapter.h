/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWEspressoInferenceAdapter : NSObject

+ (void)initialize;
+ (id)platformIdentifier;
+ (id)celestialClassifiersBundle;
+ (id)celestialClassifiersSubdirectory;
+ (id)espressoNetworkURLForPlatformedResource:(id)arg1 bundle:(id)arg2 subdirectory:(id)arg3;

- (id)inferenceProviderForType:(int)arg1 version:(CDStruct_08002bce)arg2 configuration:(id)arg3 resourceProvider:(id)arg4 status:(int *)arg5;
- (int)_mostAcceleratedExecutionTargetForSmartCameraFromResourceProvider:(id)arg1;

@end
