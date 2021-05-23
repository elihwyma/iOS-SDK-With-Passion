/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSData;

@interface CEMPasscodeRequestUnlockTokenCommand_Status : CEMPayloadBase

{
    NSData *_statusUnlockToken;
}

@property (copy, nonatomic) NSData *statusUnlockToken;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildRequiredOnly;
+ (id)buildWithUnlockToken:(id)arg1;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
