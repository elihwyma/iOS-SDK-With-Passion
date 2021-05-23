/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemDashboardDeclaration_WhiteListItem : CEMPayloadBase

{
    NSString *_payloadType;
    NSString *_payloadID;
}

@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSString *payloadID;

+ (id)allowedPayloadKeys;
+ (id)buildWithType:(id)arg1 withID:(id)arg2;
+ (id)buildRequiredOnlyWithType:(id)arg1 withID:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
