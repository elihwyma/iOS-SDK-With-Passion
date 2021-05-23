/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface BWDroppedSample : NSObject

{
    NSString *_reason;
    CDStruct_1b6d18a9 _pts;
    NSArray *_backPressureSemaphoresToIgnore;
}

@property (readonly) NSString *reason;
@property (readonly) CDStruct_1b6d18a9 pts;
@property (readonly) NSArray *backPressureSemaphoresToIgnore;

+ (id)newDroppedSampleWithReason:(id)arg1 pts:(CDStruct_1b6d18a9)arg2;
+ (id)newDroppedSampleFromDroppedSample:(id)arg1 backPressureSemaphoresToIgnore:(id)arg2;

- (void)dealloc;
- (id)_initDroppedSampleWithReason:(id)arg1 pts:(CDStruct_1b6d18a9)arg2 backPressureSemaphoresToIgnore:(id)arg3;

@end
