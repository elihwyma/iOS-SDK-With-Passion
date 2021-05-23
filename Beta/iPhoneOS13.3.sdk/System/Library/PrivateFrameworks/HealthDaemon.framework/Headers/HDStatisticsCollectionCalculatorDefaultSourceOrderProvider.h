/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HKQuantityType, NSString;

@interface HDStatisticsCollectionCalculatorDefaultSourceOrderProvider : NSObject

{
    HDProfile *_profile;
    HKQuantityType *_quantityType;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (copy, nonatomic, readonly) HKQuantityType *quantityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1 quantityType:(id)arg2;
- (id)orderedSourceIDsWithUnorderedIDs:(id)arg1;
- (id)sourceForSourceID:(long long)arg1;

@end
