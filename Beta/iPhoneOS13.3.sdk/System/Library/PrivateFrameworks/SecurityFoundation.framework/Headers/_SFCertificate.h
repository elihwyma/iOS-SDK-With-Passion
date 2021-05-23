/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface _SFCertificate : NSObject

{
    id _certificateInternal;
}

@property (nonatomic, readonly) struct __SecCertificate *secCertificate;
@property (nonatomic, readonly) long long certificateType;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *issuerName;
@property (nonatomic, readonly) NSData *serialNumber;

+ (_Bool)supportsSecureCoding;

- (id)initWithSecCertificate:(struct __SecCertificate *)arg1;

@end
