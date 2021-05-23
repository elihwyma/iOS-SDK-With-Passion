/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2SPI.h>

@interface NEIKEv2IKESPI : NEIKEv2SPI

{
    unsigned long long _value;
}

@property unsigned long long value;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValue:(unsigned long long)arg1;

@end
