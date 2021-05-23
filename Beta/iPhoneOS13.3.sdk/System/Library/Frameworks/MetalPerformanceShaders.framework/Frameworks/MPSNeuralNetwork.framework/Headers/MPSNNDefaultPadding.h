/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

@class NSString;

@interface MPSNNDefaultPadding : NSObject

{
    unsigned long long _method;
    _Bool _mpsOwned;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)paddingWithMethod:(unsigned long long)arg1;
+ (id)paddingForTensorflowAveragePooling;
+ (id)paddingForTensorflowAveragePoolingValidOnly;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (unsigned long long)paddingMethod;
- (id)initWithPaddingMethod:(unsigned long long)arg1;

@end
