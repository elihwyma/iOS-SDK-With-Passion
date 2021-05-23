/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMDeviceHomeScreenLayoutDeclaration_IconItem : CEMPayloadBase

{
    NSString *_payloadType;
    NSString *_payloadDisplayName;
    NSString *_payloadBundleID;
    NSArray *_payloadPages;
    NSString *_payloadURL;
}

@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSString *payloadDisplayName;
@property (copy, nonatomic) NSString *payloadBundleID;
@property (copy, nonatomic) NSArray *payloadPages;
@property (copy, nonatomic) NSString *payloadURL;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithType:(id)arg1;
+ (id)buildWithType:(id)arg1 withDisplayName:(id)arg2 withBundleID:(id)arg3 withPages:(id)arg4 withURL:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
