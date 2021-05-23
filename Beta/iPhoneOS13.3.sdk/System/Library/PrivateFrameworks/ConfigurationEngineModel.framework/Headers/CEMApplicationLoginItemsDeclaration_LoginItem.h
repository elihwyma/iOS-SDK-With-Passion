/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMApplicationLoginItemsDeclaration_LoginItem : CEMPayloadBase

{
    NSString *_payloadPath;
    NSNumber *_payloadHide;
}

@property (copy, nonatomic) NSString *payloadPath;
@property (copy, nonatomic) NSNumber *payloadHide;

+ (id)allowedPayloadKeys;
+ (id)buildWithPath:(id)arg1 withHide:(id)arg2;
+ (id)buildRequiredOnlyWithPath:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
