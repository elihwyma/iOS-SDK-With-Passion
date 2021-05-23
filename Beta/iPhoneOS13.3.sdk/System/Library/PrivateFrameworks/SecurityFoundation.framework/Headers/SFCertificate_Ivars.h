/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface SFCertificate_Ivars : NSObject

{
    long long certificateType;
    NSString *subject;
    NSString *issuerName;
    NSData *serialNumber;
    struct __SecCertificate *secCertificate;
}

@end
