/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData;

@interface HAPSecuritySessionEncryption : NSObject

{
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
}

@property (retain, nonatomic) NSData *inputKey;
@property (retain, nonatomic) NSMutableData *inputNonce;
@property (retain, nonatomic) NSData *outputKey;
@property (retain, nonatomic) NSMutableData *outputNonce;

- (id)init;
- (id)initWithInputKey:(id)arg1 outputKey:(id)arg2;
- (id)encrypt:(id)arg1 additionalAuthenticatedData:(id)arg2;
- (id)decrypt:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;
- (id)decrypt:(const void *)arg1 length:(unsigned long long)arg2 additionalAuthData:(const void *)arg3 additionalAuthDataLength:(unsigned long long)arg4 authTagData:(const void *)arg5 authTagDataLength:(unsigned long long)arg6 error:(id *)arg7;

@end
