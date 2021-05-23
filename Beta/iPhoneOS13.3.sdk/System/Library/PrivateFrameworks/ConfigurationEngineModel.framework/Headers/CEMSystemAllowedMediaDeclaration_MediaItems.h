/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMSystemAllowedMediaDeclaration_MediaItems : CEMPayloadBase

{
    NSString *_payloadAllMedia;
    NSArray *_payloadCd;
    NSArray *_payloadDvd;
    NSArray *_payloadBd;
    NSArray *_payloadBlankcd;
    NSArray *_payloadBlankdvd;
    NSArray *_payloadBlankbd;
    NSArray *_payloadDvdram;
    NSArray *_payloadDiskImage;
    NSArray *_payloadHarddiskInternal;
    NSArray *_payloadHarddiskExternal;
    NSArray *_payloadNetworkdisk;
}

@property (copy, nonatomic) NSString *payloadAllMedia;
@property (copy, nonatomic) NSArray *payloadCd;
@property (copy, nonatomic) NSArray *payloadDvd;
@property (copy, nonatomic) NSArray *payloadBd;
@property (copy, nonatomic) NSArray *payloadBlankcd;
@property (copy, nonatomic) NSArray *payloadBlankdvd;
@property (copy, nonatomic) NSArray *payloadBlankbd;
@property (copy, nonatomic) NSArray *payloadDvdram;
@property (copy, nonatomic) NSArray *payloadDiskImage;
@property (copy, nonatomic) NSArray *payloadHarddiskInternal;
@property (copy, nonatomic) NSArray *payloadHarddiskExternal;
@property (copy, nonatomic) NSArray *payloadNetworkdisk;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAllMedia:(id)arg1 withCd:(id)arg2 withDvd:(id)arg3 withBd:(id)arg4 withBlankcd:(id)arg5 withBlankdvd:(id)arg6 withBlankbd:(id)arg7 withDvdram:(id)arg8 withDiskImage:(id)arg9 withHarddiskInternal:(id)arg10 withHarddiskExternal:(id)arg11 withNetworkdisk:(id)arg12;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
