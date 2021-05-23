/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@protocol ARTechniqueDelegate;

@interface ARTechnique : NSObject

{
    id <ARTechniqueDelegate> _delegate;
    unsigned long long _powerUsage;
    double _bonusLatency;
    NSNumber *_traceKey;
}

@property (weak) id <ARTechniqueDelegate> delegate;
@property unsigned long long powerUsage;
@property double bonusLatency;
@property (readonly) NSNumber *traceKey;

+ (id)techniqueOfClass:(Class)arg1 inArray:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)prepare;
- (id)processData:(id)arg1;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (_Bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (long long)captureBehavior;
- (_Bool)deterministicMode;
- (id)initWithParallelTechniques:(id)arg1;
- (id)initWithTechniques:(id)arg1;
- (id)techniques;
- (id)techniqueOfClass:(Class)arg1;
- (void)siblingTechniquesDidChange:(id)arg1;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3;
- (void)replaceTechniques:(id)arg1;

@end
