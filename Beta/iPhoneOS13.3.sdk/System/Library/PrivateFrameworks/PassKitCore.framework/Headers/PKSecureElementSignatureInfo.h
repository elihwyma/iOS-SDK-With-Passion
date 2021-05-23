/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString, PKSecureElementCertificateSet;

@interface PKSecureElementSignatureInfo : NSObject <Swift>

{
    NSString *_sequenceCounter;
    NSString *_platformIdentifier;
    PKSecureElementCertificateSet *_certificates;
    unsigned long long _certificateVersion;
}

@property (copy, nonatomic, readonly) NSString *sequenceCounter;
@property (copy, nonatomic, readonly) NSString *platformIdentifier;
@property (copy, nonatomic, readonly) PKSecureElementCertificateSet *certificates;
@property (nonatomic, readonly) unsigned long long certificateVersion;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecureElementCertificateSet:(id)arg1 sequenceCounter:(id)arg2 platformIdentifier:(id)arg3 certificateVersion:(unsigned long long)arg4;

@end
