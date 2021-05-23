/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface FlowClassification : NSObject

{
    unsigned long long _condensedValues;
    unsigned int _disposition;
    unsigned int _latency;
    unsigned int _jitter;
    unsigned int _lossTolerance;
    unsigned int _burstiness;
    unsigned int _size;
    unsigned int _requiredBandwidth;
    unsigned int _preferredBandwidth;
}

@property (nonatomic) unsigned int disposition;
@property (nonatomic) unsigned int latency;
@property (nonatomic) unsigned int jitter;
@property (nonatomic) unsigned int lossTolerance;
@property (nonatomic) unsigned int burstiness;
@property (nonatomic) unsigned int size;
@property (nonatomic) unsigned int requiredBandwidth;
@property (nonatomic) unsigned int preferredBandwidth;
@property (nonatomic, readonly) unsigned int duration;

+ (id)defaultInstance;
+ (unsigned int)dispositionFromDigest:(struct FlowClassificationDigest *)arg1;
+ (unsigned int)latencyFromDigest:(struct FlowClassificationDigest *)arg1;
+ (unsigned int)jitterFromDigest:(struct FlowClassificationDigest *)arg1;
+ (unsigned int)lossToleranceFromDigest:(struct FlowClassificationDigest *)arg1;
+ (unsigned int)requiredBandwidthsizeFromDigest:(struct FlowClassificationDigest *)arg1;
+ (unsigned int)desiredBandwidthsizeFromDigest:(struct FlowClassificationDigest *)arg1;
+ (id)propertyFlagsToString:(unsigned int)arg1;
+ (id)classFlagsToString:(unsigned int)arg1;
+ (id)undefinedInstance;

- (id)description;
- (_Bool)configure:(id)arg1;

@end
