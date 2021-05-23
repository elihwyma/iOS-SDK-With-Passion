/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class NSData, NSString;

@interface CRKIdentityConfiguration : NSObject <Swift>

{
    _Bool _createsCertificateAuthority;
    _Bool _addsClientAuthAndServerAuthEKUs;
    unsigned int _hashingAlgorithm;
    NSString *_commonName;
    long long _keySizeInBits;
}

@property (copy, nonatomic, readonly) NSString *commonName;
@property (copy, nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic) long long keySizeInBits;
@property (nonatomic) _Bool createsCertificateAuthority;
@property (nonatomic) unsigned int hashingAlgorithm;
@property (nonatomic) _Bool addsClientAuthAndServerAuthEKUs;

+ (_Bool)supportsSecureCoding;
+ (long long)defaultKeySizeInBits;
+ (_Bool)defaultCreatesCertificateAuthority;
+ (unsigned int)defaultHashingAlgorithm;
+ (id)configurationWithData:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommonName:(id)arg1;

@end
