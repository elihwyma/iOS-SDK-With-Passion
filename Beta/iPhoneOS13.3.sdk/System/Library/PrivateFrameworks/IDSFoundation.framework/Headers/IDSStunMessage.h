/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface IDSStunMessage : NSObject

{
    long long _type;
    unsigned short _len;
    NSData *_transactionID;
    NSString *_requestID;
    struct IDSStunAttribute _attributes[20];
    int _numAttribute;
    NSData *_key;
    struct _CCCryptor *_cryptorRef;
    _Bool _requiresAES128CTR;
    double _startTime;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSData *transactionID;
@property (nonatomic, readonly) NSString *requestID;
@property (copy, nonatomic) NSData *key;
@property (nonatomic) double startTime;

- (void)dealloc;
- (id)description;
- (void)setAttributes:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)setTransactionID:(id)arg1;
- (_Bool)addAttribute:(struct IDSStunAttribute *)arg1;
- (_Bool)getAttribute:(long long)arg1 attribute:(struct IDSStunAttribute *)arg2;
- (_Bool)read:(char *)arg1 inputLength:(unsigned long long)arg2 internal:(_Bool)arg3;
- (_Bool)verifyMessageIntegrityWithKey:(id)arg1 inputBuffer:(char *)arg2 inputLength:(int)arg3;
- (_Bool)decryptAES128CTRStunAttributes:(id)arg1;
- (_Bool)write:(char *)arg1 outputLength:(int *)arg2 remainingLength:(unsigned long long)arg3 internal:(_Bool)arg4;
- (_Bool)initAES128CTR:(id)arg1;
- (void)setTransactionID:(id)arg1 attributes:(id)arg2;
- (_Bool)read:(char *)arg1 inputLength:(unsigned long long)arg2;
- (void)_addUInt16Attribute:(long long)arg1 value:(unsigned short)arg2;
- (void)_addBinaryDataAttribute:(long long)arg1 value:(id)arg2;
- (void)_addUInt32Attribute:(long long)arg1 value:(unsigned int)arg2;
- (void)_addUInt64Attribute:(long long)arg1 value:(unsigned long long)arg2;
- (_Bool)write:(char *)arg1 outputLength:(int *)arg2 remainingLength:(unsigned long long)arg3;
- (void)_addUUIDAttribute:(long long)arg1 value:(id)arg2;
- (void)_addXORAddressAttribute:(long long)arg1 value:(struct sockaddr *)arg2;
- (void)_addUInt8Attribute:(long long)arg1 value:(unsigned char)arg2;
- (_Bool)hasAttribute:(unsigned short)arg1;
- (_Bool)stunRequestToBuffer:(char *)arg1 outputLength:(int *)arg2 transactionID:(char *)arg3 reqCount:(int)arg4 userName:(char *)arg5 usernameLen:(int)arg6 sendTime:(unsigned short)arg7 keyData:(id)arg8 remainingLength:(unsigned long long)arg9;
- (_Bool)stunResponseToBuffer:(char *)arg1 outputLength:(int *)arg2 transactionID:(id)arg3 reqCount:(int)arg4 echoTime:(unsigned short)arg5 delay:(unsigned short)arg6 keyData:(id)arg7 remainingLength:(unsigned long long)arg8;
- (_Bool)dataIndicationToBuffer:(char *)arg1 outputLength:(int *)arg2 data:(char *)arg3 dataLen:(int)arg4 keyData:(id)arg5 remainingLength:(unsigned long long)arg6;

@end
