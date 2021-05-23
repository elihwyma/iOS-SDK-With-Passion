/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPredicateBase.h>

@class CEMPredicateCompositeBudget_Monitors, NSArray, NSString;

@interface CEMPredicateCompositeBudget : CEMPredicateBase

{
    NSString *_payloadCalendarIdentifier;
    CEMPredicateCompositeBudget_Monitors *_payloadMonitors;
    NSArray *_payloadNotificationTimes;
    NSArray *_payloadTimeBudget;
}

@property (copy, nonatomic) NSString *payloadCalendarIdentifier;
@property (copy, nonatomic) CEMPredicateCompositeBudget_Monitors *payloadMonitors;
@property (copy, nonatomic) NSArray *payloadNotificationTimes;
@property (copy, nonatomic) NSArray *payloadTimeBudget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitors:(id)arg2 withNotificationTimes:(id)arg3 withTimeBudget:(id)arg4;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildRequiredOnlyWithMonitors:(id)arg1 withTimeBudget:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
