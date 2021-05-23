/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMNSExtensionsMappingsNSExtensionsCommand_Status : CEMPayloadBase

{
    NSArray *_statusExtensions;
}

@property (copy, nonatomic) NSArray *statusExtensions;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithExtensions:(id)arg1;
+ (id)buildRequiredOnlyWithExtensions:(id)arg1;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
