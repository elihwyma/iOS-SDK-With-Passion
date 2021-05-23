/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMEventBase : CEMPayloadBase

{
    NSString *_payloadType;
}

@property (copy, nonatomic) NSString *payloadType;

+ (id)eventForPayload:(id)arg1 error:(id *)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
