/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMCommandBase : CEMPayloadBase

{
    NSString *_commandType;
    NSString *_commandIdentifier;
    NSString *_commandDescription;
    NSNumber *_commandRequiresNetworkTether;
    CEMAnyPayload *_commandPayload;
}

@property (copy, nonatomic) NSString *commandType;
@property (copy, nonatomic) NSString *commandIdentifier;
@property (copy, nonatomic) NSString *commandDescription;
@property (copy, nonatomic) NSNumber *commandRequiresNetworkTether;
@property (copy, nonatomic) CEMAnyPayload *commandPayload;

+ (id)commandForPayload:(id)arg1 error:(id *)arg2;
+ (id)commandForData:(id)arg1 error:(id *)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serialize;
- (id)serializeAsDataWithError:(id *)arg1;
- (_Bool)mustBeSupervised;
- (int)executionLevel;
- (_Bool)loadCommandFromDictionary:(id)arg1 error:(id *)arg2;

@end
