/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class ECSecureMIMETrustEvaluation, NSString;

@interface MFCertificateTrustInfo : NSObject

{
    struct __SecTrust *_unevaluatedTrust;
    ECSecureMIMETrustEvaluation *_trustEvaluation;
    NSString *_uncommentedSender;
    unsigned long long _certificateType;
    NSString *_sender;
}

@property (nonatomic, readonly) unsigned long long certificateType;
@property (copy, nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) ECSecureMIMETrustEvaluation *trustEvaluation;
@property (nonatomic, readonly) struct __SecTrust *trust;

- (void)dealloc;
- (id)initWithCertificateType:(unsigned long long)arg1 trust:(struct __SecTrust *)arg2 sender:(id)arg3;

@end
