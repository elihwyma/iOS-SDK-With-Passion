/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMManagementStateCommand_Status : CEMPayloadBase

{
    NSArray *_statusCommands;
    NSArray *_statusDeclarations;
}

@property (copy, nonatomic) NSArray *statusCommands;
@property (copy, nonatomic) NSArray *statusDeclarations;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithCommands:(id)arg1 withDeclarations:(id)arg2;
+ (id)buildRequiredOnlyWithCommands:(id)arg1 withDeclarations:(id)arg2;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
