/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class Filter;

__attribute__((visibility("hidden")))
@interface FilterActions : NSObject

{
    unsigned int _triggerSymptomId;
    Filter *_initialFilter;
    long long _delayValue;
    Filter *_finalFilter;
}

@property (nonatomic) unsigned int triggerSymptomId;
@property (nonatomic, readonly) Filter *initialFilter;
@property (nonatomic, readonly) long long delayValue;
@property (nonatomic, readonly) Filter *finalFilter;

+ (id)initForSymptom:(unsigned int)arg1 trigger:(unsigned int)arg2 triggering:(id)arg3 finally:(id)arg4 after:(id)arg5;

- (id)description;
- (void)initForSymptom:(unsigned int)arg1 trigger:(unsigned int)arg2 triggering:(id)arg3 finally:(id)arg4 after:(id)arg5;

@end
