/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMActivationSimpleDeclaration_Status : CEMPayloadBase

{
    NSArray *_statusInstalledConfigurations;
}

@property (copy, nonatomic) NSArray *statusInstalledConfigurations;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildRequiredOnly;
+ (id)buildWithInstalledConfigurations:(id)arg1;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
