/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, _SFKeySpecifier;

@interface SFIdentityAttributes_Ivars : NSObject

{
    NSString *localizedLabel;
    NSString *localizedDescription;
    _SFKeySpecifier *keySpecifier;
    NSString *identityName;
    struct NSString *privateKeyDomain;
    _Bool hasCertificate;
}

@end
