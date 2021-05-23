/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPredicateBase.h>

@class NSArray, NSString;

@interface CEMPredicateBudget : CEMPredicateBase

{
    NSString *_payloadCalendarIdentifier;
    NSString *_payloadMonitor;
    NSArray *_payloadIdentifiers;
    NSArray *_payloadNotificationTimes;
    NSArray *_payloadTimeBudget;
}

@property (copy, nonatomic) NSString *payloadCalendarIdentifier;
@property (copy, nonatomic) NSString *payloadMonitor;
@property (copy, nonatomic) NSArray *payloadIdentifiers;
@property (copy, nonatomic) NSArray *payloadNotificationTimes;
@property (copy, nonatomic) NSArray *payloadTimeBudget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withNotificationTimes:(id)arg4 withTimeBudget:(id)arg5;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)buildRequiredOnlyWithMonitor:(id)arg1 withTimeBudget:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
