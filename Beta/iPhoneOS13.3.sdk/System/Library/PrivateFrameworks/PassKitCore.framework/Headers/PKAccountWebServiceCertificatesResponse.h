/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray, NSString;

@interface PKAccountWebServiceCertificatesResponse : PKAccountWebServiceResponse

{
    _Bool _devSigned;
    NSArray *_encryptionCertificates;
    NSString *_encryptionVersion;
}

@property (copy, nonatomic, readonly) NSArray *encryptionCertificates;
@property (copy, nonatomic, readonly) NSString *encryptionVersion;
@property (nonatomic) _Bool devSigned;

- (id)initWithData:(id)arg1;

@end
