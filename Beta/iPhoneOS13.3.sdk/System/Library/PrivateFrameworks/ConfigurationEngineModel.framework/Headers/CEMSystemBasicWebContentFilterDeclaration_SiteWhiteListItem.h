/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemBasicWebContentFilterDeclaration_SiteWhiteListItem : CEMPayloadBase

{
    NSString *_payloadAddress;
    NSString *_payloadBookmarkPath;
    NSString *_payloadPageTitle;
}

@property (copy, nonatomic) NSString *payloadAddress;
@property (copy, nonatomic) NSString *payloadBookmarkPath;
@property (copy, nonatomic) NSString *payloadPageTitle;

+ (id)buildWithAddress:(id)arg1 withPageTitle:(id)arg2;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithAddress:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
