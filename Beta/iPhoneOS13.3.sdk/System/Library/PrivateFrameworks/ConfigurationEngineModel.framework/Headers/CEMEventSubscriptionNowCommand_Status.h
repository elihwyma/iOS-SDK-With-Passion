/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMEventSubscriptionNowCommand_Status : CEMPayloadBase

{
    NSArray *_statusInactiveEvents;
    NSArray *_statusUnknownEvents;
}

@property (copy, nonatomic) NSArray *statusInactiveEvents;
@property (copy, nonatomic) NSArray *statusUnknownEvents;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildRequiredOnly;
+ (id)buildWithInactiveEvents:(id)arg1 withUnknownEvents:(id)arg2;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
