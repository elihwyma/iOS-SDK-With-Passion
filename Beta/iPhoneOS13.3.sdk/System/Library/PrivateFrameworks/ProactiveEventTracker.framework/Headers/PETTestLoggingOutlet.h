/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PETTestLoggingOutlet : NSObject

{
    NSString *_lastLoggedKey;
    unsigned long long _lastLoggedScalarValue;
    double _lastLoggedDistributionValue;
    NSString *_previousLoggedKey;
    unsigned long long _previousLoggedScalarValue;
    double _previousLoggedDistributionValue;
    NSMutableArray *_allLoggedKeys;
    NSMutableArray *_allLoggedValues;
    NSMutableDictionary *_keyValues;
}

@property (nonatomic, readonly) NSString *lastLoggedKey;
@property (nonatomic, readonly) unsigned long long lastLoggedScalarValue;
@property (nonatomic, readonly) double lastLoggedDistributionValue;
@property (nonatomic, readonly) NSString *previousLoggedKey;
@property (nonatomic, readonly) unsigned long long previousLoggedScalarValue;
@property (nonatomic, readonly) double previousLoggedDistributionValue;
@property (nonatomic, readonly) NSMutableArray *allLoggedKeys;
@property (nonatomic, readonly) NSMutableArray *allLoggedValues;
@property (nonatomic, readonly) NSMutableDictionary *keyValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)reset;
- (id)getValueForKey:(id)arg1;
- (void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (void)logDoubleValue:(double)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (void)logErrorForEvent:(id)arg1 featureId:(id)arg2 reason:(id)arg3;

@end
