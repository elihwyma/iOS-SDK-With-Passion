/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

#import <MPSNeuralNetwork/Swift-Protocol.h>

@class NSData;

@interface MPSCNNLossDataDescriptor : NSObject <Swift>

{
    NSData *_data;
    unsigned long long _layout;
    CDStruct_da2e99ad _size;
    unsigned long long _bytesPerRow;
    unsigned long long _bytesPerImage;
}

@property (nonatomic, readonly) unsigned long long layout;
@property (nonatomic, readonly) CDStruct_14f26992 size;
@property (nonatomic) unsigned long long bytesPerRow;
@property (nonatomic) unsigned long long bytesPerImage;

+ (id)cnnLossDataDescriptorWithData:(id)arg1 layout:(unsigned long long)arg2 size:(CDStruct_14f26992)arg3;

- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
