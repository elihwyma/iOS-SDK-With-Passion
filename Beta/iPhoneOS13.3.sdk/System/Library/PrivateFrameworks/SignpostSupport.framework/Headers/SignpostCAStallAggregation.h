/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, SignpostCAProcessStallAggregation;

@interface SignpostCAStallAggregation : NSObject

{
    SignpostCAProcessStallAggregation *_systemAggregation;
    NSDictionary *_executablePathToStallAggregation;
}

@property (nonatomic, readonly) SignpostCAProcessStallAggregation *systemAggregation;
@property (nonatomic, readonly) NSDictionary *executablePathToStallAggregation;

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_addSystemDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2;
- (void)_addDuration:(unsigned long long)arg1 ofType:(unsigned char)arg2 procExecutablePath:(id)arg3 responsiblePID:(int)arg4 aggregateForSystem:(_Bool)arg5;

@end
