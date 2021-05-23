/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary;

@interface PKSecureElementCertificateSet : NSObject <Swift>

{
    _Bool _supportsLegacyFormats;
    NSDictionary *_dictionary;
}

@property (nonatomic) _Bool supportsLegacyFormats;
@property (copy, nonatomic, readonly) NSDictionary *dictionary;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRSACertificate:(id)arg1 ECDSACertificate:(id)arg2;
- (id)certificateOfType:(unsigned long long)arg1;

@end
