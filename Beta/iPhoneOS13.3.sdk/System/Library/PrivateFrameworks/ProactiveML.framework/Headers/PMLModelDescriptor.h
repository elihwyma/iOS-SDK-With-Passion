/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

#import <ProactiveML/Swift-Protocol.h>

@class NSNumber, NSString, PMLModelLearningRates, PMLModelWeights;

@interface PMLModelDescriptor : NSObject <Swift>

{
    NSString *_name;
    NSNumber *_version;
    PMLModelWeights *_weights;
    PMLModelLearningRates *_learningRates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) NSString *name;
@property (retain) NSNumber *version;
@property (retain) PMLModelWeights *weights;
@property (retain) PMLModelLearningRates *learningRates;

+ (_Bool)isValidModelDescriptorInPlistMetadata:(id)arg1 withErrorDescription:(id *)arg2;

- (id)toDictionary;
- (id)initFromDictionary:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;

@end
