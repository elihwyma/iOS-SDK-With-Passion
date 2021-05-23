/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPredicateBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMPredicateWeeklyTimeRange : CEMPredicateBase

{
    NSString *_payloadCalendarIdentifier;
    NSNumber *_payloadStartDay;
    NSString *_payloadStartTime;
    NSNumber *_payloadEndDay;
    NSString *_payloadEndTime;
    NSArray *_payloadNotificationTimes;
}

@property (copy, nonatomic) NSString *payloadCalendarIdentifier;
@property (copy, nonatomic) NSNumber *payloadStartDay;
@property (copy, nonatomic) NSString *payloadStartTime;
@property (copy, nonatomic) NSNumber *payloadEndDay;
@property (copy, nonatomic) NSString *payloadEndTime;
@property (copy, nonatomic) NSArray *payloadNotificationTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildWithCalendarIdentifier:(id)arg1 withStartDay:(id)arg2 withStartTime:(id)arg3 withEndDay:(id)arg4 withEndTime:(id)arg5 withNotificationTimes:(id)arg6;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildRequiredOnlyWithStartDay:(id)arg1 withStartTime:(id)arg2 withEndDay:(id)arg3 withEndTime:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
