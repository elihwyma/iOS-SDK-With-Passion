/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class _SFECKeyPair, _SFECPublicKey;

@interface _SFECDHKeySource : NSObject

{
    id _ecdhKeySourceInternal;
}

@property (retain, nonatomic) _SFECKeyPair *localKeyPair;
@property (retain, nonatomic) _SFECPublicKey *remotePublicKey;

- (id)initWithLocalKeyPair:(id)arg1 remotePublickKey:(id)arg2;

@end
