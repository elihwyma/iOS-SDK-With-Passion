/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMApplicationListInstalledApplicationsCommand_Status : CEMPayloadBase

{
    NSArray *_statusInstalledApplicationList;
}

@property (copy, nonatomic) NSArray *statusInstalledApplicationList;

+ (id)allowedStatusKeys;
+ (id)allowedReasons;
+ (id)buildWithInstalledApplicationList:(id)arg1;
+ (id)buildRequiredOnlyWithInstalledApplicationList:(id)arg1;

- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
