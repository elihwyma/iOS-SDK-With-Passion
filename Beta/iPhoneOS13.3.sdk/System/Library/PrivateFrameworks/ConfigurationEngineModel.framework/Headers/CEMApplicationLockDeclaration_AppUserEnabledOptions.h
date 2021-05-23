/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMApplicationLockDeclaration_AppUserEnabledOptions : CEMPayloadBase

{
    NSNumber *_payloadVoiceOver;
    NSNumber *_payloadZoom;
    NSNumber *_payloadInvertColors;
    NSNumber *_payloadAssistiveTouch;
}

@property (copy, nonatomic) NSNumber *payloadVoiceOver;
@property (copy, nonatomic) NSNumber *payloadZoom;
@property (copy, nonatomic) NSNumber *payloadInvertColors;
@property (copy, nonatomic) NSNumber *payloadAssistiveTouch;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithVoiceOver:(id)arg1 withZoom:(id)arg2 withInvertColors:(id)arg3 withAssistiveTouch:(id)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
