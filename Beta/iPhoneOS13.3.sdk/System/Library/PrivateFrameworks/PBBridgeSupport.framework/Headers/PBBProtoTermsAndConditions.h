/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface PBBProtoTermsAndConditions : PBCodable

{
    NSString *_agreeDialogText;
    NSString *_agreeDialogTitle;
    NSString *_agreeLabel;
    NSString *_cancelLabel;
    NSString *_disagreeLabel;
    NSData *_license;
    NSString *_licenseLabel;
    NSData *_multiterms;
    NSData *_serverTerms;
    NSString *_userAgent;
    NSData *_warranty;
    NSString *_warrantyLabel;
}

@property (nonatomic, readonly) _Bool hasLicense;
@property (retain, nonatomic) NSData *license;
@property (nonatomic, readonly) _Bool hasMultiterms;
@property (retain, nonatomic) NSData *multiterms;
@property (nonatomic, readonly) _Bool hasWarranty;
@property (retain, nonatomic) NSData *warranty;
@property (nonatomic, readonly) _Bool hasLicenseLabel;
@property (retain, nonatomic) NSString *licenseLabel;
@property (nonatomic, readonly) _Bool hasWarrantyLabel;
@property (retain, nonatomic) NSString *warrantyLabel;
@property (nonatomic, readonly) _Bool hasAgreeDialogTitle;
@property (retain, nonatomic) NSString *agreeDialogTitle;
@property (nonatomic, readonly) _Bool hasAgreeDialogText;
@property (retain, nonatomic) NSString *agreeDialogText;
@property (nonatomic, readonly) _Bool hasAgreeLabel;
@property (retain, nonatomic) NSString *agreeLabel;
@property (nonatomic, readonly) _Bool hasCancelLabel;
@property (retain, nonatomic) NSString *cancelLabel;
@property (nonatomic, readonly) _Bool hasDisagreeLabel;
@property (retain, nonatomic) NSString *disagreeLabel;
@property (nonatomic, readonly) _Bool hasServerTerms;
@property (retain, nonatomic) NSData *serverTerms;
@property (nonatomic, readonly) _Bool hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
