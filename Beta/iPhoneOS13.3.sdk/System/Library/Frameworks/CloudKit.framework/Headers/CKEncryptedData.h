/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSData, NSString;

@interface CKEncryptedData : NSObject

{
    NSData *_data;
    NSData *_encryptedData;
}

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSData *encryptedData;
@property (nonatomic, readonly) _Bool needsEncryption;
@property (nonatomic, readonly) _Bool needsDecryption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)value;
- (id)initWithValue:(id)arg1;
- (id)CKPropertiesDescription;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithEncryptedData:(id)arg1;

@end
