/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSObject.h>

#import <CoreNFC/Swift-Protocol.h>

@class NSData;

@interface NFCISO7816APDU : NSObject <Swift>

{
    struct _NSRange _payloadOffset;
    long long _le;
    NSData *_fullPacket;
}

@property (nonatomic, readonly) unsigned char instructionClass;
@property (nonatomic, readonly) unsigned char instructionCode;
@property (nonatomic, readonly) unsigned char p1Parameter;
@property (nonatomic, readonly) unsigned char p2Parameter;
@property (copy, nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long expectedResponseLength;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)asData;
- (id)initWithInstructionClass:(unsigned char)arg1 instructionCode:(unsigned char)arg2 p1Parameter:(unsigned char)arg3 p2Parameter:(unsigned char)arg4 data:(id)arg5 expectedResponseLength:(long long)arg6;

@end
