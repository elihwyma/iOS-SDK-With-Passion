/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface TPRecoveryKeyPair : NSObject

{
    NSData *_signingSPKI;
    NSData *_encryptionSPKI;
}

@property (retain, readonly) NSData *signingSPKI;
@property (retain, readonly) NSData *encryptionSPKI;

- (id)initWithSigningSPKI:(id)arg1 encryptionSPKI:(id)arg2;

@end
