/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase

{
    NSString *_statusIdentifier;
    NSString *_statusExtensionPoint;
    NSString *_statusDisplayName;
}

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSString *statusExtensionPoint;
@property (copy, nonatomic) NSString *statusDisplayName;

+ (id)allowedStatusKeys;
+ (id)buildWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
