/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMDeclarationBase : CEMPayloadBase

{
    NSString *_declarationType;
    NSString *_declarationIdentifier;
    NSString *_declarationDescription;
    NSString *_declarationServerHash;
    NSNumber *_declarationRequiresNetworkTether;
    NSString *_declarationActivationScope;
    CEMAnyPayload *_declarationPayload;
}

@property (copy, nonatomic) NSString *declarationType;
@property (copy, nonatomic) NSString *declarationIdentifier;
@property (copy, nonatomic) NSString *declarationDescription;
@property (copy, nonatomic) NSString *declarationServerHash;
@property (copy, nonatomic) NSNumber *declarationRequiresNetworkTether;
@property (copy, nonatomic) NSString *declarationActivationScope;
@property (copy, nonatomic) CEMAnyPayload *declarationPayload;

+ (id)declarationForData:(id)arg1 error:(id *)arg2;
+ (id)declarationClass;
+ (id)declarationForPayload:(id)arg1 error:(id *)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serialize;
- (void)updateServerHash;
- (id)serializeAsDataWithError:(id *)arg1;
- (_Bool)loadDeclarationFromDictionary:(id)arg1 error:(id *)arg2;

@end
