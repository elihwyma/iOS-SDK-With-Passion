/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEIKEv2EncryptionProtocol : NSObject

{
    _Bool _is256Bit;
    unsigned long long _wireType;
}

@property (readonly) unsigned int keyLength;
@property (readonly) unsigned int blockLength;
@property (readonly) unsigned int ivLength;
@property (readonly) unsigned int icvLength;
@property unsigned long long wireType;
@property (readonly) _Bool isAuthenticated;
@property (readonly) _Bool isGCM;
@property _Bool is256Bit;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEncryptionWireType:(unsigned long long)arg1 is256Bit:(_Bool)arg2;
- (id)initWithEncryptionType:(unsigned long long)arg1;
- (unsigned int)ccAlgorithm;

@end
