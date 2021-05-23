/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDDemoDataGenerator;

@interface HDDemoDataBaseSampleGenerator : NSObject <Swift>

{
    _Bool _createdFromNSKeyedUnarchiver;
    HDDemoDataGenerator *_demoDataGenerator;
}

@property (nonatomic) _Bool createdFromNSKeyedUnarchiver;
@property (weak, nonatomic) HDDemoDataGenerator *demoDataGenerator;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (_Bool)_createdFromNSKeyedUnarchiver;

@end
