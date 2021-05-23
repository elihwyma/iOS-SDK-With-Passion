/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterVerdict.h>

@interface NEFilterNewFlowVerdict : NEFilterVerdict

{
    _Bool _filterInbound;
    _Bool _filterOutbound;
    unsigned long long _peekInboundBytes;
    unsigned long long _peekOutboundBytes;
}

@property _Bool filterInbound;
@property _Bool filterOutbound;
@property unsigned long long peekInboundBytes;
@property unsigned long long peekOutboundBytes;

+ (_Bool)supportsSecureCoding;
+ (id)dropVerdict;
+ (id)allowVerdict;
+ (id)needRulesVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (id)pauseVerdict;
+ (id)URLAppendStringVerdictWithMapKey:(id)arg1;
+ (id)filterDataVerdictWithFilterInbound:(_Bool)arg1 peekInboundBytes:(unsigned long long)arg2 filterOutbound:(_Bool)arg3 peekOutboundBytes:(unsigned long long)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
