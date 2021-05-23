/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSData, NSString;

@interface _SFSHA384DigestOperation : NSObject <Swift>

{
    id _sha384DigestOperationInternal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSData *hashValue;
@property (nonatomic, readonly, getter=_secKeyECDSAAlgorithm) const struct __CFString *secKeyECDSAAlgorithm;
@property (nonatomic, readonly, getter=_ccDigestInfo) const struct ccdigest_info *ccDigestInfo;

+ (_Bool)supportsSecureCoding;
+ (long long)outputSize;
+ (long long)blockSize;
+ (id)digest:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addData:(id)arg1;

@end
