/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMDeviceDockDeclaration_StaticItemTileData : CEMPayloadBase

{
    NSString *_payloadLabel;
    NSString *_payloadUrl;
    NSNumber *_payloadFileType;
    CEMAnyPayload *_payloadFileData;
}

@property (copy, nonatomic) NSString *payloadLabel;
@property (copy, nonatomic) NSString *payloadUrl;
@property (copy, nonatomic) NSNumber *payloadFileType;
@property (copy, nonatomic) CEMAnyPayload *payloadFileData;

+ (id)allowedPayloadKeys;
+ (id)buildWithLabel:(id)arg1 withUrl:(id)arg2 withFileType:(id)arg3 withFileData:(id)arg4;
+ (id)buildRequiredOnlyWithLabel:(id)arg1 withFileType:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
