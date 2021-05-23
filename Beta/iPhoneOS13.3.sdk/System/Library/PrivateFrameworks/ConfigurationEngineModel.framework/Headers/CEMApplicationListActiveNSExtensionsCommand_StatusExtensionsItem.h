/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMApplicationListActiveNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase

{
    NSString *_statusBundleIdentifier;
    NSString *_statusExtensionPoint;
    NSString *_statusDisplayName;
    NSString *_statusContainerDisplayName;
    NSString *_statusContainerIdentifier;
    NSString *_statusPath;
    NSString *_statusVersion;
    NSString *_statusUserElection;
}

@property (copy, nonatomic) NSString *statusBundleIdentifier;
@property (copy, nonatomic) NSString *statusExtensionPoint;
@property (copy, nonatomic) NSString *statusDisplayName;
@property (copy, nonatomic) NSString *statusContainerDisplayName;
@property (copy, nonatomic) NSString *statusContainerIdentifier;
@property (copy, nonatomic) NSString *statusPath;
@property (copy, nonatomic) NSString *statusVersion;
@property (copy, nonatomic) NSString *statusUserElection;

+ (id)allowedStatusKeys;
+ (id)buildWithBundleIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 withContainerDisplayName:(id)arg4 withContainerIdentifier:(id)arg5 withPath:(id)arg6 withVersion:(id)arg7 withUserElection:(id)arg8;
+ (id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 withPath:(id)arg4 withVersion:(id)arg5 withUserElection:(id)arg6;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
