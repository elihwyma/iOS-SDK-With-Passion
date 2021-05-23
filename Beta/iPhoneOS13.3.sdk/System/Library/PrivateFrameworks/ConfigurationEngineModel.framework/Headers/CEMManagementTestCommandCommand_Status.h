/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestCommandCommand_Status : CEMPayloadBase

{
    NSString *_statusEcho;
}

@property (copy, nonatomic) NSString *statusEcho;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithEcho:(id)arg1;
+ (id)buildRequiredOnlyWithEcho:(id)arg1;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
