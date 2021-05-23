/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

@class MXMDisplayDescriptor, NSString;

@protocol MXMDisplayProbePlatformDelegate, OS_dispatch_queue;

@interface MXMDisplayProbe_iphoneOS_Internal : NSObject

{
    id <MXMDisplayProbePlatformDelegate> _delegate;
    MXMDisplayDescriptor *_displayDescriptor;
    CDStruct_db19de03 _lastSample;
    NSObject<OS_dispatch_queue> *_queue;
    double _pollRate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <MXMDisplayProbePlatformDelegate> delegate;

+ (unsigned long long)_displayIndexWithDescriptor:(id)arg1;
+ (id)_allDescriptors;

- (void)_start;
- (void)_stop;
- (void)_loop;
- (void)_pollMain;
- (id)initPrivateWithDescriptor:(id)arg1 queue:(id)arg2;
- (CDStruct_db19de03)_pollDisplayForSample;

@end
