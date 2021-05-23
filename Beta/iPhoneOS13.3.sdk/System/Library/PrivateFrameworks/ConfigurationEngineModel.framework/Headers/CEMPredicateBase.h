/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMPredicateBase : CEMPayloadBase

{
    NSString *_payloadType;
}

@property (copy, nonatomic) NSString *payloadType;

+ (id)predicateForPayload:(id)arg1 error:(id *)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)evaluateWithOptions:(id)arg1 error:(id *)arg2;

@end
