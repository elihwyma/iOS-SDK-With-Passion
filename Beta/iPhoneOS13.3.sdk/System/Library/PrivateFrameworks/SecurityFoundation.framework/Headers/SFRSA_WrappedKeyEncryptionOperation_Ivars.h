/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class SFRSAEncryptionOperation, SFSymmetricEncryptionOperation;

@interface SFRSA_WrappedKeyEncryptionOperation_Ivars : NSObject

{
    SFRSAEncryptionOperation *keyWrappingOperation;
    SFSymmetricEncryptionOperation *sessionEncryptionOperation;
}

@end
