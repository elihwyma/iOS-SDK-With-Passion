/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface KCAESGCMDuplexSession : NSObject

{
    _Bool _asSender;
    NSString *_pairingUUID;
    unsigned long long _piggybackingVersion;
    unsigned long long _epoch;
    unsigned long long _context;
    NSData *_secret;
    CDStruct_60067b7e *_send;
    CDStruct_60067b7e *_receive;
}

@property _Bool asSender;
@property unsigned long long context;
@property (retain) NSData *secret;
@property CDStruct_60067b7e *send;
@property CDStruct_60067b7e *receive;
@property (retain) NSString *pairingUUID;
@property unsigned long long piggybackingVersion;
@property unsigned long long epoch;

+ (_Bool)supportsSecureCoding;
+ (id)sessionAsSender:(id)arg1 context:(unsigned long long)arg2;
+ (id)sessionAsReceiver:(id)arg1 context:(unsigned long long)arg2;

- (void)finalize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initAsSender:(id)arg1 context:(unsigned long long)arg2;
- (id)initAsReceiver:(id)arg1 context:(unsigned long long)arg2;
- (id)initWithSecret:(id)arg1 context:(unsigned long long)arg2 as:(_Bool)arg3;
- (id)initWithSecret:(id)arg1 context:(unsigned long long)arg2 as:(_Bool)arg3 pairingUUID:(id)arg4 piggybackingVersion:(unsigned long long)arg5 epoch:(unsigned long long)arg6;
- (unsigned long long)encryptCapsuleSize:(id)arg1 IV:(id)arg2;
- (_Bool)GCM:(const struct ccmode_gcm *)arg1 context:(CDStruct_60067b7e *)arg2 iv:(id)arg3 size:(unsigned long long)arg4 data:(const char *)arg5 processed:(char *)arg6 tag:(char *)arg7 error:(id *)arg8;
- (id)encrypt:(id)arg1 error:(id *)arg2;
- (id)decryptAndVerify:(id)arg1 error:(id *)arg2;

@end
