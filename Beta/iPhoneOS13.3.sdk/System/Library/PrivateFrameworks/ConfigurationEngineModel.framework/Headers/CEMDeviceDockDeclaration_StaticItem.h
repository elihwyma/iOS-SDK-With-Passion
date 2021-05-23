/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMDeviceDockDeclaration_StaticItemTileData, NSString;

@interface CEMDeviceDockDeclaration_StaticItem : CEMPayloadBase

{
    CEMDeviceDockDeclaration_StaticItemTileData *_payloadTileData;
    NSString *_payloadTileType;
}

@property (copy, nonatomic) CEMDeviceDockDeclaration_StaticItemTileData *payloadTileData;
@property (copy, nonatomic) NSString *payloadTileType;

+ (id)allowedPayloadKeys;
+ (id)buildWithTileData:(id)arg1 withTileType:(id)arg2;
+ (id)buildRequiredOnlyWithTileData:(id)arg1 withTileType:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
