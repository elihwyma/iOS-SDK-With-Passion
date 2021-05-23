/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMDeviceInformationCommand_StatusErrorResponsesItem : CEMPayloadBase

{
    NSString *_statusCode;
    NSArray *_statusErrorChain;
}

@property (copy, nonatomic) NSString *statusCode;
@property (copy, nonatomic) NSArray *statusErrorChain;

+ (id)allowedStatusKeys;
+ (id)buildWithCode:(id)arg1 withErrorChain:(id)arg2;
+ (id)buildRequiredOnlyWithCode:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
