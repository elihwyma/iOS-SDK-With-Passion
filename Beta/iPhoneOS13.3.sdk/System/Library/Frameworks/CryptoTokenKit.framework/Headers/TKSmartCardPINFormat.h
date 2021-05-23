/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@interface TKSmartCardPINFormat : NSObject

{
    long long _charset;
    long long _encoding;
    long long _minPINLength;
    long long _maxPINLength;
    long long _PINBlockByteLength;
    long long _PINJustification;
    long long _PINBitOffset;
    long long _PINLengthBitOffset;
    long long _PINLengthBitSize;
}

@property long long charset;
@property long long encoding;
@property long long minPINLength;
@property long long maxPINLength;
@property long long PINBlockByteLength;
@property long long PINJustification;
@property long long PINBitOffset;
@property long long PINLengthBitOffset;
@property long long PINLengthBitSize;

+ (_Bool)supportsSecureCoding;
+ (void)_writeNumber:(unsigned long long)arg1 into:(id)arg2 bitOffset:(long long)arg3 bitLength:(long long)arg4;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)fillPIN:(id)arg1 intoAPDUTemplate:(id)arg2 PINByteOffset:(long long)arg3 error:(id *)arg4;

@end
