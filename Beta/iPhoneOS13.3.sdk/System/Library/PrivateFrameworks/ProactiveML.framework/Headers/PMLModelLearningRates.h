/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

#import <ProactiveML/Swift-Protocol.h>

@class NSString, PMLMutableDenseVector;

@interface PMLModelLearningRates : NSObject <Swift>

{
    PMLMutableDenseVector *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)modelLearningRatesFromFloats:(id)arg1;

- (id)init;
- (unsigned long long)length;
- (float *)values;
- (id)toDictionary;
- (id)initFromDictionary:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;
- (id)initModelLearningRatesFromFloats:(id)arg1;

@end
