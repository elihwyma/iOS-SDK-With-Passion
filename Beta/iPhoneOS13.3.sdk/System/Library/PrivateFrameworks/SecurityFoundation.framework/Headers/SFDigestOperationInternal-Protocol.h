/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/Swift-Protocol.h>

@protocol SFDigestOperationInternal <Swift>

@property (nonatomic, readonly, getter=_secKeyECDSAAlgorithm) const struct __CFString *secKeyECDSAAlgorithm;
@property (nonatomic, readonly, getter=_ccDigestInfo) const struct ccdigest_info *ccDigestInfo;

@end
