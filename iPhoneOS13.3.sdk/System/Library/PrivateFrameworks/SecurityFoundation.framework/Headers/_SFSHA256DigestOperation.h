//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFDigestOperation-Protocol.h>
#import <SecurityFoundation/SFDigestOperationInternal-Protocol.h>

@class NSData;

@interface _SFSHA256DigestOperation : NSObject <SFDigestOperationInternal, SFDigestOperation>
{
    id _sha256DigestOperationInternal;
}

+ (long long)blockSize;
+ (long long)outputSize;
+ (BOOL)supportsSecureCoding;
+ (id)digest:(id)arg1;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=_ccDigestInfo) const struct ccdigest_info ccDigestInfo;
@property(readonly, nonatomic, getter=_secKeyECDSAAlgorithm) const struct __CFString secKeyECDSAAlgorithm;
- (void)addData:(id)arg1;
@property(readonly, copy) NSData *hashValue;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

