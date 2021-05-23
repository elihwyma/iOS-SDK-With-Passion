/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@interface MLInternalSettings : NSObject

{
    _Bool _restrictNeuralNetworksToUseCPUOnly;
    _Bool _restrictNeuralNetworksFromUsingANE;
    _Bool _isNeuralNetworkGPUPathForbidden;
}

@property _Bool restrictNeuralNetworksToUseCPUOnly;
@property _Bool restrictNeuralNetworksFromUsingANE;
@property (nonatomic, readonly) _Bool isNeuralNetworkGPUPathForbidden;

+ (id)globalSettings;
+ (_Bool)deviceHasANE;

- (id)init;

@end
