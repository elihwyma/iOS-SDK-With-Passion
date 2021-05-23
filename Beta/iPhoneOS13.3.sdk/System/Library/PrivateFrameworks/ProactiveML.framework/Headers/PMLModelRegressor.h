/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

#import <ProactiveML/Swift-Protocol.h>

@class NSString, PMLDenseVector;

@interface PMLModelRegressor : NSObject <Swift>

{
    PMLDenseVector *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int count;

+ (id)modelRegressorFromFloat:(float)arg1;
+ (id)modelRegressorFromFloats:(id)arg1;
+ (id)regressorVectorFrom:(id)arg1;

- (id)init;
- (const float *)values;
- (id)toDictionary;
- (id)initFromDictionary:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;
- (id)denseVector;
- (id)initModelRegressorFromFloats:(id)arg1;
- (id)initWithRegressorFromFloat:(float)arg1;
- (id)regressorFor:(int)arg1;
- (const float *)inverseValues;

@end
