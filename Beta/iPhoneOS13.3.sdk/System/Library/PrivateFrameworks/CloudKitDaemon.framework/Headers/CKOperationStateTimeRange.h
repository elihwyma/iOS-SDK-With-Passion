/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface CKOperationStateTimeRange : NSObject

{
    unsigned long long _operationState;
    NSDate *_startDate;
    double _duration;
}

@property (retain) NSDate *startDate;
@property (readonly) unsigned long long operationState;
@property (readonly) double duration;
@property (readonly) double queueing;
@property (readonly) double executing;
@property (readonly) double absoluteStart;
@property (readonly) double relativeStart;
@property (readonly) double absoluteStop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)CKPropertiesDescription;
- (id)initWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
- (long long)compareStartTime:(id)arg1;
- (long long)compareStopTime:(id)arg1;

@end
