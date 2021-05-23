/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

#import <ProactiveML/Swift-Protocol.h>

@class NSArray, NSString, PMLModelFullyConnectedLayer;

@interface PMLMultiLabelLogisticRegressionModel : NSObject <Swift>

{
    NSArray *_models;
    PMLModelFullyConnectedLayer *_layer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)pyClass;

- (unsigned long long)count;
- (id)serialize;
- (id)predict:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithModels:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)classify:(id)arg1;
- (id)initWithWeightsArray:(id)arg1 andIntercept:(_Bool)arg2;
- (void)convertToLayerWithDataType:(int)arg1;

@end
