/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2SPI.h>

@interface NEIKEv2ESPSPI : NEIKEv2SPI

{
    unsigned int _value;
}

@property unsigned int value;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValue:(unsigned int)arg1;

@end
