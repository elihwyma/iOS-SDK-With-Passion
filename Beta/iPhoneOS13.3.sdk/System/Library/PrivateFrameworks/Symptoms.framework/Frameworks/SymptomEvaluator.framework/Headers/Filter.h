/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface Filter : NSObject

{
    unsigned int _symptomId;
    long long _subsystemId;
    long long _queueLenAlert;
    long long _queueLenDrop;
    long long _queueTimeLimit;
}

@property (nonatomic) long long subsystemId;
@property (nonatomic) unsigned int symptomId;
@property (nonatomic) long long queueLenAlert;
@property (nonatomic) long long queueLenDrop;
@property (nonatomic) long long queueTimeLimit;

+ (id)initForSymptom:(unsigned int)arg1 withParams:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
