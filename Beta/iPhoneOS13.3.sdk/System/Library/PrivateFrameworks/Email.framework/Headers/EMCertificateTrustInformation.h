/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class ECSecureMIMETrustEvaluation, NSString;

@protocol ECEmailAddressConvertible;

@interface EMCertificateTrustInformation : NSObject <Swift>

{
    _Bool __forceNetworkAccessAllowed;
    struct __SecTrust *_trust;
    ECSecureMIMETrustEvaluation *_trustEvaluation;
    NSString *_sender;
    unsigned long long _certificateType;
}

@property (nonatomic) struct __SecTrust *trust;
@property (nonatomic) unsigned long long certificateType;
@property (retain, nonatomic) ECSecureMIMETrustEvaluation *trustEvaluation;
@property (copy, nonatomic) NSString *sender;
@property (nonatomic) _Bool _forceNetworkAccessAllowed;
@property (copy, nonatomic, readonly) id <ECEmailAddressConvertible> emailAddress;
@property (copy, nonatomic, readonly) NSString *commonName;
@property (nonatomic, readonly) struct __SecCertificate *certificate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)log;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrust:(struct __SecTrust *)arg1 certificateType:(unsigned long long)arg2 sender:(id)arg3;
- (void)evaluateTrustWithOptions:(unsigned long long)arg1;
- (void)reevaluateTrustWithNetworkAccessAllowed;

@end
