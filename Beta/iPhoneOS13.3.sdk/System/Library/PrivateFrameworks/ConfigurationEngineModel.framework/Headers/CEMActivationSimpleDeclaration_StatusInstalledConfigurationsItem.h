/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMActivationSimpleDeclaration_StatusInstalledConfigurationsItem : CEMPayloadBase

{
    NSString *_statusIdentifier;
    NSString *_statusServerHash;
}

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSString *statusServerHash;

+ (id)allowedStatusKeys;
+ (id)buildWithIdentifier:(id)arg1 withServerHash:(id)arg2;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withServerHash:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
