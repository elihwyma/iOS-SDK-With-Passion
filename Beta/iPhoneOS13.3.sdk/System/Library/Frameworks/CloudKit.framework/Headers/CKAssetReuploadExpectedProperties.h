/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSData;

@interface CKAssetReuploadExpectedProperties : NSObject

{
    NSData *_fileSignature;
    NSData *_referenceSignature;
    NSData *_assetKey;
}

@property (copy, nonatomic) NSData *fileSignature;
@property (copy, nonatomic) NSData *referenceSignature;
@property (copy, nonatomic) NSData *assetKey;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;

@end
