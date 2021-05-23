/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class SFSymmetricEncryptionOperation, _SFECDHOperation;

@protocol SFDigestOperation;

@interface SFIESOperation_Ivars : NSObject

{
    long long curve;
    _SFECDHOperation *diffieHellmanOperation;
    SFSymmetricEncryptionOperation *encryptionOperation;
    id <SFDigestOperation> digestOperation;
}

@end
