/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXDuetEvent.h>

@class NSArray, NSNumber, NSString;

@interface ATXAppIntentDuetEvent : ATXDuetEvent

{
    NSString *_bundleId;
    NSString *_actionType;
    NSArray *_parameterHashes;
    NSArray *_slotSetHashes;
    NSNumber *_paramCount;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) NSArray *parameterHashes;
@property (nonatomic, readonly) NSArray *slotSetHashes;
@property (nonatomic, readonly) NSNumber *paramCount;

- (id)description;
- (id)identifier;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithBundleId:(id)arg1 actionType:(id)arg2 parameterHashes:(id)arg3 slotSetHashes:(id)arg4 paramCount:(id)arg5 startDate:(id)arg6 endDate:(id)arg7;

@end
