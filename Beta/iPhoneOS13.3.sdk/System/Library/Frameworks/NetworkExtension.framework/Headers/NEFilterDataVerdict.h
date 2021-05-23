/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFilterVerdict.h>

@class NSURL;

@interface NEFilterDataVerdict : NEFilterVerdict

{
    unsigned long long _passBytes;
    unsigned long long _peekBytes;
    NSURL *_url;
}

@property unsigned long long passBytes;
@property unsigned long long peekBytes;
@property (retain) NSURL *url;

+ (_Bool)supportsSecureCoding;
+ (id)dropVerdict;
+ (id)allowVerdict;
+ (id)needRulesVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (id)dataVerdictWithPassBytes:(unsigned long long)arg1 peekBytes:(unsigned long long)arg2;
+ (id)pauseVerdict;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
