/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterVerdict.h>

@interface NEFilterAbsoluteVerdict : NEFilterVerdict

{
    unsigned long long _inboundPassOffset;
    unsigned long long _inboundPeekOffset;
    unsigned long long _outboundPassOffset;
    unsigned long long _outboundPeekOffset;
}

@property unsigned long long inboundPassOffset;
@property unsigned long long inboundPeekOffset;
@property unsigned long long outboundPassOffset;
@property unsigned long long outboundPeekOffset;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrop:(_Bool)arg1 inboundPassOffset:(unsigned long long)arg2 inboundPeekOffset:(unsigned long long)arg3 outboundPassOffset:(unsigned long long)arg4 outboundPeekOffset:(unsigned long long)arg5;

@end
