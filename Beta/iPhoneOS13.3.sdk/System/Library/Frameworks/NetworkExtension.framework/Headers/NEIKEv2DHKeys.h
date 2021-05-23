/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData;

@interface NEIKEv2DHKeys : NSObject

{
    int _desc;
    int _type;
    int _gen1;
    int _gen2;
    NSData *_prime;
    NSData *_curveA;
    NSData *_curveB;
    NSData *_order;
    struct NSMutableData *_publicKey;
    unsigned long long _publicKeySize;
    struct OpaqueSecDHContext *_context;
}

@property int desc;
@property int type;
@property (retain) NSData *prime;
@property int gen1;
@property int gen2;
@property (retain) NSData *curveA;
@property (retain) NSData *curveB;
@property (retain) NSData *order;
@property (retain) NSMutableData *publicKey;
@property unsigned long long publicKeySize;
@property struct OpaqueSecDHContext *context;

- (void)dealloc;
- (_Bool)getECCP:(const struct ccec_cp **)arg1;
- (_Bool)checkDHPublic;
- (_Bool)generatePublicKeyWithECPKey:(struct ccec_full_ctx *)arg1 curveKey:(unsigned char (*)[32])arg2;
- (struct NSMutableData *)createSharedSecretForECPKey:(struct ccec_full_ctx *)arg1 curveKey:(unsigned char (*)[32])arg2 remotePublicKey:(id)arg3 publicKeySize:(unsigned long long)arg4 dhContext:(struct OpaqueSecDHContext *)arg5;

@end
