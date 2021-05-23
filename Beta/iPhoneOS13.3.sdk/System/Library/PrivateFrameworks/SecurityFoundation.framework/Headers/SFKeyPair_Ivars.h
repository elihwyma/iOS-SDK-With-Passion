/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@interface SFKeyPair_Ivars : NSObject

{
    struct __SecKey *secKey;
    struct NSString *privateKeyDomain;
}

- (void)dealloc;

@end
