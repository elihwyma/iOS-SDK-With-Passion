/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXMinimalSlotResolutionParameters, NSDate, NSString;

@interface ATXMinimalActionParameters : NSObject

{
    ATXMinimalSlotResolutionParameters *_minimalSlotResolutionParams;
    NSDate *_actionTime;
    NSString *_bundleId;
    NSString *_actionType;
}

@property (nonatomic, readonly) ATXMinimalSlotResolutionParameters *minimalSlotResolutionParams;
@property (retain, nonatomic) NSDate *actionTime;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *actionType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMinimalSlotResolutionParameters:(id)arg1 actionTime:(id)arg2 bundleId:(id)arg3 actionType:(id)arg4;
- (id)getContainerWithScore:(float)arg1;

@end
